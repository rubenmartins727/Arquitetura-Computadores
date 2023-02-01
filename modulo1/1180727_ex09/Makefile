# ex09/Makefile

main: sort_without_reps.o main.o
		gcc -Wall -g sort_without_reps.o main.o -o main
		
sort_without_reps.o: sort_without_reps.c sort_without_reps.h
		gcc -Wall -g -c sort_without_reps.c
					
main.o: main.c sort_without_reps.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
