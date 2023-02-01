#include <stdio.h>
#include "copy_vec.h"

int main(){
	
	int vec1[] = {1,2,3,4};
	int vec2[5];
	
	copy_vec(vec1, vec2, 4);
	
	printf("vec2 after the copy:\n");
	for(int i = 0; i < 4; i++){
	printf("vec2[%d]: %d\n",i, vec2[i]);
}
	
return 0;
}	
