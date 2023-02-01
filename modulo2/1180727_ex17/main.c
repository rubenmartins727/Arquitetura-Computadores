#include <stdio.h>
#include "asm.h"

int a = 0;
int b = 0;

int main(void) {

int res;
int num = 0;

printf("Valor a:");
scanf("%d",&a);

printf("Valor b:");
scanf("%d",&b);

printf("What operation do you want to exacute?\n 1-Sum\n 2-Subtraction\n 3-Muliplication\n 4-Division\n 5-Modulus\n 6-Power2 \n 7-Power3\n");

scanf("%d", &num);

switch(num){
    case 1:
        res = sum();
        printf("a + b = %d", res);
        break;

    case 2:
        res = subtraction();
        printf("a - b = %d", res);
        break;

    case 3:
        res = multiplication();
        printf("a * b = %d", res);
        break; 

    case 4:
        res = division();
        printf("a / b = %d", res);
        break;  

    case 5:
        res = modulus();
        printf("|(a + b)| = %d", res);
        break;     

    case 6:
        res = power2();     
        printf("a * a = %d", res);
        break;

    case 7:
        res = power2();
        printf("a * a * a = %d", res);
        break; 

    default:
        printf("Valor inserido incorreto");     
}

return 0;
}
