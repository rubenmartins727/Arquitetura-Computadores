#include <stdio.h>
#include "asm.h"


int main(void) {

int a = 5;
int *b;
int c= 7;
int bValue = 3;

b= &bValue;

int res;

res = calc(a,b,c);

printf("Calc: %d\n", res);

return 0;
}
