#include <stdio.h>
#include <string.h>

int main( void ){

union union_u1{
char vec[32];
float a;
int b;
} u;

union union_u1 * ptr = &u;

strcpy(ptr->vec, "arquitectura de computadores" );

printf( "[1]=%s\n", ptr->vec );
ptr->a = 123.5;
printf( "[2]=%f\n", ptr->a );
ptr->b = 2;
printf( "[3]=%d\n", ptr->b );

printf( "[1]=%s\n", ptr->vec );
printf( "[2]=%f\n", ptr->a );
printf( "[3]=%d\n\n", ptr->b );

//Altering the value of any of the members will alter other memberr values
//Because of memory allocated is shared by individual members of union

struct struct_s1{
char vec[32];
float a;
int b;
} s;

struct struct_s1 * ptr2 = &s;

strcpy(ptr2->vec, "arquitectura de computadores" );

printf( "[1]=%s\n", ptr2->vec );
ptr2->a = 123.5;
printf( "[2]=%f\n", ptr2->a );
ptr2->b = 2;
printf( "[3]=%d\n", ptr2->b );

printf( "[1]=%s\n", ptr2->vec );
printf( "[2]=%f\n", ptr2->a );
printf( "[3]=%d\n", ptr2->b );

//Altering the value of a member will not affect other members of the structure
//Each member within a stricture is assigned unique storage area of location

return 0;
}
