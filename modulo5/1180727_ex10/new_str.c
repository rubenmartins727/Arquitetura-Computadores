#include <stdlib.h>

char *new_str(char str[80]){
int i = 0;
int strLenght = 0;
int j;
    do{
        strLenght++;
        i++;
    }while(str[i] != '\0');

    char *ptr_new_str = (char *) malloc(strLenght * sizeof(char));

    for(j=0; j<strLenght; j++){
        ptr_new_str[j] = str[j];
    }
    return ptr_new_str;
}