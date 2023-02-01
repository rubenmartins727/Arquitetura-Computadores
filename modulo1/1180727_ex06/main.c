#include <stdio.h>
#include "power_ref.h"

int main(){

int num = 2;
int *x = &num;
int y = 4;

power_ref(x,y);

printf("The power calculated x by y: %d", *x);

return 0;
}
