#include <iostream>
#include <ctime>
#include <string>
#include "Weapon.h"
#include "Replicas.h"

using namespace std;

const string SEPARATOR = "-------------------------------\n";

int main()
{
	srand(time(0));
	int N;
	cout << "Input number of weapons: ";
	cin >> N;
	cout << endl;
	int j;
	int a = 1 + rand() % 100;
	int p;

	for (int i = 0; i < N; i++) {

		cin.get();
		j = 1 + rand() % 5;
		p = 1 + rand() % 100;
		FirstReplica fr;
		SecondReplica sr;
		fr.Print();
		cout << SEPARATOR;

		if (j == 1) {
			Gun gun;
			gun.GetInformation();
			gun.Check();
		}
		if (j == 2) {
			Knife knife;
			knife.GetInformation();
			knife.Check();
		}
		if (j == 3) {
			MashineGun mg;
			mg.GetInformation();
			mg.Check();
		}
		if (j == 4) {
			AutoRifle ar;
			ar.GetInformation();
			ar.Check();
		}
		if (j == 5) {
			Carbine carbine;
			carbine.GetInformation();
			carbine.Check();
		}
		cout << SEPARATOR;
		if (p == a) {
			cout << "Arny: Oh my God, i love this beauty... Pach up it for me" << endl;
			exit;
		}
		else
		{
			sr.Print();
		}
	}
}