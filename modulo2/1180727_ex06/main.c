#include <stdio.h>
#include "asm.h"

char byte1 = 0;
char byte2 = 0;

int main(void) {

short res;

printf("Valor byte1:");
scanf("%hhd",&byte1);

printf("Valor byte2:");
scanf("%hhd",&byte2);

res = concatBytes();

printf("res = %hu \n", res);

return 0;
}
