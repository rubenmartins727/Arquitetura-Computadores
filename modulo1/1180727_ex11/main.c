#include <stdio.h>
#include "palindrome.h"

int main(){
	char str[] ="ana";
	char *ptr1=str;
	int isPalindrome = palindrome(ptr1);
	if(isPalindrome == 1){
		printf("É palindrome.");
	}else{
		printf("Não é palindrome.");
	}

	return 0;

} 

