#MAKEFILE

ex10: new_str.o main.o
	gcc new_str.o main.o -o ex10
		
new_str.o: new_str.c
	gcc -g -Wall -c new_str.c -o new_str.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o ex10
	
run: ex10
	./ex10