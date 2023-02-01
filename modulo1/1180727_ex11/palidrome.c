int palindrome(char *str){
	
int n_elem=0;


	while(*(str+n_elem)!='\0'){		
		n_elem++;
	}	
	if(n_elem==0){
		return 0;
	}
	
	int i = 0;
	int c =0;
	int j= n_elem-1;

	while(i<=j){

		if(*(str+i) == *(str+j)){
			c++;
		}else{
			return 0;
		}
		i++;
		j--;
		
			}
	
	if(c==0){
		return 0;
	}else{
		return 1;
	}
}

 

