CPP= main.cpp creature.cpp part.cpp global/davMath.cpp global/functions.cpp
OBJ= main.o creature.o part.o global/davMath.o global/functions.o
all: build execute

build: $(OBJ)
	g++ $(CPP) -o executable

execute: executable.exe
	./executable.exe

%.o: %.cpp
	g++ -c -o $@ $^

clean: 
	rm *.o 
