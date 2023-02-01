#include <stdio.h>
#include "asm.h"

int n = 4;

int main(void) {

long res;

res = sum_n2(n);

printf("sum_n2 = %ld \n", res);

return 0;
}
