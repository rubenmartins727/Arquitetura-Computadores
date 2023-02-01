int odd_sum(int *p){

int i;
int sum = 0;
int num = *p;
p++;

for(i = 1 ; i< num; i++){

	if(*p % 2 != 0){
		sum += *p;
		p++;
	}
}
return sum;
}


