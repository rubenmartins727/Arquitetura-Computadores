#include <stdio.h>
#include "asm.h"

int *ptrvec;
int num = 8;

int main(void) {

int vec[] = {1,100,2,1100,3,1200,1350,5};

ptrvec = vec;

unsigned char res;

res = vec_zero();

printf("Number of changes = %hd \n", res);

return 0;
}
