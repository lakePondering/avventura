all: build execute

execute: e.exe
	./e.exe

build: main.o
	g++ main.o -o e.exe

main.o: main.cpp
	g++ main.cpp -c -o main.o

clean:
	rm *.o *.exe 