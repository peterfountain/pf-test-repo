#include <iostream>
#include "hello.h"
#include <vector>
#include "base64.h"

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

	string cs = "Const String";
	cs.replace(0, 1, "c");
	cout << cs << endl;

	cout << "--- End ---\n";

	return 0;
}
