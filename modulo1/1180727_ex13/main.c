#include <stdio.h>
#include "where_is.h"

int main(){
	
int numberTimes;	
	
char str[] = "The number mustm be saved";

int p[80] ;

char c = 'm';

numberTimes = where_is(str, c, p);

for(int i = 0; i < numberTimes; i++){
	
	printf("at index:%d\n", *(p+i));
}

printf("snumer of times: %d", numberTimes);


return 0;
}
