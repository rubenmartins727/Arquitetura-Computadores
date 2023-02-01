#include <string.h>
#include "us110.h"
void removerSensor(SensorType *sensorType, short id)
{
    for (int i = 0; i < sensorType->num_sensors; i++)
    {
        if (sensorType->sensors[i].id == id)
        {
            free(sensorType->sensors[i].readings);

            for (int j = i; j < sensorType->num_sensors - 1; j++)
            {
                sensorType->sensors[j] = sensorType->sensors[j + 1];
            }

            sensorType->sensors = (Sensor *)realloc(sensorType->sensors, (sensorType->num_sensors - 1) * sizeof(Sensor));

            sensorType->num_sensors--;

            break;
        }
    }
}

void alterarFrequencia(SensorType *sensor, short id, unsigned long new_frequency){

    for (int i = 0; i < sensor->num_sensors; i++)
    {
        if (sensor->sensors[i].id == id)
        {
            unsigned short *new_readings = (unsigned short *)malloc(24/new_frequency * sizeof(unsigned short));
            for (int j = 0; j < ((360*new_frequency)/24); j++)
            {
                if (j < sensor->sensors[i].readings_size)
                {
                    new_readings[j] = sensor->sensors[i].readings[j];
                }
                else
                {
                    new_readings[j] = 0;
                }
            }
            free(sensor->sensors[i].readings);

            sensor->sensors[i].frequency = new_frequency;
            sensor->sensors[i].readings_size =((360*new_frequency)/24);
            sensor->sensors[i].readings = new_readings;
        }
    }


}
