#include <stdio.h>
#include "array_sort2.h"

int main(){

int vec[] = {2,3,4,1,7,6};
int i;

array_sort2(vec, 6);

printf("Array ordenado:\n");

for(i=0; i < 6; i++){
	
	printf("vec[%d]: %d\n", i, vec[i]);
}

return 0;
}
