#include <stdio.h>
#include "asm.h"

int A = 0;
int B = 0;

int main(void) {

char res;

printf("Valor A:");
scanf("%d",&A);

printf("Valor B:");
scanf("%d",&B);

res = isMultiple();

printf("res = %hu \n", res);

return 0;
}
