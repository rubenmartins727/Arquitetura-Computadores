#include <stdio.h>
#include "asm.h"

char currentTemperature = 0;
char desireTemperature = 0;

int main(void) {

int segundos;

printf("Valor da temperatura atual:");
scanf("%hhd",&currentTemperature);

printf("Valor da temperatura pretendida:");
scanf("%hhd",&desireTemperature);

segundos = needed_time();

printf("Segundos necessarios = %d \n", segundos);

return 0;
}
