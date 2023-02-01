#include <stdio.h>
#include "asm.h"

short code = 0;
short currentSalary = 0;

int main(void) {

int newSalary;

printf("Valor do code:");
scanf("%hd",&code);

printf("Valor do current salary:");
scanf("%hd",&currentSalary);

newSalary = new_salary();

printf("Novo salário = %d \n", newSalary);

return 0;
}
