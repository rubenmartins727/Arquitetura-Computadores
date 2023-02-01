#include <stdio.h>
#include "asm.h"

short s = 0;

int main(void) {

short res;

printf("Valor s:");
scanf("%hu",&s);

res = swapBytes();

printf("s = %hu \n", res);

return 0;
}
