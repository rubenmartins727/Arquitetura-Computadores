#include <stdio.h>
#include <string.h>
#include "fill_student.h"
#include "asm.h"

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

//char new_address[100] = "New address";
int grades1[5] = {1,2,3,4,5};
int *ptrGrades1;
ptrGrades1 = grades1;

int grades2[5] = {1,1,1,1,3};
int *ptrGrades2;
ptrGrades2 = grades2;

int grades3[5] = {4,5,5,5,4};
int *ptrGrades3;
ptrGrades3 = grades3;

int greater_grades[5];
int *ptrGreaterGrades;
ptrGreaterGrades = greater_grades;

//update_address(&arrayStudents[0], new_address);
update_grades(s, ptrGrades1);
update_grades(s1, ptrGrades2);
update_grades(s2, ptrGrades3);

int minimum = 2;

int notesAboveMinimum;

notesAboveMinimum = locate_greater(s, minimum, ptrGreaterGrades);
printf("Name: %s\nNotes above minimum: %d\n", s->name, notesAboveMinimum);
for(int i = 0; i < notesAboveMinimum; i++){
    printf("Grades: %d ", *ptrGreaterGrades);
    ptrGreaterGrades++;
}

printf("\n");

notesAboveMinimum = locate_greater(s1, minimum, ptrGreaterGrades);
printf("Name: %s\nNotes above minimum: %d\n", s1->name, notesAboveMinimum);
for(int i = 0; i < notesAboveMinimum; i++){
    printf("Grades: %d ", *ptrGreaterGrades);
    ptrGreaterGrades++;
}
printf("\n");

notesAboveMinimum = locate_greater(s2, minimum, ptrGreaterGrades);
printf("Name: %s\nNotes above minimum: %d\n", s2->name, notesAboveMinimum);
for(int i = 0; i < notesAboveMinimum; i++){
    printf("Grades: %d ", *ptrGreaterGrades);
    ptrGreaterGrades++;
}


// printf("Name: %s\nNumber: %d\nAge: %d\nAddress: %s\n", s->name, s->number, s->age, s->address);
// for(int i = 0; i < 5; i++){
//     printf("Grades: %d, ", s->grades[i]);
// }

return 0;
}