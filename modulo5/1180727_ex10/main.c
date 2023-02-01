#include <stdio.h>
#include <stdlib.h>
#include "new_str.h"

int main(){

char str[80] = "ola eu sou o ruben";

char *new_string;

new_string = new_str(str);

printf("New string: %s\n", new_string);

free(new_string);

return 0;
}