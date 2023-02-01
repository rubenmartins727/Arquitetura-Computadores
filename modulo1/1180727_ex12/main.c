#include <stdio.h>
#include "capitalize.h"

int main(){

char str[] = "The number must be saved";

capitalize(str);

printf("str after capitalize: %s", str);

return 0;
}
