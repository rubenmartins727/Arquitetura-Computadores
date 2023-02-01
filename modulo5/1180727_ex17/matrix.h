typedef union {
char b;
short c;
int a;
long int d;//8bytes
}unionB;//8bytes

typedef struct {
short int a[3]; //2bytes each = 6bytes
char b;
char e;
long long int c;//8bytes
short d;
unionB ub;//8bytes
}structA;//32bytes

char return_unionB_b(structA **matrix, int i, int j);
structA **new_matrix(int lines, int columns);