#include <iostream>
#include <string>
#include <queue>

using namespace std;

class character
{

};

class Action
{
protected:
	string fparam;
	int sparam;

public:
	Action(string one, int two) {
		fparam = one;
		sparam = two;
	}

};

class Move : public Action
{

public:
	Move(string one, int two):Action(one, two){

	}

};

class Use : public Action
{

public:
	Use(string one, int two) :Action(one, two) {}

};

class Attack : public Action
{

public:
	Attack(string one, int two) :Action(one, two) {}

};