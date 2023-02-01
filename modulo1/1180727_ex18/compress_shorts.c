void compress_shorts(short* shorts, int n_shorts, int* integers) {

int i;
short short_temp1;
short short_temp2;

for(i=0; i<n_shorts; i++){
	
	short_temp1 = (*shorts * 10);
	shorts++; 
	short_temp2 = short_temp1 + *shorts;
	shorts++;
	*integers = (int)(short_temp2);
	integers++; 
}
}
