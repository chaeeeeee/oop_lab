#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::vector<int> V = { 1, 7, 4, 9, 4, 8, 12, 10, 20 };  
    auto is_div4 = [](int n) -> bool { return n % 4 == 0; };    // e, g (람다식)

    int count = std::count_if(V.begin(), V.end(), is_div4);     // f

    cout << "4의 배수 개수: " << count << endl;

    return 0;
}
