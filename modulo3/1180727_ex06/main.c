#include <stdio.h>
#include "asm.h"

char *ptr1;

int main(void) {

char string[] = {"Mudar todos os caracteres excepto a e espaço para 3"};

ptr1 = string;
int res;

res = encrypt();

printf("String = %s \n", ptr1);
printf("Res = %d \n", res);

return 0;
}
