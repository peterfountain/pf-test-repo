all: libhello.dylib

libhello.dylib: hello.o
	g++ -dynamiclib -fPIC -o ../../libhello.dylib hello.o

hello.o : hello.cpp hello.h
	g++ -c hello.cpp

.PHONY: clean
clean:
	rm hello.o
	rm ../../libhello.dylib
