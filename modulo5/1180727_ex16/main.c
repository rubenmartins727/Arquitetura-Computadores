#include <stdio.h>
#include <stdlib.h>
#include "approved_semester.h"

int main(){

unsigned short grades[3] = {65535, 24311, 43703};
unsigned short *class_grades = grades;

group grupo;
group *g = &grupo;

g->n_students = 3;
g->individual_grades = class_grades;

int approved_students;

approved_students = approved_semester(g);

printf("Number of approved students: %d\n", approved_students);

return 0;
}