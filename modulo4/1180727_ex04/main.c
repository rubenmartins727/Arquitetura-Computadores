#include <stdio.h>
#include "asm.h"


int main(void) {

int num1 = 1;
int num2= 2;
int *smaller;

int res;

int smaller2 = 0;
smaller = &smaller2;

res = sum_smaller(num1,num2,smaller);

printf("sum = %d \n", res);
printf("smaller num = %d \n", *smaller);

return 0;
}
