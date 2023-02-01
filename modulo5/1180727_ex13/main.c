#include <stdio.h>
#include <stdlib.h>
#include "asm.h"


int main(){

int lines = 2;

int columns = 3;

int **matrix;

int res;

matrix = new_matrix(lines,columns);


**matrix = 1;
*(*matrix + 1) =2;
*(*matrix + 2) =3;
*(*(matrix + 1)) = 4;
*(*(matrix + 1) + 1) = 5;
*(*(matrix + 1) + 2) = 6;


printf("New matriz: %p\n", matrix);

res = count_odd_matrix(matrix, lines, columns);

printf("Number of odd numbers in matrix: %d\n", res);

for(int i = 0; i<lines; i++){
    free(*(matrix+i));
}

free(matrix);

return 0;
}