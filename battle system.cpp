#include<iostream>
using namespace std;

void battlesim();

int playerhealth = 120;

int main() {
	srand(time(NULL));
	int room = 1;
	char input;
	while (playerhealth > 0) { //omg game loop!
		switch (room) {
		case 1:
			cout << "you're in room 1, you can go (s)outh" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			break;
		case 2:
			cout << "you're in room 2, you can go (S)outh or (n)orth" << endl;
			cin >> input;
			if (input == 'n')
				room = 3;
			else if (input == 'n')
				room = 1;
			break;
		case 3:
			battlesim();
			cout << "you're in room 3, you can go (n)orth" << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			break;

		}


	}// end of game loop 

}

void battlesim() {
	int MonsterHealth = 20; 
	int damage;
	char dummy;
	cout << endl << endl << "-------------------MONSTER BATTLE BEGINS-------------------------" << endl;
	cout << "an ogre attacks!" << endl;
	while (playerhealth > 0 && MonsterHealth > 0) {


		damage = rand() % 11;
		cout << "the monster bites you for "<<damage<<" dmg!" << endl;
		playerhealth -= damage;
		cout << "press any key to continue..."<< endl;
		cin >> dummy;
		
		damage = rand() % 5 + 5;
		cout << "you hit the monster for  " << damage << " dmg!" << endl;
			MonsterHealth -= damage;
			cout << "press any key to continue..." << endl;
			cin >> dummy;

			if (playerhealth > 0)
				cout << "you health is now: " << playerhealth << endl;
			else
				cout << "you died. womp womp" << endl;
			if (MonsterHealth > 0)
			cout << "the monster's health is now: " << MonsterHealth << endl;
			else 
				cout << "you destroyed the monster, good job!" << endl;

			cout << "press any key to continue..." << endl;
			cin >> dummy;

			if (playerhealth > 0)
				cout << "you won!" << endl;
			else
				cout << "you lost!" << endl;
			
			cout << "--------------END OF BATTLE---------------" << endl << endl;
	}
}
