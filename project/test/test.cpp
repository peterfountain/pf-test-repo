#include <iostream>
#include "hello.h"
#include <vector>

using namespace std;

int main(int argv, char *argc[])
{
	hello("Pete");
	hello("Ted");

	vector<string> strings;
	strings.push_back("Hello");
	strings.push_back("Goodbye");

	for (string s : strings)
		cout << s << endl;

	return 0;
}
