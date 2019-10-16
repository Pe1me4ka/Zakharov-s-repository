#include <iostream>
#include <string>
#include <ctime>

using namespace std;

const string FIRST_REPLICA = "Arny: Let's have a look at this thing";
const string SECONG_REPLICA = "Arny: Hey, give me this...";
const string THIRD_REPLICA = "Arny: Gonna try this weapon";
const string FOURTH_REPLICA = "Arny: Let me try this";

const string FIVTH_REPLICA = "Arny: No, leave it to yourself";
const string SIXTH_REPLICA = "Arny: This is not a weapon, this is a sh*t";
const string SEVENTH_REPLICA = "Arny: WTF? To hell...";

class FirstReplica
{
public:
	FirstReplica() {
		int a = 1 + rand() % 4;
		if (a == 1) text = FIRST_REPLICA;
		if (a == 2) text = SECONG_REPLICA;
		if (a == 3) text = THIRD_REPLICA;
		if (a == 4) text = FOURTH_REPLICA;
	}

	void Print()
	{
		cout << "\n" << text << endl;
	}

private:
	string text;
};

class SecondReplica
{
public:
	SecondReplica() {
		int a = 1 + rand() % 3;
		if (a == 1) text = FIVTH_REPLICA;
		if (a == 2) text = SIXTH_REPLICA;
		if (a == 3) text = SEVENTH_REPLICA;
	}

	void Print()
	{
		cout << text << endl;
	}

private:
	string text;
};