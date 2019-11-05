#include <iostream>
#include <string>

using namespace std;

const int PUPPY_CODE = 1;
const int KITTY_CODE = 2;
const int ANIMALS_AT_ALL = 2;
const int MIN_WEIGHT = 1;
const int MAX_WEIGHT = 10;
const int MIN_FLUFFILITY = 1;
const int MAX_FLUFFILITY = 10;
const int MIN_HAPPINESS = -50;
const int MAX_HAPPINESS = 100;
const int MIN_CHANCE_TO_RUN = 50;
const int MAX_CHANCE_TO_RUN = 70;
const int MAX_CHANCE_TO_BITE = 5;

class Animal
{
public:
	Animal()
	{
		weight = MIN_WEIGHT + rand() % MAX_WEIGHT;
		fluffility = MIN_FLUFFILITY + rand() % MAX_FLUFFILITY;
	}

	virtual void Reaction()
	{

	}

	void GetWeight()
	{
		cout << "This is how it fat: " << weight << endl;
	}

//protected:
	int weight;
	int fluffility;
};

class Puppy : public Animal
{
public:
	Puppy()
	{
		code = PUPPY_CODE;
	}

//protected:
	int code;

};

class Kitty : public Animal
{
public:
	Kitty()
	{
		code = KITTY_CODE;
		runAwayChance = MIN_CHANCE_TO_RUN + rand() % (MAX_CHANCE_TO_RUN - MIN_CHANCE_TO_RUN + 1);
		biteChance = rand() % (MAX_CHANCE_TO_BITE + 1);
	}

	int code;

//protected:
	int runAwayChance;
	int biteChance;
};

class Child
{
public:
	Child()
	{
		happiness = 50;
		strength = MIN_WEIGHT + rand() % MAX_WEIGHT;
	}

	void ChangeHappiness(int numOfChange)
	{
		happiness += numOfChange;
	}

//protected:
	int happiness;
	int strength;
};

class Home
{
public:
	Home()
	{
		//numOfAnimals = N;
	}

	void Game()
	{
		int a;
		int agility;
		Child John;
		cout << John.happiness << "\n" << John.strength << endl;
		do {
			a = 1 + rand() % (ANIMALS_AT_ALL);
			cout << "a = " << a << endl;
			switch (a)
			{
			case 1:
			{
				Puppy Bobby;
				Bobby.GetWeight();
				if (Bobby.weight > John.strength) John.ChangeHappiness((-1) * Bobby.fluffility);
				else John.ChangeHappiness(Bobby.fluffility);
				cout << John.happiness << endl;
			}
				break;
			case 2: 
				Kitty Joe;
				agility = 1 + rand() % 100;
				Joe.GetWeight();
				cout << "Run away chance: " << Joe.runAwayChance << "\nBite chance: " << Joe.biteChance << endl;
				if ((Joe.weight > John.strength) || (Joe.runAwayChance > agility)) {
					if ((Joe.weight > John.strength) && (Joe.runAwayChance < agility))
						John.ChangeHappiness((-1) * Joe.fluffility);
					if ((Joe.biteChance < agility) && (Joe.runAwayChance >= agility))
						John.ChangeHappiness((-1.5) * Joe.fluffility);
					if (Joe.biteChance >= agility)
						John.ChangeHappiness((-2) * Joe.fluffility);
				}
				else John.ChangeHappiness(Joe.fluffility);
				cout << John.happiness << endl;
				break;
			} 
			cout << endl;
		} while ((John.happiness < MAX_HAPPINESS) && (John.happiness > MIN_HAPPINESS));
	}
};