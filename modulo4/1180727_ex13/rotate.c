int rotate_left(int num, int nbits){

    // shift esquerda nbits | to save the nbits most significant bits and allocate them in the 4 leat significant bits
    return (num << nbits) | (num >> ((sizeof(num) << 3) - nbits));
}

int rotate_right(int num, int nbits){

    return (num >> nbits) | (num << ((sizeof(num) << 3) - nbits));
}

