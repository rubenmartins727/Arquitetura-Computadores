#include <stdio.h>
#include <string.h>
#include "asm.h"

int main( void ){
   
s1 s1_object;   
s1 *s; 
s = &s1_object;

fill_s1(s, 2, 1, 3, 4);

printf("C: %hhd\nI: %d\nD: %hhd\nJ: %d\n", s->c, s->i, s->d, s->j);

return 0;
}