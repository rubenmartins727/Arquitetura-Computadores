#include <stdlib.h>
#include "matrix.h"
int **add_matrixes(int **a, int **b, int y, int k){
//int tempK=k;
int numberA;
int numberB;
int **return_matrix;
int i;
int j;
int res=0;

return_matrix = new_matrix(y,k);

    for(i=0; i<y; i++){
        for(j=0; j<k; j++){
            numberA = *(*(a+i)+j);
            numberB = *(*(b+i)+j);
            res = numberA + numberB;
            *(*(return_matrix + i) + j) = res;
        }
    }

    // do{
    //     do{
    //         numberA = *(*(a+y)+tempK);
    //         numberB = *(*(b+y)+tempK);
    //         res = numberA + numberB;
    //         *(*(return_matrix + y) + tempK) = res;
    //         tempK--;
    //     }while(tempK>=0);

    //     tempK =k;
    //     y--;
    // }while(y>=0);

return return_matrix;
}