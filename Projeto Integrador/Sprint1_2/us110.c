#include <string.h>
#include "us110.h"
void add_sensor(SensorType* sensor_type, Sensor sensor) {
  sensor_type->num_sensors++;
  sensor_type->sensors = realloc(sensor_type->sensors, sensor_type->num_sensors * sizeof(Sensor));
  sensor_type->sensors[sensor_type->num_sensors - 1] = sensor;
}