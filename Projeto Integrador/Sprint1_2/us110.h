typedef struct{
unsigned short id;
unsigned char sensor_type;
unsigned short max_limit; // limites do sensor
unsigned short min_limit;
unsigned long frequency; // frequency de leituras (em segundos)
unsigned long readings_size; // tamanho do array de leituras
unsigned short *readings; // array de leituras diárias
} Sensor;

 typedef struct {
  char* type;
  Sensor* sensors;
  int num_sensors;
} SensorType;

void add_sensor(SensorType* sensor_type, Sensor sensor);