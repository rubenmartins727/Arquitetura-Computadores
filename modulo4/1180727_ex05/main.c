#include <stdio.h>
#include "asm.h"


int main(void) {

int *v1;
int v2 = 2;
int valor = 5;

int res;

v1 = &valor;

res = inc_and_square(v1, v2);

printf("square of v2 = %d \n", res);
printf("v1 incremented 1 = %d \n", *v1);

return 0;
}
