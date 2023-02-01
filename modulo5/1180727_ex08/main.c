#include <stdio.h>
#include <string.h>
#include "asm.h"

int main( void ){
   
s2 s2_object;   
s2 *s; 
s = &s2_object;

char vc[3] = "abc";
short vw[3] = {1,2,3};
int vj = 5;

fill_s2(s, vw, vj, vc);

printf("C: %s\nJ: %d\n", s->c, s->j);

for(int i = 0; i < 3; i++){
    printf("W: %hd ", s->w[i]);
}

return 0;
}