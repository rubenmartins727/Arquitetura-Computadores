void power_ref(int *x, int y){

int result = 1;
int i;

for( i=0; i < y; i++){
	
	result *= *x;
	
}

*x = result;

}
