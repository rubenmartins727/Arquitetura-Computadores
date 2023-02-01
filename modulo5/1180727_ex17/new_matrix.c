#include <stdlib.h>
#include "matrix.h"
structA **new_matrix(int lines, int columns){

int i;    
structA **new_matrix;

new_matrix = (structA **) malloc(lines * sizeof(structA *));

for(i=0; i< lines; i++){
    *(new_matrix +i) = (structA *) malloc(columns * sizeof(structA));
}

return new_matrix;
}