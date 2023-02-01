#include <stdio.h>
#include "asm.h"

int op1 = 0;
int op2 = 0;

int main(void) {

char res;

printf("Valor op1:");
scanf("%d",&op1);

printf("Valor op2:");
scanf("%d",&op2);

res = test_flags();

printf("res = %hhd \n", res);

return 0;
}
