#include <iostream>
#include <string>
using namespace std;

class userHouse {
public:
	string color;
	int year = 1996;
	int carSpaces = 1;
	int windows = 9;
	int doors = 3;
	int houseValue = 200000;

	void getInput(char input) {
		switch (input) {
		case 'c':
			cout << "Choose the house color: ";
			cin >> color;
			cout << "The house is now " << color << endl;
			break;
		case 'y':
			cout << "Choose the house year: ";
			cin >> year;
			cout << "The house is now built in " << year << endl;
			break;
		case 'p':
			cout << "Choose the number of car ports: ";
			cin >> carSpaces;
			cout << "The house has " << carSpaces << " car ports." << endl;
			break;
		case 'w':
			cout << "Choose the number of windows: ";
			cin >> windows;
			cout << "The house now has " << windows << " windows." << endl;
			break;
		case 'd':
			cout << "Choose the number of doors: ";
			cin >> doors;
			cout << "The house now has " << doors << " doors." << endl;
			break;
		case 's':
			printStats();
			break;
		case 'a':
			printActions();
			break;
		case 'v':
			getValue();
			break;
		default:
			cout << " I didn't get that.";
		}
	}

	void printActions() {
		cout << "Choose an action:" << endl << "Set year (y)" << endl << "Set color (c)" << endl << "Set car ports (p)" << 
			endl << "Set windows (w)" << endl << "Set doors (d)" << endl << "Get value (v)" << endl << "Exit program (x)" << 
			endl << "Show house stats (s)" << endl << "Show these actions again (a)" << endl;
	}

	void printStats() {
		cout << "The house is " << color << ", it was built in " << year << ", and it has " << carSpaces << " ports, " << 
			windows << " windows, and " << doors << " doors." << endl;
	}

	void getValue() {
		for (int i = 0; i < windows; i++) {
			houseValue += 10;
		}
		for (int i = 0; i < doors; i++) {
			houseValue += 20;
		}
		for (int i = 0; i < carSpaces; i++) {
			houseValue += 50;
		}
		for (int i = 2018; i > year; i--) {
			houseValue -= 100;
		}
		cout << "The house value is $" << houseValue << endl;
	}
};

int main() {
	userHouse house;
	char userInput;
	bool keepAlive = true;

	house.printStats();
	house.printActions();

	while (keepAlive == true) {
		cout << "Your action: ";
		cin >> userInput;
		if (userInput == 'x') {
			keepAlive = false;
		}
		else {
			house.getInput(userInput);
		}
	}
}
