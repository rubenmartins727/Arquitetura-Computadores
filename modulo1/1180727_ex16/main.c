#include <stdio.h>
#include "where_exists.h"

int main(){

char str1[] = "de";

char str2[] = "modulo1 de arqcp";

char *result;

result = where_exists(str1, str2);

printf("pointer from where exists (%s) : %s", str1, result);

return 0;
}
