int find_matrix(int **m, int y, int k, int num){
    int number = *(*(m+y)+k);

    if(number == num){
        return 1;
    }else{
        return 0;
    }
}