#include <stdio.h>
#include "asm.h"

int a = 1;
int b= 2;
int c = 3;
int d = 4;

int main(void) {

int res;

res = greatest(a,b,c,d);

printf("greatest = %d \n", res);

return 0;
}
