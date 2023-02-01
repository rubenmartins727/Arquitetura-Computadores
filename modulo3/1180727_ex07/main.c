#include <stdio.h>
#include "asm.h"

char *ptr1;

int main(void) {

char string[] = {"Pxgau wrgrv rv fauafwhuhv h{fhswr a h hvsaƪr saua 6"};

ptr1 = string;
int res;

res = decrypt();

printf("String = %s \n", ptr1);
printf("Res = %d \n", res);

return 0;
}
