#include <stdio.h>
#include "asm.h"

int A = 0;
short B = 0;
char C = 0;
char D = 0;

int main(void) {

long long res;

printf("Valor A:");
scanf("%d",&A);

printf("Valor B:");
scanf("%hd",&B);

printf("Valor C:");
scanf("%hhu",&C);

printf("Valor D:");
scanf("%hhu",&D);

res = sum_and_subtract();

printf("res = %lld \n", res);

return 0;
}
