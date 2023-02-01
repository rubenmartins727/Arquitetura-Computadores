#include <string.h>

char* where_exists(char *str1, char *str2){

char *result;
int count = 0;

char *str1_temp;
char *str2_temp;

while(*str2 != '\0'){

	if(*str1 == *str2){
	str1_temp = str1;
	str2_temp = str2;
	
	result = str2;
	
	while(*str1 != '\0'){
	
		if(*str1 == *str2){
			count ++;
		} else {
			count = 0;
			str1 = str1_temp;
			str2 = str2_temp;
			break;
		}
		
		str1++;
		str2++;
		
	}
}
		str2++;
}

if(count == 0) {
	result = NULL;
}

return result;

}
