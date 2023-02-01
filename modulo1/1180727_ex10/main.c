#include <stdio.h>
#include "odd_sum.h"

int main(){

int p[] = {7,6,3,4,9,5,7};
int sum;

sum = odd_sum(p);

printf("Soma dos numeros impares: %d\n", sum);


return 0;
}
