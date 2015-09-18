all: test

test: test.cpp
	g++ -g -std=c++11 -Ilib/hello -Ilib/base64 -L. -lhello -lbase64 \
	test.cpp -o test

.PHONY: clean

clean:
	rm test
