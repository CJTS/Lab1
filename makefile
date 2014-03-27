all: malha clean

teste: constroi.c Exemplo_teste.c
	gcc -I./CUnit -L./CUnit Exemplo_teste.c -lcunit -o teste
	./teste

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
