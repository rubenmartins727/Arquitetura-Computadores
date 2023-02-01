#include <stdio.h>
#include "asm.h"

int main(void) {

int num = 20;
int *ptr;
ptr = &num;
int pos = 2;

int res;

res = reset_bit(ptr, pos);

if(res == 1){
    printf("bit altered");
}else{
    printf("bit was not altered");
}

return 0;
}
