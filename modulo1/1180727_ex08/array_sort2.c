void array_sort2(int *vec, int n){

int i;
int j;
int temp=0;

for(i=0; i < n; i++){
	
	for(j=i+1 ; j < n; j++){
		
		if(*(vec +i) > *(vec +j)){
			temp = *(vec +i);
			*(vec +i) = *(vec +j);
			*(vec +j) = temp;
		}
	}
}
}
