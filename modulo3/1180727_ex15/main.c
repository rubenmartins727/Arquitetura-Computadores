#include <stdio.h>
#include "asm.h"

long *ptrvec;
int num = 8;

int main(void) {
int res;

long vec[] = {1,255,2,11,3,12,13,5};

ptrvec = vec;

res = sum_first_byte();

printf("Sum of all first bytes of the vec: %d", res);

return 0;
}
