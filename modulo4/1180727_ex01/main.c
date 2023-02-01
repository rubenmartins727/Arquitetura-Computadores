#include <stdio.h>
#include "asm.h"

int x = 2;

int main(void) {

long res;

res = cube(x);

printf("cube = %ld \n", res);

return 0;
}
