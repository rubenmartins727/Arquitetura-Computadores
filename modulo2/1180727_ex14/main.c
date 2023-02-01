#include <stdio.h>
#include "asm.h"

int main(void) {

int area;

printf("Valor length1:");
scanf("%d",&length1);

printf("Valor length2:");
scanf("%d",&length2);

printf("Valor height:");
scanf("%d",&height);

area = getArea();

printf("area = %hu \n", area);

return 0;
}
