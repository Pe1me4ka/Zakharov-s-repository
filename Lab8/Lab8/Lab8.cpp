#include <iostream>
#include "character.h"

using namespace std;

double divide(int a, int b)
{
	if (b == 0)
		throw "Division by zero!";
	return a / b;
}

int main() {

	try {
		cout << divide(1, 0) << endl;
	}
	catch (const char* msg) {
		cout << msg << endl;
	}

	Move move("up", 12);
	Use use("asd", 32);

}