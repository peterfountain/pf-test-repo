libbase64.dylib: base64.o
	g++ -g -std=c++11 -dynamiclib -fPIC -o ../../libbase64.dylib base64.o

base64.o: base64.cpp base64.h
	g++ -g -std=c++11 -c base64.cpp -o base64.o

clean:
	rm base64.o
	rm ../../libbase64.dylib
