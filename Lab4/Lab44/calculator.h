#include <iostream>
#include <list>
#include <string>

using namespace std;

const int BIN = 2;
const int DEC = 10;
const int HEX = 16;

class bin
{
private:
	int code = BIN;
	list<int> lnum;
	int num;

public:
	bin() {
		lnum.push_back(0);
		num = 0;
	}

	bin(int x) {
		num = x;
		int i = 10;
		while (num >= i / i) {
			if ((num % i) > (code - 1)) {
				cout << "Incorrect number." << endl;
				return;
			}
			lnum.push_back(num % i);
			num /= i;
		}

	}

	int Code() {
		return code;
	}

	list<int> Lnum() {
		return lnum;
	}

	int DecForm() {
		int i = 0;
		int dform = 0;
		auto begin = lnum.begin();
		auto end = lnum.end();
		while (begin != end) {
			dform += *begin * pow(code, i);
			i++;
			++begin;
		}
		return dform;
	}

	static list<int> SpecForm(int num) {
		list<int> numList;
		if (num == 0) {
			numList.push_back(0);
			return numList;
		}
		int i = 0;
		while (num != 0) {
			i = num % BIN;
			numList.push_back(i);
			num = num / BIN;
		}
		return numList;
	}
};

class Dec
{
private:
	int code = DEC;
	list<int> lnum;
	int num;

public:
	Dec() {
		lnum.push_back(0);
		num = 0;
	}

	Dec(int x) {
		num = x;
		int i = 10;
		while (num >= i / i) {
			if ((num % i) > (code - 1)) {
				cout << "Incorrect number." << endl;
				return;
			}
			lnum.push_back(num % i);
			num /= i;
		}

	}

	int Code() {
		return code;
	}

	list<int> Lnum() {
		return lnum;
	}

	int DecForm() {
		int i = 0;
		int dform = 0;
		auto begin = lnum.begin();
		auto end = lnum.end();
		while (begin != end) {
			dform += *begin * pow(code, i);
			i++;
			++begin;
		}
		return dform;
	}

	static list<int> SpecForm(int num) {
		list<int> numList;
		if (num == 0) {
			numList.push_back(0);
			return numList;
		}
		int i = 0;
		while (num != 0) {
			i = num % DEC;
			numList.push_back(i);
			num = num / DEC;
		}
		return numList;
	}
};

class Hex
{
private:
	int code = HEX;
	list<int> lnum;
	string num;

public:
	Hex() {
		lnum.push_back(0);
		num = "0";
	}

	Hex(string x) {
		num = x;
		auto iter = num.end();
		auto begin = num.begin();
		string a;
		do {
			--iter;
			switch (*iter)
			{
			case 'A':
				lnum.push_back(10);
				break;
			case 'B':
				lnum.push_back(11);
				break;
			case 'C':
				lnum.push_back(12);
				break;
			case 'D':
				lnum.push_back(13);
				break;
			case 'E':
				lnum.push_back(14);
				break;
			case 'F':
				lnum.push_back(15);
				break;
			default:
				a = *iter;
				lnum.push_back(atoi(a.c_str()));
			}
		} while (iter != begin);
	}

	int Code() {
		return code;
	}

	list<int> Lnum() {
		return lnum;
	}

	int DecForm() {
		int i = 0;
		int dform = 0;
		auto begin = lnum.begin();
		auto end = lnum.end();
		while (begin != end) {
			dform += *begin * pow(code, i);
			i++;
			++begin;
		}
		return dform;
	}

	static list<int> SpecForm(int num) {
		list<int> numList;
		if (num == 0) {
			numList.push_back(0);
			return numList;
		}
		int i = 0;
		while (num != 0) {
			i = num % HEX;
			numList.push_back(i);
			num = num / HEX;
		}
		return numList;
	}

};

template<typename T>
class calculator
{
private:
	int code;

public:
	static list<int> addition(T num1, T num2) {
		list<int> l(0);
		if (num1.Code() != num2.Code()) {
			cout << "Incorrect number systems" << endl;
			return l;
		}
		return T::SpecForm(num1.DecForm() + num2.DecForm());
	}

	static list<int> difference(T num1, T num2) {
		list<int> l(0);
		if (num1.Code() != num2.Code()) {
			cout << "Incorrect number systems" << endl;
			return l;
		}
		int first = num1.DecForm(), second = num2.DecForm();
		if (num1.DecForm() < num2.DecForm()) {
			first = num2.DecForm();
			second = num1.DecForm();
		}
		return T::SpecForm(first - second);

	}

	static list<int> multiplication(T num1, T num2) {
		list<int> l(0);
		if (num1.Code() != num2.Code()) {
			cout << "Incorrect number systems" << endl;
			return l;
		}
		return T::SpecForm(num1.DecForm() * num2.DecForm());

	}
};