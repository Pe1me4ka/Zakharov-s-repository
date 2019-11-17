#include <iostream>
#include "forward_list_2_0.h"

using namespace std;

int main()
{
	//Examples:
	cout << "Examples:" << endl;
	char arr[25] = "Hello world!!!";
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << endl;
	}
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << len << endl;
	cout << endl;

	int* arr2 = new int[4]{1, 3, 2, 4};
	cout << arr2 << endl;
	cout << *arr2 + 2 << endl;
	cout << *(arr2 + 2) << endl;
	delete[] arr2;
	cout << endl;

	int arr4[4] = { 0, 2, 4, 6 };
	int *arr3 = arr4;
	cout << *(1+ arr3) << endl;
	cout << endl;

	//Tests:
	cout << "Tests" << endl;
	forward_list_2_0 arra(4, arr4);
	cout << "GetList test:" << endl;
	arra.GetList();
	cout << endl;

	cout << "push_front test:" << endl;
	arra.push_front(15);
	arra.GetList();
	cout << endl;

	cout << "push_back test:" << endl;
	arra.push_back(15);
	arra.GetList();
	cout << endl;

	cout << "pop_front test:" << endl;
	arra.pop_front();
	arra.GetList();
	cout << endl;

	cout << "pop_back test:" << endl;
	arra.pop_back();
	arra.GetList();
	cout << endl;

	cout << "pop_element test:" << endl;
	arra.pop_element(3);
	arra.GetList();
	arra.pop_element(10);
	arra.GetList();
	cout << endl;

	cout << "isEmpty test:" << endl;
	if (arra.isEmpty()) cout << "List is empty" << endl;
	else cout << "List isn't empty" << endl;
	cout << endl;

	cout << "getSize test:" << endl;
	cout << arra.getSize() << endl;
	cout << endl;

	arra.Clear();
	cout << "(After clear)" << endl;
	if (arra.isEmpty()) cout << "List is empty" << endl;
	else cout << "List isn't empty" << endl;
	return 0;
}