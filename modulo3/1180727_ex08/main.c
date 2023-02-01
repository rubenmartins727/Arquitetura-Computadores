#include <stdio.h>
#include "asm.h"

long even = 0;
long *ptrvec;
int num = 5;

int main(void) {

long ifEven;
long vec[] = {1,2,3,4,5};
ptrvec = vec;
long result;

printf("Number to check if its even: ");
scanf("%ld", &even);

ifEven = test_even();

if(ifEven == 0){
    printf("%ld is odd", even);
}else{
    printf("%ld is even", even);
}

result = vec_sum_even();
printf("Res = %ld \n", result);

return 0;
}
