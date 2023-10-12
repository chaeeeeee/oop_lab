#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Menu Espresso: 4000, Americano: 4500, Cafuccino: 5000" << endl;

    int goalAmount;
    int totalEarned = 0;
    cout << "Enter goal amount today: ";
    cin >> goalAmount;

    while (totalEarned <= goalAmount) {
        string item;
        int num;
        int amount;

        cout << "What item ? >> ";
        cin >> item;
        cout << "how many ? >> ";
        cin >> num;

        int price = 0;

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
            continue;
        }

        cout << "Pay for " << amount << endl;
        totalEarned += amount;
    }

    if (totalEarned > goalAmount) {
        cout << "\nGreat Job! You earned " << totalEarned << endl;
    }
    else {
        cout << "\nCafe is closing. You earned " << totalEarned << endl;
    }
    return 0;
}
