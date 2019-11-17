#include <iostream>

using namespace std;

class forward_list_2_0
{
public:
	int* arr;
	int amount;
	int emptyCode = 0;

	forward_list_2_0(int N, int outsideArr[]) {
		if ((outsideArr[0] >= 0) || (outsideArr[0] <= 0)) emptyCode = 1;
		arr = outsideArr;
		amount = N;
	}

	void GetList() {
		for (int i = 0; i < amount; i++) {
			cout << *(arr + i) << endl;
		}
	}

	void push_front(int elem) {
		int* changedCopy = new int[amount + 1];
		*changedCopy = elem;
		for (int i = 0; i < amount; i++) {
			*(changedCopy + i + 1) = *(arr + i);
		}
		arr = changedCopy;
		amount++;
	}

	void push_back(int elem) {
		int* changedCopy = new int[amount + 1];
		for (int i = 0; i < amount; i++) {
			*(changedCopy + i) = *(arr + i);
		}
		*(changedCopy + amount) = elem;
		arr = changedCopy;
		amount++;
	}

	void pop_front() {
		int* changedCopy = new int[amount - 1];
		for (int i = 0; i < amount - 1; i++) {
			*(changedCopy + i) = *(arr + i + 1);
		}
		arr = changedCopy;
		amount--;
	}

	void pop_back() {
		int* changedCopy = new int[amount - 1];
		for (int i = 0; i < amount - 1; i++) {
			*(changedCopy + i) = *(arr + i);
		}
		arr = changedCopy;
		amount--;
	}

	void pop_element(int N) {
		if ((N > amount) || (N <= 0)) {
			cout << "Input correct parameter" << endl;
			return ;
		}
		int* changedCopy = new int[amount - 1];
		for (int j = 0, i = 0; i < amount; i++, j++) {
			if (i == N - 1) j++;
			*(changedCopy + i) = *(arr + j);
		}
		arr = changedCopy;
		amount--;
	}

	/*void isEmprty() {
		if (emprtyCode == 0) {
			cout << "List is empty" << endl;
			return;
		}
		if (emprtyCode == 1) {
			cout << "List isn't empty" << endl;
			return;
		}
		else return;
	}*/

	bool isEmpty() {
		if (emptyCode == 0) return true;
		if (emptyCode == 1) return false;
		else return 0;
	}

	int getSize() {
		return amount;
	}

	void Clear() {
		delete[] arr;
		emptyCode = 0;
	}
};