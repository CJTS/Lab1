all: malha clean

malha: main.o constroi.o linear.o percorre.o
	gcc main.o constroi.o linear.o percorre.o -o Malha

main.o: main.c main.h
	gcc -c main.c

constroi.o: constroi.h constroi.c
	gcc -c constroi.c

linear.o: linear.c linear.h
	gcc -c  linear.c

percorre.o: percorre.c percorre.h
	gcc -c  percorre.c

clean: 
	rm *.o
