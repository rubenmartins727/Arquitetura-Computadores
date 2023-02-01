#include <stdio.h>
#include "asm.h"

char *ptr1;
char *ptr2;
char *ptr3;

int main(void) {

char string[40] = "juntar 2 s";
char string2[40] = "trings";
char string3[80];

ptr1 = string;
ptr2 = string2;
ptr3 = string3;

str_cat();

printf("Res = %s \n", ptr3);

return 0;
}
