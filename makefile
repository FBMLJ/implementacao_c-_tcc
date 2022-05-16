
all: program

CFLAGS = -Wall -g

program: main
	./main
	
main: main.o
	gcc $(CFLAGS) -o main main.cpp arvore.cpp ./estruturas_aux/atributo.cpp




clear:
	rm *.o && rm main