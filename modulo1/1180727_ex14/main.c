#include <stdio.h>
#include "frequencies.h"

int main(){

int i;
int n = 10;

float grades[10] = {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0, 12.67, 16.23};

int freq[20];

frequencies(grades, n, freq);

for(i = 0; i<20 ; i++){
	
	printf("freq array:%d\n", *(freq+i));
	
}

return 0;
}
