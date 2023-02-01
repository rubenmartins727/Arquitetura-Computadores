#include <stdio.h>
#include "asm.h"

short *ptrvec;
int num = 8;

int main(void) {
    int i;

short vec[] = {-1,10,2,-11,3,12,13,-5};

ptrvec = vec;

keep_positives();

printf("All to positive:\n");
for(i=0; i<num; i++){
printf("%hd, ", *ptrvec);
ptrvec++;
}

return 0;
}
