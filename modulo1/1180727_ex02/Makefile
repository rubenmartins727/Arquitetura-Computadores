# ex02/Makefile

main: copy_vec.o main.o
		gcc -Wall -g copy_vec.o main.o -o main
		
copy_vec.o: copy_vec.c copy_vec.h
		gcc -Wall -g -c copy_vec.c
					
main.o: main.c copy_vec.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main

