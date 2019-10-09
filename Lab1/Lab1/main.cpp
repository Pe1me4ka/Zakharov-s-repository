#include <iostream>
#include "sq.cpp"

using namespace std;

int main() {
	double a, b, c, S;
	cout << "input a: ";
	cin >> a;
	cout << "input b: ";
	cin >> b;
	cout << "input c: ";
	cin >> c;

	S = 0;
	TriangleSpace1(a, b, c, S);
	cout << "\nSpace of your triangle is: " << S << endl;
	S = 0;
	TriangleSpace2(&a, &b, &c, &S);
	cout << "Space of your triangle (with pointers) is: " << S << endl;
	S = 0;
	TriangleSpace3(a, b, c, S);
	cout << "Space of your triangle (with links) is: " << S << endl;

	cout << "\nWhen parameters in functions are constant:" << endl;
	S = 0;
	TriangleSpace4(a, b, c, S);
	cout << "Space of your triangle is: " << S << endl;
	S = 0;
	TriangleSpace5(&a, &b, &c, &S);
	cout << "Space of your triangle (with pointers) is: " << S << endl;
	S = 0;
	TriangleSpace6(a, b, c, S);
	cout << "Space of your triangle (with links) is: " << S << endl;
	return 0;
}