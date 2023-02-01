#include <stdio.h>
#include "asm.h"

int op1 = 0;
int op2 = 0;
int op3 = 0;

int main(void) {

long long res;

printf("Valor op1:");
scanf("%d",&op1);

printf("Valor op2:");
scanf("%d",&op2);

printf("Valor op3:");
scanf("%d",&op3);

res = sum3ints();

printf("res = %lld \n", res);

return 0;
}
