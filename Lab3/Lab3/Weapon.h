#include <ctime>
#include <iostream>
#include <string>

using namespace std;

const int MIN_WP_WEIGHT = 1;
const int MAX_WP_WEIGHT = 15;
const int MIN_WP_COST = 1000;
const int MAX_WP_COST = 1000000;
const int FIRST_MATERIAL = 1;
const int LAST_MATERIAL = 5;

const string GUN_NAME = "Gun";
const string KNIFE_NAME = "Knife";
const string MASHINEGUN_NAME = "Mashine gun";
const string AUTORIFLE_NAME = "Automatic rifle";
const string CARBINE_NAME = "Carbine";

const string GUN_SOUND = "*BANG*";
const string KNIFE_SOUND = "Sshhhh...";
const string MASHINEGUN_SOUND = "TR-R-R-R-R-R-R-R-R-R-R-R-R-R-R-R-R-R-R-R-R-R-R!!!";
const string AUTORIFLE_SOUND = "TRA-TRA-TRA-TRA-TRA-TRA!";
const string CARBINE_SOUND = "*BANG*, Clip-clap, *BANG*, Clip-clap, *BANG*, Clip-clap, *BANG*";

class Weapon
{
public:
	Weapon() {
		weight = MIN_WP_WEIGHT + rand() % MAX_WP_WEIGHT;
		cost = MIN_WP_COST + rand() % MAX_WP_COST;
		cost = cost - cost % 1000 - 1;
		materialType = FIRST_MATERIAL + rand() % LAST_MATERIAL;
	}
	
	virtual void Check() {
		cout << "This is how it sounds: ";
	}
	
	virtual void GetInformation() {
		cout << "Weight - " << weight << " kg\nNumber of material type - " << materialType << "\nCost - " << cost << "$$$" << endl;
	}

private:
	int weight;
	int cost;
	int materialType;
};

class Scabbard
{
public:
	Scabbard() {
		goodLooks = 1 + rand() % 10;
		convenience = 1 + rand() % 10;
	}
	void Info() {
		cout << "Good looks - " << goodLooks << "\nConvenience - " << convenience << endl;
	}

private:
	int goodLooks;
	int convenience;
};

class Ammo
{
public:
	Ammo() {
		capacity = 1 + rand() % 10;
		caliber = 4 + rand() % 10;
	}
	void Info() {
		cout << "Capacity - " << capacity << "\nCaliber - " << caliber << endl;
	}

private:
	int capacity;
	int caliber;
};

class Gun : public Weapon 
{
public:
	void GetInformation() override {
		cout << name << endl;
		Ammo ammo;
		ammo.Info();
		Weapon::GetInformation();
	}

	void Check() override {
		Weapon::Check();
		cout << sound << endl;
	}

private:
	string name = GUN_NAME;
	string sound = GUN_SOUND;
};

class Knife : public Weapon
{
public:
	void GetInformation() override {
		cout << name << endl;
		Scabbard scabbard;
		scabbard.Info();
		Weapon::GetInformation();
	}

	void Check() override {
		Weapon::Check();
		cout << sound << endl;
	}

private:
	string name = KNIFE_NAME;
	string sound = KNIFE_SOUND;
};

class MashineGun : public Weapon
{
public:
	void GetInformation() override {
		cout << name << endl;
		Ammo ammo;
		ammo.Info();
		Weapon::GetInformation();
	}

	void Check() override {
		Weapon::Check();
		cout << sound << endl;
	}

private:
	string name = MASHINEGUN_NAME;
	string sound = MASHINEGUN_SOUND;
};

class AutoRifle : public Weapon
{
public:
	void GetInformation() override {
		cout << name << endl;
		Ammo ammo;
		ammo.Info();
		Weapon::GetInformation();
	}

	void Check() override {
		Weapon::Check();
		cout << sound << endl;
	}

private:
	string name = AUTORIFLE_NAME;
	string sound = AUTORIFLE_SOUND;
};

class Carbine : public Weapon
{
public:
	void GetInformation() override {
		cout << name << endl;
		Ammo ammo;
		ammo.Info();
		Weapon::GetInformation();
	}

	void Check() override {
		Weapon::Check();
		cout << sound << endl;
	}

private:
	string name = CARBINE_NAME;
	string sound = CARBINE_SOUND;
};