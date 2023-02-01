#include <stdlib.h>
int **new_matrix(int lines, int columns){

int i;    
int **new_matrix;

new_matrix = (int **) malloc(lines * sizeof(int *));

for(i=0; i< lines; i++){
    *(new_matrix +i) = (int *) malloc(columns * sizeof(int));
}

return new_matrix;
}