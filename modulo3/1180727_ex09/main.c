#include <stdio.h>
#include "asm.h"

short x = 0;
short *ptrvec;
int num = 5;

int main(void) {

short vec[] = {1,2,3,4,5};
ptrvec = vec;
short *result;

printf("Number to check if its in vec: ");
scanf("%hd", &x);

result = vec_search();

if(result == 0){
    printf("No occurances found");
}else{
    printf("Occurance at: %hd", result);
}

return 0;
}
