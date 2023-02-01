int sum_even(int *p, int num){

int i;
int soma=0;

for(i = 0; i < num; i++){
	
	if(*p % 2 == 0){
		soma += *p;
	}
	p++;
}

return soma;

}
