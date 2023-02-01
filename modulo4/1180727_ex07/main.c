#include <stdio.h>
#include "asm.h"


int main(void) {

char vetor[] = {1,2,3,4,5,6,7,8,9};
char *vec;
int n = 9;

vec= vetor;

int res;

res = count_odd(vec, n);

printf("Number of odd numbers: %d", res);

return 0;
}
