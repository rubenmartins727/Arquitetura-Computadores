#include <stdio.h>
#include "asm.h"

short *ptrvec;
short *ptrvec_temp;
int num = 64;

int main(void) {
int i;

short vec1[] = {1,10,2,11,3,12,13,5};
short vec2[8];

ptrvec = vec1;
ptrvec_temp = vec2;

array_sort();

printf("Vec1:\n");
for(i=0; i<num; i++){
    printf("%hd, ", *ptrvec_temp);
    ptrvec_temp++;
}

return 0;
}
