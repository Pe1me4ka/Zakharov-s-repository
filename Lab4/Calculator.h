#include <iostream>
#include <string>
#include <list>

using namespace std;

const char BIN_CODE = 'b';
const char DEC_CODE = 'd';
const char HEX_CODE = 'h';
const int BIN_MAX_VAL = 1;
const int DEC_MAX_VAL = 9;
const int HEX_MAX_VAL = 15;

//template<typename T>
class Calculator
{
public:
	void Addition(Binary nn1, Binary nn2)
	{
		if (nn1.code != nn2.code) return;

		Binary n1 = nn1;
		Binary n2 = nn2;
		if (n1.val.size() < n2.val.size()) {
			n1 = nn2;
			n2 = nn1;
		}

		auto begin1 = n1.val.begin();
		auto begin2 = n2.val.begin();
		auto end1 = n1.val.end();
		auto end2 = n2.val.end();
		auto iter1 = n1.val.end();
		auto iter2 = n2.val.end();

		do
		{
			--iter1;
			--iter2;
			*iter1 = *iter1 + *iter2;
		} while ((iter1 != begin1) && (iter2 != begin2));

		iter1 = n1.val.end();
		--iter1;
		switch (n1.code)
		{
		case 'b':

			return;

		case 'd':

			return;

		case 'h':
			
			return;
		}
	}
};

class Binary
{
public:
	char code = BIN_CODE;
	list<int> val;
	Binary(list<int> n)
	{
		val = n;
	}
};

class Decimal
{

};

class Hexadecimal
{

};