#include <stdio.h>
#include "asm.h"

int *ptrvec;
int num = 8;

int main(void) {

int vec[] = {1,10,2,11,3,12,13,5};

ptrvec = vec;

int res;

res = vec_greater10();

printf("Num de elementos maior que 10 = %d \n", res);

return 0;
}
