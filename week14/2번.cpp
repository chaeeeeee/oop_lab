#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string inputFileName = "test.txt";
    string outputFileName = "lined.txt";

    ifstream inputFile(inputFileName);


    if (!inputFile.is_open()) {
        cerr << "입력 파일을 열 수 없습니다: " << inputFileName << endl;
        return 1; 
    }

    ofstream outputFile(outputFileName);

    if (!outputFile.is_open()) {
        cerr << "출력 파일을 열 수 없습니다: " << outputFileName << endl;
        return 1; 
    }

    int lineNumber = 1;

    string line;
    while (getline(inputFile, line)) {
        outputFile << lineNumber << ": " << line << endl;
        lineNumber++;
    }

    inputFile.close();
    outputFile.close();

    cout << "프로그램이 정상적으로 실행되었습니다." << endl;

    return 0; 
}
