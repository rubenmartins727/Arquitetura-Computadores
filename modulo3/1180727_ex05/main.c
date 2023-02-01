#include <stdio.h>
#include "asm.h"

short num =5;
long *ptrvec;

int main(void) {

long vec[] = {1,2,3,4,5};
ptrvec = vec;

long res;

res = vec_sum();

printf("Res = %ld \n", res);

return 0;
}
