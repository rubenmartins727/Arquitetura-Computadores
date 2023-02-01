#include <stdio.h>
#include "asm.h"

short s1 = 0;
short s2 = 0;

int main(void) {

short res;

printf("Valor s1:");
scanf("%hu",&s1);

printf("Valor s2:");
scanf("%hu",&s2);

res = crossSumBytes();

printf("res = %hu \n", res);

return 0;
}
