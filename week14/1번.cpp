#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "test.txt";

    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "파일을 열 수 없습니다: " << filename << endl;
        return 1; 
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0; 
}
