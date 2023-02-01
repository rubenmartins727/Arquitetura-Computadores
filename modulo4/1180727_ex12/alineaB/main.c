#include <stdio.h>
#include "asm.h"

int main(void) {

int x = 7;

int res;

res = count_bits_one(x);

printf("Res: %d\n", res);

return 0;
}
