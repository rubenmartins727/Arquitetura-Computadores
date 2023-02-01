void capitalize(char *str){

do{
	
	if(*str == ' '){
		str++;
		*str = *str - 32;
	}

str++;
	
} while(*str != 0);

}
