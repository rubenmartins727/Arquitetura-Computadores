#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"


int main(){

int lines = 2;
int columns = 3;
int i;

int **a;
int **b;
int **return_matrix;

a = new_matrix(2,3);
b= new_matrix(2,3);

**a = 1;
*(*a + 1) =2;
*(*a + 2) =3;
*(*(a + 1)) = 4;
*(*(a + 1) + 1) = 5;
*(*(a + 1) + 2) = 6;

**b = 6;
*(*b + 1) =5;
*(*b + 2) =4;
*(*(b + 1)) = 3;
*(*(b + 1) + 1) = 2;
*(*(b + 1) + 2) = 1;

return_matrix = add_matrixes(a, b, lines,columns);

int actual = *(*(return_matrix + 1) + 2);

printf("Matrix[2][3]-> Expected: %d, Actual: %d\n", 7, actual);

for(i = 0; i<lines; i++){
    free(*(a+i));
}
for(i = 0; i<lines; i++){
    free(*(b+i));
}
for(i = 0; i<lines; i++){
    free(*(return_matrix+i));
}

free(a);
free(b);
free(return_matrix);


return 0;
}