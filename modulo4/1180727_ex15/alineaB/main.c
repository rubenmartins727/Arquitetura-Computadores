#include <stdio.h>
#include "asm.h"

int main(void) {

int a = 20;
int left = 20;
int right = 10;

int res;

res = activate_bits(a, left, right);

printf("a with bits activated: %d\n", res);

return 0;
}
