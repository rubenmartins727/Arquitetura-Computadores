#include <stdio.h>
#include "asm.h"

int num = 0;

int main(void) {

char res;

printf("Valor de num:");
scanf("%d",&num);

res = check_num();

switch(res){
    case 4:
        printf("num is even and negative");
        break;

    case 5:
        printf("num is odd and negative");
        break;
    
    case 6:
        printf("num is even and positive");
        break;
    
    case 7:
        printf("num is odd and positive");
        break;

    default:
        printf("Valor inserido incorreto");
}

return 0;
}
