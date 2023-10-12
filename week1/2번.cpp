#include <iostream>
#include <string>
using namespace std;

int main() {
	string item;
	int num;
	int amount;

	cout << "Menu Espresso: 4000, Americano: 4500, Cafuccino: 5000" << endl;

	cout << "What item? >> ";
	cin >> item;

	cout << "How many? >>";
	cin >> num;

	if (item == "Espresso") {
		amount = 4000 * num;
	}
	else if (item == "Americano") {
		amount = 4500 * num;
	}
	else if (item == "Cafuccino") {
		amount = 5000 * num;
	}
	else {
		cout << "You have a wrong order" << endl;
	}
	
	cout << "Pay for " << amount << endl;

	return 0;
}
