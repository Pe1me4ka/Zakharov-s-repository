#include <iostream>
#include <list>
#include <math.h>
#include <string>
#include "calculator.h"

using namespace std;

void printList(list<int> numList) {
	auto iter = numList.end();
	auto begin = numList.begin();
	do {
		--iter;
		cout << *iter;
	} while (iter != begin);
	cout << endl;
	return;
}

int main() {
	
	bin num1(101);			//Десять знаков - максимум
	list<int> numList1(calculator<bin>::addition(num1, num1));
	printList(numList1);

	Dec num2(1235);
	list<int> numList2(calculator<Dec>::difference(num2, num2));
	printList(numList2);

	Hex num3("ABC");
	list<int> numList3(calculator<Hex>::multiplication(num3, num3));
	printList(numList3);

	return 0;
}