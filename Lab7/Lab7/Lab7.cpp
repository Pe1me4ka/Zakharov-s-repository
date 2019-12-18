#include <iostream>
#include "dividers.h"

using namespace std;

int main() {

	dividers div(20);
	auto iter = div.begin();
	auto end = div.end();
	while (iter != end) {
		cout << *iter << ", ";
		++iter;
	}
	cout << endl;

	cout << MaxDivSearch(10, 20) << endl;
	cout << MaxDivSearch2(10, 20) << endl;

	cout << DivAvg(20) << endl;
 
	div.erase();
	cout << endl;
}