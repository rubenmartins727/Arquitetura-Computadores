#include <stdio.h>
#include "sum_even.h"

int main(){

int p[] = {1,2,3,4,5,6,7,8,9};

int soma = sum_even(p, 9);

printf("Soma dos elementos pares do vetor p: %d", soma);

return 0;
}
