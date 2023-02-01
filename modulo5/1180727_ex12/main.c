#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"


int main(){

int lines = 2;

int columns = 3;

int **matrix;

matrix = new_matrix(lines,columns);


**matrix = 1;
*(*matrix + 1) =2;
*(*matrix + 2) =3;
*(*(matrix + 1)) = 4;
*(*(matrix + 1) + 1) = 5;
*(*(matrix + 1) + 2) = 6;


printf("New matriz: %p\n", matrix);

int res = find_matrix(matrix,1,2,6);

if(res==1){
    printf("Number found");
}else{
    printf("Number not found");
}

for(int i = 0; i<lines; i++){
    free(*(matrix+i));
}

free(matrix);

return 0;
}