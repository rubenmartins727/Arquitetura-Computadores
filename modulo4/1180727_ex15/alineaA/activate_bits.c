int activate_bits(int a, int left, int right){
    
       int count=0;
       int count2=0; 

    while(count != right){ //aplicar 1´s ate econtrar right
        a = a | (1 << (count));
        count++;
    }

    int b = a;
       
    b = b << ((sizeof(b)<<3) - left); // bits a colocar a um á esquerda da esquerda

    while(count2 != ((sizeof(b)<<3) - left)){ //aplicar 1´s ate econtrar left
        b = b | (1 << (count2));
        count2++;
    }
    b = b << left; // eliminar os 10 MSB para usar como mascara de 1´s

    a = a | b; // a | mascara de 1´s a partir do left

     return a;
}