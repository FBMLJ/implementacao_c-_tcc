
all: main
	./bin/main.o



main: main.cpp
	gcc -o ./bin/main.o main.cpp

clean:
	rm -rf ./bin/*.o 