#include <stdio.h>
#include "asm.h"

int *ptrvec;
int num = 8;
int x = 0;

int main(void) {

int vec[] = {-1,10,2,-11,3,12,13,-5};

ptrvec = vec;

printf("Number to search in vec:\n");
scanf("%d", &x);

int res ;
res = exists();

if(res == 0){
    printf("No occurances found");
    printf("");
} else{
    printf("x has duplicates");
}

return 0;
}
