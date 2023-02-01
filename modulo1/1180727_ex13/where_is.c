int where_is(char *str, char c, int *p){
	
	int count = 0;
	int numberTimes = 0;

do{
	if(*str == c){
		
		*p = count;
		numberTimes++;
		p++;
	}
	str++;
	count++;
	
	
} while( *str != 0);


return numberTimes;
}
