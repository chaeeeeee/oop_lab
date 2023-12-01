#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_div4(int n) {   // b                       
    return n % 4 == 0;
}

int main() {
    std::vector<int> V = { 1, 7, 4, 9, 4, 8, 12, 10, 20 };  // a

    int count = std::count_if(V.begin(), V.end(), is_div4); // c

    cout << "4의 배수 개수: " << count << endl;

    return 0;
}
