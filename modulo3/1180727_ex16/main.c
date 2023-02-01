#include <stdio.h>
#include "asm.h"

char *ptr1;
char *ptr2;
int num = 8;

int main(void) {
int i;

char vec1[] = {1,10,2,11,3,12,13,5};
char vec2[] = {3,1,7,15,30,14,13,10};

ptr1 = vec1;
ptr2 = vec2;

swap();

printf("Vec1:\n");
for(i=0; i<num; i++){
    printf("%hhd, ", *ptr1);
    ptr1++;
}
printf("\n");
printf("Vec2:\n");
for(i=0; i<num; i++){
    printf("%hhd, ", *ptr2);
    ptr2++;
}

return 0;
}
