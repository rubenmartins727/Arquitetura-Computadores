// 2- Implement a function int sum(int a, int b) that returns the sum of two integers. 
//Your program should invoke that function inside a loop until the returned result is less than 10.

#include <stdio.h>
#include "sum.h"

int main(){

	int result = 0;
	
	while(result < 7){
		
		result += sum(1,2); //soma sempre o numero 1+2 que vai dar dois 
		printf("Result: %d \n", result);
	}
	

	printf("OLA BOM DIA");
	
	
	
	return 0;
}

