all: clean prepare build

prepare:
	mkdir bin

build: 
	gcc -Wall -std=c90 -pedantic-errors -O3 -o bin/mylab src/main.c -lm

run:
	./bin/mylab

clean:
	rm -rf bin
	rm -rf docs
	
doc:
	doxygen

style:
	astyle --style=allman src/main.c


