#include <stdio.h>
#include "asm.h"

int i = 0;

int main(void) {

int res;
int n;

printf("Valor A:");
scanf("%d",&A);

printf("Valor B:");
scanf("%d",&B);

printf("Valor n:");
scanf("%d",&n);

for(i; i<n; i++){
    res += operation();
}

printf("res = %d \n", res);

return 0;
}
