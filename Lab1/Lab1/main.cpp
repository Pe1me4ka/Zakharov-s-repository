#include <iostream>
#include "sq.cpp"

using namespace std;

int main() {
	double a, b, c;
	cout << "input a: ";
	cin >> a;
	cout << "input b: ";
	cin >> b;
	cout << "input c: ";
	cin >> c;
	cout << "Space of your triangle is: " << TriangleSpace1(a, b, c) << endl;
	cout << "Space of your triangle is: " << TriangleSpace2(a, b, c) << endl;
	cout << "Space of your triangle is: " << TriangleSpace3(a, b, c) << endl;
	return 0;
}