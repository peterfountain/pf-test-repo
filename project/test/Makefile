all: test

test: test.cpp
	g++ -I../../lib/hello -L../../ -lhello test.cpp -o ../../test


.PHONY: clean

clean:
	rm test.o
	rm ../../test
