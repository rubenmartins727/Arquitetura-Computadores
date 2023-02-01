#include <stdio.h>
#include "asm.h"

long num = 0;

int main(void) {

int res;

printf("Valor num:");
scanf("%ld",&num);

res = steps();

printf("res = %d \n", res);

return 0;
}
