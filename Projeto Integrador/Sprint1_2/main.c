#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "pcg32_random_r.h"
#include "sensores.h"
#include "us103.h"
#include "us104.h"
#include "us110.h"
#include "us111.h"
#include "us112.h"

uint64_t inc = 0;
uint64_t state = 0;

char temperatura_atual = 0;
unsigned char velc_vento_atual = 0;
unsigned char dir_vento_atual = 0;
unsigned char humd_atm_atual = 0;
unsigned char humd_solo_atual = 0;
unsigned char pluvio_atual = 0;

int num = 0;
long read = 0;
long freq = 0;
long numeros_lidos = 0;
short id = 0;
char cont;
short *nums_readings;

int main()
{
    uint32_t buffer[64];
    FILE *f;
    int result;
    // int i;
    f = fopen("/dev/urandom", "r");
    if (f == NULL)
    {
        printf("Error: open() failed to open /dev/random for reading\n");
    }
    result = fread(buffer, sizeof(uint32_t), 64, f);
    if (result < 1)
    {
        printf("error , failed to read and words\n");
    }

    // printf("Read %d words from /dev/urandom\n",result);
    // for(i=0;i<result;i++)
    // printf("%08x\n",buffer[i]);
    state = (uint64_t)buffer[0];
    inc = (uint64_t)buffer[1];

    temperatura_atual = ((char)pcg_random_r()) % 49;          // for values from -49 to 49
    velc_vento_atual = ((unsigned char)pcg_random_r()) % 259; // for values from 0 to 259
    dir_vento_atual = ((unsigned char)pcg_random_r()) % 359;  // for values from 0 to 359
    humd_atm_atual = ((unsigned char)pcg_random_r()) % 100;   // for values from 0 to 100
    humd_solo_atual = ((unsigned char)pcg_random_r()) % 100;  // for values from 0 to 100
    pluvio_atual = ((unsigned char)pcg_random_r()) % 1000;    // for values from 0 to 1000

    char random_value = 0;
    char absRandom = 0;
    char absAtual = 0;
    char diferenca = 0;

    int incrementoIdTemperatura = 0;
    int incrementoIdVelcVento = 0;
    int incrementoIdDirVento = 0;
    int incrementoIdHumdAtm = 0;
    int incrementoIdHumdSolo = 0;
    int incrementoIdPluvio = 0;

    SensorType *sensor_type_temp = malloc(sizeof(SensorType));
    SensorType *sensor_type_velc_vento = malloc(sizeof(SensorType));
    SensorType *sensor_type_dir_vento = malloc(sizeof(SensorType));
    SensorType *sensor_type_pluvio = malloc(sizeof(SensorType));
    SensorType *sensor_type_humd_atm = malloc(sizeof(SensorType));
    SensorType *sensor_type_humd_solo = malloc(sizeof(SensorType));

    Sensor sensor_temp;
    Sensor *ptr_sensor_temp;
    ptr_sensor_temp = &sensor_temp;

    Sensor sensor_velc_vento;
    Sensor *ptr_sensor_velc_vento;
    ptr_sensor_velc_vento = &sensor_velc_vento;

    Sensor sensor_dir_vento;
    Sensor *ptr_sensor_dir_vento;
    ptr_sensor_dir_vento = &sensor_dir_vento;

    Sensor sensor_pluvio;
    Sensor *ptr_sensor_pluvio;
    ptr_sensor_pluvio = &sensor_pluvio;

    Sensor sensor_humd_atm;
    Sensor *ptr_sensor_humd_atm;
    ptr_sensor_humd_atm = &sensor_humd_atm;

    Sensor sensor_humd_solo;
    Sensor *ptr_sensor_humd_solo;
    ptr_sensor_humd_solo = &sensor_humd_solo;

    

    int numSensoresTotal= sensor_type_temp->num_sensors + sensor_type_velc_vento->num_sensors + sensor_type_dir_vento->num_sensors + sensor_type_pluvio->num_sensors + sensor_type_humd_atm->num_sensors + sensor_type_humd_solo->num_sensors;
    Sensor array[numSensoresTotal];




    printf("Choose a number:");
    printf("What sensor do you want to registe?\n 1-Temperatura\n 2-Velocidade vento\n 3-Direção vento\n 4-Humidade atmosférica\n 5-Humidade solo\n 6-Pluvio\n");
    printf("Do you want to remove a sensor?\n 7-Temperatura\n 8-Velocidade vento\n 9-Direção vento\n 10-Humidade atmosférica\n 11-Humidade solo\n 12-Pluvio\n");
    printf("Do you want to change the frequency of readings?\n 13-Temperatura\n 14-Velocidade vento\n 15-Direção vento\n 16-Humidade atmosférica\n 17-Humidade solo\n 18-Pluvio\n");

    scanf("%d", &num);

    switch (num)
    {
    case 1:

        printf("Com que frequência diária serão lidos valores para o vetor Temperatura(horas)?");
        scanf("%ld", &read);

        freq = read * 360;
        numeros_lidos = 24 / read;

        char *vetor_temperatura = (char*)malloc(numeros_lidos * sizeof(char));

        for (int i = 0; i < numeros_lidos; i++)
        {

            random_value = ((char)pcg_random_r()) % 49;
            absRandom = abs(random_value);
            absAtual = abs(temperatura_atual);
            diferenca = absRandom - absAtual;

            do
            {
                random_value = ((char)pcg_random_r()) % 49;
                absRandom = abs(random_value);
                diferenca = absRandom - absAtual;
            } while (diferenca > 4); // diferenças de temp não podem ser maior que 4graus

            temperatura_atual = sens_temp(temperatura_atual, random_value);

            vetor_temperatura[i] = temperatura_atual;
        }

        nums_readings = (short)&vetor_temperatura[0];

        ptr_sensor_temp->id = incrementoIdTemperatura;
        ptr_sensor_temp->sensor_type = 'temperatura';
        ptr_sensor_temp->max_limit = -50;
        ptr_sensor_temp->min_limit = 50;
        ptr_sensor_temp->frequency = freq;
        ptr_sensor_temp->readings_size = numeros_lidos;
        ptr_sensor_temp->readings = nums_readings;
        incrementoIdTemperatura++;

        checkTempValues(ptr_sensor_temp, 5, temperatura_atual);

        add_sensor(sensor_type_temp, sensor_temp);
        break;

    case 2:

        printf("Com que frequência diária serão lidos valores para o vetor de velocidade do vento(horas)?");
        scanf("%ld", &read);
        freq = read * 360;
        numeros_lidos = 24 / read;

        char *vetor_velc_vento = (char)malloc(numeros_lidos * sizeof(char));

        for (int i = 0; i < numeros_lidos; i++)
        {

            random_value = ((char)pcg_random_r()) % 259;
            absRandom = abs(random_value);
            absAtual = abs(velc_vento_atual);
            diferenca = absRandom - absAtual;

            do
            {
                random_value = ((char)pcg_random_r()) % 259;
                absRandom = abs(random_value);
                diferenca = absRandom - absAtual;
            } while (diferenca > 50 && random_value < 0); // diferenças de velocidade de vento não podem maior que 50 km/h

            velc_vento_atual = sens_velc_vento(velc_vento_atual, random_value);

            vetor_velc_vento[i] = velc_vento_atual;
        }

        nums_readings = (short)&vetor_velc_vento[0];

        ptr_sensor_velc_vento->id = incrementoIdVelcVento;
        ptr_sensor_velc_vento->sensor_type = 'velocidade vento';
        ptr_sensor_velc_vento->max_limit = 0;
        ptr_sensor_velc_vento->min_limit = 259;
        ptr_sensor_velc_vento->frequency = freq;
        ptr_sensor_velc_vento->readings_size = numeros_lidos;
        ptr_sensor_velc_vento->readings = nums_readings;
        incrementoIdVelcVento++;

        checkVelVentoValues(ptr_sensor_velc_vento, 5, velc_vento_atual);

        add_sensor(sensor_type_velc_vento, sensor_velc_vento);
        break;

    case 3:

        printf("Com que frequência diária serão lidos valores para o vetor de direção do vento(horas)?");
        scanf("%ld", &read);
        freq = read * 360;
        numeros_lidos = 24 / read;

        char *vetor_dir_vento = (char)malloc(numeros_lidos * sizeof(char));

        for (int i = 0; i < numeros_lidos; i++)
        {

            random_value = ((char)pcg_random_r()) % 359;
            absRandom = abs(random_value);
            absAtual = abs(dir_vento_atual);
            diferenca = absRandom - absAtual;

            do
            {
                random_value = ((char)pcg_random_r()) % 359;
                absRandom = abs(random_value);
                diferenca = absRandom - absAtual;
            } while (diferenca > 100 && random_value < 0); // diferenças de velocidade de vento não podem maior que 100graus

            dir_vento_atual = sens_dir_vento(dir_vento_atual, random_value);

            vetor_dir_vento[i] = dir_vento_atual;
        }

        nums_readings = (short)&vetor_dir_vento[0];

        ptr_sensor_dir_vento->id = incrementoIdDirVento;
        ptr_sensor_dir_vento->sensor_type = 'direção vento';
        ptr_sensor_dir_vento->max_limit = 0;
        ptr_sensor_dir_vento->min_limit = 359;
        ptr_sensor_dir_vento->frequency = freq;
        ptr_sensor_dir_vento->readings_size = numeros_lidos;
        ptr_sensor_dir_vento->readings = nums_readings;
        incrementoIdDirVento++;

        checkDirecVentoValues(ptr_sensor_dir_vento, 5, dir_vento_atual);

        add_sensor(sensor_type_dir_vento, sensor_dir_vento);
        break;

    case 4:

        printf("Com que frequência diária serão lidos valores para o vetor de pluvio(horas)?");
        scanf("%ld", &read);
        freq = read * 360;
        numeros_lidos = 24 / read;

        char *vetor_pluvio = (char)malloc(numeros_lidos * sizeof(char));

        for (int i = 0; i < numeros_lidos; i++)
        {

            random_value = ((unsigned char)pcg_random_r()) % 1000;

            // Não pode estar a chover logo pluvio = 0
            if (temperatura_atual > 30)
            {
                pluvio_atual = 0;
            }
            // Não pode haver muita pluviosidade
            if (temperatura_atual > 20 && temperatura_atual <= 30)
            {

                do
                {
                    random_value = ((unsigned char)pcg_random_r()) % 1000;
                } while (random_value < 300);

                pluvio_atual = sens_pluvio(pluvio_atual, temperatura_atual, random_value);
            }
            // Pode chover ou não chover
            if (temperatura_atual <= 20)
            {

                pluvio_atual = sens_pluvio(pluvio_atual, temperatura_atual, random_value);
            }

            vetor_pluvio[i] = pluvio_atual;
        }

        nums_readings = (short)&vetor_pluvio[0];

        ptr_sensor_pluvio->id = incrementoIdPluvio;
        ptr_sensor_pluvio->sensor_type = 'pluvio';
        ptr_sensor_pluvio->max_limit = 0;
        ptr_sensor_pluvio->min_limit = 1000;
        ptr_sensor_pluvio->frequency = freq;
        ptr_sensor_pluvio->readings_size = numeros_lidos;
        ptr_sensor_pluvio->readings = nums_readings;
        incrementoIdPluvio++;

        checkPluviosidadeValues(ptr_sensor_pluvio, 5, pluvio_atual);

        add_sensor(sensor_type_pluvio, sensor_pluvio);
        break;

    case 5:

        printf("Com que frequência diária serão lidos valores para o vetor de humidade atmosférica(horas)?");
        scanf("%ld", &read);
        freq = read * 360;
        numeros_lidos = 24 / read;

        char *vetor_humd_atm = (char*)malloc(numeros_lidos * sizeof(char));

        for (int i = 0; i < numeros_lidos; i++)
        {

            random_value = ((unsigned char)pcg_random_r()) % 100;

            // Nenhuma humidade
            if (pluvio_atual = 0)
            {
                humd_atm_atual = 0;
            }
            // Pouca humidade
            if (pluvio_atual > 0 && pluvio_atual <= 300)
            {

                do
                {
                    random_value = ((unsigned char)pcg_random_r()) % 100;
                } while (random_value < 50);

                humd_atm_atual = sens_humd_atm(humd_atm_atual, pluvio_atual, random_value);
            }
            // Qualquer humidade
            if (pluvio_atual > 300)
            {

                humd_atm_atual = sens_humd_atm(humd_atm_atual, pluvio_atual, random_value);
            }

            vetor_humd_atm[i] = humd_atm_atual;
        }

        nums_readings = (short)&vetor_humd_atm[0];

        ptr_sensor_humd_atm->id = incrementoIdHumdAtm;
        ptr_sensor_humd_atm->sensor_type = 'humidade atm';
        ptr_sensor_humd_atm->max_limit = 0;
        ptr_sensor_humd_atm->min_limit = 100;
        ptr_sensor_humd_atm->frequency = freq;
        ptr_sensor_humd_atm->readings_size = numeros_lidos;
        ptr_sensor_humd_atm->readings = nums_readings;
        incrementoIdHumdAtm++;

        checkHumAtmValues(ptr_sensor_humd_atm, 5, humd_atm_atual);

        add_sensor(sensor_type_humd_atm, sensor_humd_atm);
        break;

    case 6:

        printf("Com que frequência diária serão lidos valores para o vetor de humidade solo(horas)?");
        scanf("%ld", &read);
        freq = read * 360;
        numeros_lidos = 24 / read;

        char *vetor_humd_solo = (char)malloc(numeros_lidos * sizeof(char));

        for (int i = 0; i < numeros_lidos; i++)
        {

            random_value = ((unsigned char)pcg_random_r()) % 100;

            // Nenhuma humidade
            if (pluvio_atual = 0)
            {
                humd_solo_atual = 0;
            }
            // Pouca humidade
            if (pluvio_atual > 0 && pluvio_atual <= 300)
            {

                do
                {
                    random_value = ((unsigned char)pcg_random_r()) % 100;
                } while (random_value < 50);

                humd_solo_atual = sens_humd_solo(humd_solo_atual, pluvio_atual, random_value);
            }
            // Qualquer humidade
            if (pluvio_atual > 300)
            {

                humd_solo_atual = sens_humd_solo(humd_solo_atual, pluvio_atual, random_value);
            }

            vetor_humd_solo[i] = humd_solo_atual;
        }

        nums_readings = (short)&vetor_humd_solo[0];

        ptr_sensor_humd_solo->id = incrementoIdHumdSolo;
        ptr_sensor_humd_solo->sensor_type = 'humidade solo';
        ptr_sensor_humd_solo->max_limit = 0;
        ptr_sensor_humd_solo->min_limit = 100;
        ptr_sensor_humd_solo->frequency = freq;
        ptr_sensor_humd_solo->readings_size = numeros_lidos;
        ptr_sensor_humd_solo->readings = nums_readings;
        incrementoIdHumdSolo++;

        checkHumSoloValues(ptr_sensor_humd_solo, 5, humd_solo_atual);

        add_sensor(sensor_type_humd_solo, sensor_humd_solo);
        break;

    case 7:

        for (int i = 0; i < sensor_type_temp->num_sensors; i++)
        {
            printf("Sensor %d: %s\n", sensor_type_temp->sensors[i].id, sensor_type_temp->sensors[i].sensor_type);
        }
        id = 0;
        printf("Qual o sensor que pretende remover?");
        scanf("%hd", &id);
        removerSensor(sensor_type_temp, id);
    case 8:

        for (int i = 0; i < sensor_type_velc_vento->num_sensors; i++)
        {
            printf("Sensor %d: %s\n", sensor_type_velc_vento->sensors[i].id, sensor_type_velc_vento->sensors[i].sensor_type);
        }
        id = 0;
        printf("Qual o sensor que pretende remover?");
        scanf("%hd", &id);
        removerSensor(sensor_type_velc_vento, id);

    case 9:
        for (int i = 0; i < sensor_type_dir_vento->num_sensors; i++)
        {
            printf("Sensor %d: %s\n", sensor_type_dir_vento->sensors[i].id, sensor_type_dir_vento->sensors[i].sensor_type);
        }
        id = 0;
        printf("Qual o sensor que pretende remover?");
        scanf("%hd", &id);
        removerSensor(sensor_type_dir_vento, id);

    case 10:
        for (int i = 0; i < sensor_type_humd_atm->num_sensors; i++)
        {
            printf("Sensor %d: %s\n", sensor_type_humd_atm->sensors[i].id, sensor_type_humd_atm->sensors[i].sensor_type);
        }
        id = 0;
        printf("Qual o sensor que pretende remover?");
        scanf("%hd", &id);
        removerSensor(sensor_type_humd_atm, id);

    case 11:
        for (int i = 0; i < sensor_type_humd_solo->num_sensors; i++)
        {
            printf("Sensor %d: %s\n", sensor_type_humd_solo->sensors[i].id, sensor_type_humd_solo->sensors[i].sensor_type);
        }
        id = 0;
        printf("Qual o sensor que pretende remover?");
        scanf("%hd", &id);
        removerSensor(sensor_type_humd_solo, id);

    case 12:
        for (int i = 0; i < sensor_type_pluvio->num_sensors; i++)
        {
            printf("Sensor %d: %s\n", sensor_type_pluvio->sensors[i].id, sensor_type_pluvio->sensors[i].sensor_type);
        }
        id = 0;
        printf("Qual o sensor que pretende remover?");
        scanf("%hd", &id);
        removerSensor(sensor_type_pluvio, id);

    case 13:
        for (int i = 0; i < sensor_type_temp->num_sensors; i++)
        {
            printf("Sensor %d: %s de %d de frequência, \n", sensor_type_temp->sensors[i].id, sensor_type_temp->sensors[i].sensor_type, sensor_type_temp->sensors[i].frequency);
        }
        id = 0;
        freq = 0;
        printf("Qual o sensor que pretende alterar frequência?");
        scanf("%hd", &id);
        printf("Qual a nova frequência em horas?");
        scanf("%d", &freq);
        freq = freq * 360;
        alterarFrequencia(sensor_type_temp, id, freq);

    case 14:
        for (int i = 0; i < sensor_type_velc_vento->num_sensors; i++)
        {
            printf("Sensor %d: %s de %d de frequência, \n", sensor_type_velc_vento->sensors[i].id, sensor_type_velc_vento->sensors[i].sensor_type, sensor_type_velc_vento->sensors[i].frequency);
        }
        id = 0;
        freq = 0;
        printf("Qual o sensor que pretende alterar frequência?");
        scanf("%hd", &id);
        printf("Qual a nova frequência em horas?");
        scanf("%d", &freq);
        freq = freq * 360;
        alterarFrequencia(sensor_type_velc_vento, id, freq);

    case 15:
        for (int i = 0; i < sensor_type_dir_vento->num_sensors; i++)
        {
            printf("Sensor %d: %s de %d de frequência, \n", sensor_type_dir_vento->sensors[i].id, sensor_type_dir_vento->sensors[i].sensor_type, sensor_type_dir_vento->sensors[i].frequency);
        }
        id = 0;
        freq = 0;
        printf("Qual o sensor que pretende alterar frequência?");
        scanf("%hd", &id);
        printf("Qual a nova frequência em horas?");
        scanf("%d", &freq);
        freq = freq * 360;
        alterarFrequencia(sensor_type_dir_vento, id, freq);

    case 16:
        for (int i = 0; i < sensor_type_humd_atm->num_sensors; i++)
        {
            printf("Sensor %d: %s de %d de frequência, \n", sensor_type_humd_atm->sensors[i].id, sensor_type_humd_atm->sensors[i].sensor_type, sensor_type_humd_atm->sensors[i].frequency);
        }
        id = 0;
        freq = 0;
        printf("Qual o sensor que pretende alterar frequência?");
        scanf("%hd", &id);
        printf("Qual a nova frequência em horas?");
        scanf("%d", &freq);
        freq = freq * 360;
        alterarFrequencia(sensor_type_humd_atm, id, freq);

    case 17:
        for (int i = 0; i < sensor_type_humd_solo->num_sensors; i++)
        {
            printf("Sensor %d: %s de %d de frequência, \n", sensor_type_humd_solo->sensors[i].id, sensor_type_humd_solo->sensors[i].sensor_type, sensor_type_humd_solo->sensors[i].frequency);
        }
        id = 0;
        freq = 0;
        printf("Qual o sensor que pretende alterar frequência?");
        scanf("%hd", &id);
        printf("Qual a nova frequência em horas?");
        scanf("%d", &freq);
        freq = freq * 360;
        alterarFrequencia(sensor_type_humd_solo, id, freq);

    case 18:
        for (int i = 0; i < sensor_type_pluvio->num_sensors; i++)
        {
            printf("Sensor %d: %s de %d de frequência, \n", sensor_type_pluvio->sensors[i].id, sensor_type_pluvio->sensors[i].sensor_type, sensor_type_pluvio->sensors[i].frequency);
        }
        id = 0;
        freq = 0;
        printf("Qual o sensor que pretende alterar frequência?");
        scanf("%hd", &id);
        printf("Qual a nova frequência em horas?");
        scanf("%d", &freq);
        freq = freq * 360;
        alterarFrequencia(sensor_type_pluvio, id, freq);





    case 19:
        cont = 0;
        for (int i = 0; i < sensor_type_temp->num_sensors; i++)
        {
            array[cont] = sensor_type_temp->sensors[i];
            cont++;
        }
        for (int i = 0; i < sensor_type_velc_vento->num_sensors; i++)
        {
            array[cont] = sensor_type_velc_vento->sensors[i];
            cont++;
        }
        for (int i = 0; i < sensor_type_dir_vento->num_sensors; i++)
        {
            array[cont] = sensor_type_dir_vento->sensors[i];
            cont++;
        }
        for (int i = 0; i < sensor_type_humd_atm->num_sensors; i++)
        {
            array[cont] = sensor_type_humd_atm->sensors[i];
            cont++;
        }
        for (int i = 0; i < sensor_type_humd_solo->num_sensors; i++)
        {
            array[cont] = sensor_type_humd_solo->sensors[i];
            cont++;
        }
        for (int i = 0; i < sensor_type_pluvio->num_sensors; i++)
        {
            array[cont] = sensor_type_pluvio->sensors[i];
            cont++;
        }

        for (int i = 0; i < numSensoresTotal; i++){
            exportarSensores(&array[i],'sensores.csv');
        }
        
   











    default:
        printf("Valor inserido incorreto");
    }

    char minTemp = arrmax(ptr_sensor_temp->readings, ptr_sensor_temp->readings_size);
    char maxTemp = arrmin(ptr_sensor_temp->readings, ptr_sensor_temp->readings_size);
    char mediaTmp = arravg(ptr_sensor_temp->readings, ptr_sensor_temp->readings_size);
    char minVento = arrmax(ptr_sensor_velc_vento->readings, ptr_sensor_velc_vento->readings_size);
    char maxVento = arrmin(ptr_sensor_velc_vento->readings, ptr_sensor_velc_vento->readings_size);
    char mediaVento = arravg(ptr_sensor_velc_vento->readings, ptr_sensor_velc_vento->readings_size);
    char minDirVento = arrmax(ptr_sensor_dir_vento->readings, ptr_sensor_dir_vento->readings_size);
    char maxDirVento = arrmin(ptr_sensor_dir_vento->readings, ptr_sensor_dir_vento->readings_size);
    char mediaDirVento = arravg(ptr_sensor_dir_vento->readings, ptr_sensor_dir_vento->readings_size);
    char minHumdAtm = arrmax(ptr_sensor_humd_atm->readings, ptr_sensor_humd_atm->readings_size);
    char maxHumdAtm = arrmin(ptr_sensor_humd_atm->readings, ptr_sensor_humd_atm->readings_size);
    char mediaHumdAtm = arravg(ptr_sensor_humd_atm->readings, ptr_sensor_humd_atm->readings_size);
    char minHumdSolo = arrmax(ptr_sensor_humd_solo->readings, ptr_sensor_humd_solo->readings_size);
    char maxHumdSolo = arrmin(ptr_sensor_humd_solo->readings, ptr_sensor_humd_solo->readings_size);
    char mediaHumdSolo = arravg(ptr_sensor_humd_solo->readings, ptr_sensor_humd_solo->readings_size);
    char minPluvio = arrmax(ptr_sensor_pluvio->readings, ptr_sensor_pluvio->readings_size);
    char maxPluvio = arrmin(ptr_sensor_pluvio->readings, ptr_sensor_pluvio->readings_size);
    char mediaPluvio = arravg(ptr_sensor_pluvio->readings, ptr_sensor_pluvio->readings_size);

    char values[18] = {minTemp, maxTemp, mediaTmp, minVento, maxVento, mediaVento, minDirVento, maxDirVento, mediaDirVento, minHumdAtm, maxHumdAtm, mediaHumdAtm, minHumdSolo, maxHumdSolo, mediaHumdSolo, minPluvio, maxPluvio, mediaPluvio};

    unsigned short **matrix[6][3];
    int contadorX = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = (short)values[contadorX];
            contadorX++;
        }
        
    }
    
    exportarMatriz(matrix, 'matriz.csv');
   

    return 0;
}
