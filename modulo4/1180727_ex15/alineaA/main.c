#include <stdio.h>
#include "activate_bits.h"

int main(void) {

int a = 36;
int left = 8;
int right = 3;

int res;

res = activate_bits(a, left, right);

printf("a with bits activated: %d\n", res);

return 0;
}
