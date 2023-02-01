#include <stdio.h>


int main(){

int x= 5;
int* xPtr = &x;
float y = *xPtr + 3;
int vec[] = {10, 11, 12, 13};

printf("Value of x:%d and y:%f\n", x, y);

printf("Address of x:%x and xPtr:%x\n", &x, &xPtr);

printf("Value pointed by xPtr:%d\n", *xPtr);

printf("The address of vec:%d\n", &vec);

for(int i = 0; i < 4; i++){
	printf("Value of vec[%d]: %d\n", i, vec[i]);
}

for(int i = 0; i < 4; i++){
	printf("Address of vec[%d]: %p\n", i, &vec[i]);
}


return 0;
}
