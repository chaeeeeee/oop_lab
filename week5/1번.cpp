#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<string> vec;

	vec.push_back("MILK");
	vec.push_back("BUTTER");
	vec.push_back("BREAD");
	vec.push_back("SALAD");
	vec.push_back("CUCUMBER");

	cout << "벡터 내용: ";
	for (auto& str : vec) {
		cout << str << " ";
	}
	cout << endl;

	vector<string> ::iterator p;
	cout << "반복자 내용: ";
	for (p = vec.begin(); p != vec.end(); ++p) {
		cout << *p << " ";
	}
	cout << endl;

	sort(vec.begin(), vec.end());
	cout << "정렬 내용: ";
	for (auto& str : vec) {
		cout << str << " ";
	}
	cout << endl;
	return 0;
}
