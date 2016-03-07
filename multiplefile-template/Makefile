all: clean prepare build

prepare:
	mkdir bin
	mkdir obj

build: 
	gcc -c -O3 -Wall -std=c90 -pedantic-errors -o obj/main.o src/main.c 
	gcc -c -O3 -Wall -std=c90 -pedantic-errors -o obj/add.o src/add.c -lm 
	gcc -o bin/mylab obj/main.o obj/add.o -lm

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
	


