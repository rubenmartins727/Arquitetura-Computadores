#include <stdio.h>

int count_bits_one(int x){
    int count =0;

    while(x != 0){
        if((x & 1) == 1){ //compara se o bit menos significativo é 1
            count ++;
        }
        x = x >> 1; // right shift, retira 1 bit
    }

return count;
}