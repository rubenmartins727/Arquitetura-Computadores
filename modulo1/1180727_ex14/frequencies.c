void frequencies(float *grades, int n, int *freq){

int i;
int j;

for(i = 0; i < 20; i++){
	
	int contador = 0;
	
	for(j = 0; j < n; j++){
	
		if( (int)*(grades + j) == i){
			
			contador++;	
		}
	}
	*freq = contador;
	freq++ ;
	
}
}
