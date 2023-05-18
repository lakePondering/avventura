CPP= main.cpp creature.cpp part.cpp global/constants.cpp global/functions.cpp global/davMath.cpp
OBJ= main.o creature.o part.o global/constants.o global/functions.o global/davMath.o
all: build execute

build: $(OBJ)
	g++ $(CPP) -o executable

execute: executable.exe
	./executable.exe

%.o: %.cpp
	g++ -c -o $@ $^

clean: $(OBJ)
	rm *.o 
