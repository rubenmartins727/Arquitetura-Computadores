#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"


int main(){

int lines = 4;
int columns = 3;
int i;

unionB union_b;
unionB *ptr_unionB = &union_b;

ptr_unionB->b = 'c';
ptr_unionB->c = 7;
ptr_unionB->a = 6;
ptr_unionB->d = 8;

structA struct_a;
structA *ptr_structA = &struct_a;

ptr_structA->a[0] = 1;
ptr_structA->a[1] = 2;
ptr_structA->a[2] = 3;
ptr_structA->b = 'a';
ptr_structA->e = 'b';
ptr_structA->c = 4;
ptr_structA->d = 5;
ptr_structA->ub = union_b;

structA **matrix;

matrix = new_matrix(lines,columns);

*(*(matrix + 1) + 2) = struct_a;

char res;
char expected = 'c';


res = return_unionB_b(matrix, 1, 2);

printf("Matrix[1][2]-> Expected: %s, Actual: %s\n", expected, res);

for(i = 0; i<lines; i++){
    free(*(matrix+i));
}

free(matrix);

return 0;
}