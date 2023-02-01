#include <stdio.h>
#include <string.h>
#include "asm.h"

int main( void ){

structA sa;
structA *ptrA = &sa;
structB sb;
structB *ptrB = &sb;

ptrA->y = 5;
ptrA->x = 2;

ptrB->a.x = 7;
ptrB->a.y = 9;
ptrB->b = ptrA;
ptrB->x = 4;
ptrB->y = 1;
ptrB->z = 6;
ptrB->c = 'd';
ptrB->e[0] = 'a';
ptrB->e[1] = 'b';
ptrB->e[2] = 'c';

printf("FUN1: %hd\n", fun1(ptrB));
printf("FUN2: %d\n", fun2(ptrB));
printf("FUN3: %p\n", fun3(ptrB));
printf("FUN4: %d\n", fun4(ptrB));

return 0;
}