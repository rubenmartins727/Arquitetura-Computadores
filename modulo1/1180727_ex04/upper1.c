void upper1(char *str){

do{
	if(*str >= 'a' && *str <= 'z'){
		*str = *str - 32;
	}
	
	str++;
	
} while(*str != 0);

}
