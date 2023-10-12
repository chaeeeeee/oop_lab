#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string name, int age) : name(name), age(age) {}
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};

bool compare(Person& p1, Person& p2) {
    return p1.getAge() < p2.getAge();
}

int main() {
    vector<Person> v;
    char response;

    do {
        string name;
        int age;

        cout << "Enter a name: ";
        cin >> name;
        cout << "Enter an age: ";
        cin >> age;

        v.push_back(Person(name, age));

        cout << "Continue? (y/n): ";
        cin >> response;
    } while (response == 'y' || response == 'Y');

    sort(v.begin(), v.end(), compare);

    for (Person& person : v) {
        cout << "Name: " << person.getName() << ", Age: " << person.getAge() << endl;
    }

    return 0;
}
