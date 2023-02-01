typedef struct {
int y;
short x;
} structA; //8bytes

typedef struct {
structA a; //8 bytes pos=0
structA *b; //8bytes pos=8 
int x; //pos=16
int y; //pos=20
short z;
char c;
char e[3];
} structB;

short fun1(structB *s);
short fun2(structB *s);
short* fun3(structB *s);
short fun4(structB *s);