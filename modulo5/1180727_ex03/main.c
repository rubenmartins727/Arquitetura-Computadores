#include <stdio.h>
#include <string.h>
#include "fill_student.h"

int main( void ){
   
Student arrayStudents[5];   

short number1 = 1;
char age = 22;
//int grades[] = {2,3};
char name1[] = "Ruben";
char address1[] = "Travessa do Carreiro";

short number2 = 2;
char name2[] = "Andre";
char address2[] = "Rua das oliveiras";

short number3 = 3;
char name3[] = "Luis";
char address3[] = "Rua das lages";

fill_student(&arrayStudents[0], age, number1, name1, address1);
fill_student(&arrayStudents[1], age, number2, name2, address2);
fill_student(&arrayStudents[2], age, number3, name3, address3);

Student *s = &arrayStudents[0];
Student *s1 = &arrayStudents[1];
Student *s2 = &arrayStudents[2];

printf("Name: %s\nNumber: %d\nAge: %d\nAddress: %s\n\n", s->name, s->number, s->age, s->address);
printf("Name: %s\nNumber: %d\nAge: %d\nAddress: %s\n\n", s1->name, s1->number, s1->age, s1->address);
printf("Name: %s\nNumber: %d\nAge: %d\nAddress: %s\n", s2->name, s2->number, s2->age, s2->address);

return 0;
}