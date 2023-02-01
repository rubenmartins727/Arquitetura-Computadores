#include <stdio.h>
#include "compress_shorts.h"

int main(){

int i;

short shorts[] = {1,2,3,4,5,6};
int n_shorts = 6;

int integers[3];

compress_shorts(shorts, n_shorts, integers);

for(i=0; i<3; i++){
	printf("Array of integers: %d\n", *(integers + i));
	
}

return 0;
}
