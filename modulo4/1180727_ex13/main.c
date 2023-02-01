#include <stdio.h>
#include "rotate.h"

int main(void) {

int num = 20;
int nbits = 4;

int res;

res = rotate_left(num, nbits);

printf("Res roatate left: %d\n", res);

res = rotate_right(num, nbits);

printf("Res roatate right: %d\n", res);

return 0;
}
