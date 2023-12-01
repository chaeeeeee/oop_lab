#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string filename = "test.txt";
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "파일을 열 수 없습니다: " << filename << endl;
        return 1;
    }

    vector<string> words;
    string word;

    while (file >> word) {
        words.push_back(word);
    }

    file.close();

    sort(words.begin(), words.end(), [](string& a, string& b) {
        return a < b;
    });

    ofstream output("dict.txt");

    if (!output.is_open()) {
        cerr << "파일을 생성할 수 없습니다." << std::endl;
        return 1;
    }

    for (auto& sortedWord : words) {
        output << sortedWord << endl;
    }

    output.close();

    return 0;
}
