### Makefile ###
#Para compilar digite no terminal "make project"
project:
	gcc -c lista.h
	gcc -c matriz.h
	gcc -c lista.c
	gcc -c matriz.c
	gcc -c main.c
	gcc -o main matriz.o lista.o main.o
	./main
