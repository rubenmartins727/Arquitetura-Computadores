#include <stdio.h>
#include "asm.h"

int main(void) {

int date1 = 8644611;//dia:1, mes:3, ano:2000
int date2 = 8644612;//dia:1, mes:8, ano:2000

int res;

res = greater_date(date1, date2);

printf("Greater date: %d\n", res);

return 0;
}
