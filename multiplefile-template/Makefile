all: clean prepare build

prepare:
	mkdir bin
	mkdir obj

build: 
	gcc -c -O3 -Wall -std=c90 -pedantic-errors src/main.c 
	gcc -c -O3 -Wall -std=c90 -pedantic-errors src/add.c 
	gcc -o bin/mylab src/main.o src/add.o -lm

run:
	./bin/mylab

clean:
	rm -rf bin
	rm -rf obj
	rm -rf docs
	
doc:
	doxygen

style:
	astyle --style=java src/main.c
	astyle --style=java src/add.c
	


