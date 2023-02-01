#include <stdio.h>
#include "asm.h"

int A = 0;
int B = 0;
int C = 0;
int D = 0;

int main(void) {

int res;

printf("Valor A:");
scanf("%d",&A);

printf("Valor B:");
scanf("%d",&B);

printf("Valor C:");
scanf("%d",&C);

printf("Valor D:");
scanf("%d",&D);

res = compute();

printf("res = %d \n", res);

return 0;
}
