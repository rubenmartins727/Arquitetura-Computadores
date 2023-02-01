#include <stdio.h>
#include "asm.h"


int main(void) {

char string1[] = {"Comparar Strings"};
char string2[] = {"Comparar Strings"};
char *a;
char *b;

a= string1;
b= string2;

int res;

res = test_equal(a, b);

if(res== 1){
    printf("Strings are equal\n");
}else{
    printf("Strings are not equal\n");
}

return 0;
}
