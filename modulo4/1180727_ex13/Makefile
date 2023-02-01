# ex13/Makefile

main: rotate.o main.o
		gcc -Wall -g rotate.o main.o -o main
		
rotate.o: rotate.c rotate.h
			gcc -Wall -c rotate.c
					
main.o: main.c rotate.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main

