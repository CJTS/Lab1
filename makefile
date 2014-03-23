all: build clean

build: main.o constroi.o linear.o percorre.o
	gcc main.o constroi.o linear.o percorre.o -o exe

main.o: main.c
	gcc -c main.c

constroi.o: constroi.h constroi.c
	gcc -c constroi.c

linear.o: linear.c linear.h
	gcc -c  linear.c

percorre.o: percorre.c percorre.h
	gcc -c  percorre.c

clean: 
	rm *.o
