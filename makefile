
all: program

CFLAGS = -Wall -g

program: main
	./main
	
main: main.o
	gcc $(CFLAGS) -o main main.o arvore.cpp

arvore.o:
	arvore.cpp

main.o: 
	main.cpp


clear:
	rm *.o && rm main