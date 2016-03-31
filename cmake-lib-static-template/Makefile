all: clean style
	mkdir build && cd build && cmake .. && make

run:
	./build/bin/mylab

clean:
	rm -rf build
	rm -rf docs

doc:
	doxygen

style:
	astyle --style=java src/main.c
	astyle --style=java lib/add/add.c
	astyle --style=java lib/add/add.h
	


