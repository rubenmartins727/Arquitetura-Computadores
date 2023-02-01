#include <stdio.h>

union union_u1{
char vec[32];//32 bytes
float a;//4 bytes
int b;//4bytes
} u;

struct struct_s1{
char vec[32];//32 bytes
float a;//4 bytes
int b;//4 bytes
} s;

int main(void) {

printf("Size of union_u1: %ld\n", sizeof(u));
printf("Size of struct_s1: %ld\n", sizeof(s));

printf("The size of a structure is the sum of the size of all data members and the packing size. The size of the union is the size of its data member, which is the largest in size.");

return 0;
}
