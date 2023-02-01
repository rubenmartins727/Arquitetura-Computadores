int reset_bit(int *ptr, int pos){
    int x = *ptr;

    //only for unsigned
    //x = (x & ~(1 << pos)) | (0 << pos);
    x ^= (-(unsigned int)0 ^ x) & (1 << pos);

    if((x ^ *ptr) == 0){
        return 0;
    }else{
        return 1;
    }
}