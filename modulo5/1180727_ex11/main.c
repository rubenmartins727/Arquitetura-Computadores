#include <stdio.h>
#include <stdlib.h>
#include "new_matrix.h"

int main(){

int lines = 2;

int columns = 3;

int **matrix;

matrix = new_matrix(lines,columns);

printf("New matriz: %p\n", matrix);

for(int i = 0; i<lines; i++){
    free(*(matrix+i));
}

free(matrix);

return 0;
}