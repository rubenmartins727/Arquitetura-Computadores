# ex14/Makefile

main: activate_bits.o main.o
		gcc -Wall -g activate_bits.o main.o -o main
		
activate_bits.o: activate_bits.c activate_bits.h
			gcc -Wall -c activate_bits.c
					
main.o: main.c activate_bits.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main

