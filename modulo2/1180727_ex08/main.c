#include <stdio.h>
#include "asm.h"

int main(void) {

short res;

res = crossSumBytes();

printf("res = %hu \n", res);

return 0;
}
