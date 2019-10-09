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

	cout << "\nSpace of your triangle is: " << TriangleSpace1(a, b, c) << endl;
	cout << "Space of your triangle (with pointers) is: " << TriangleSpace2(&a, &b, &c) << endl;
	cout << "Space of your triangle (with links) is: " << TriangleSpace3(a, b, c) << endl;

	cout << "\nWhen a, b and c are const:" << endl;
	const double x = a, y = b, z = c;
	cout << "Space of your triangle is: " << TriangleSpace1(x, y, z) << endl;
	cout << "Space of your triangle (with pointers) is: " << TriangleSpace22(&x, &y, &z) << endl;
	cout << "Space of your triangle (with links) is: " << TriangleSpace33(x, y, z) << endl;
	return 0;
}