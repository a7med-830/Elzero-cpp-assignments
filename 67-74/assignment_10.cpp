#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(100, 1000);
    cout << numbers.at(0) << "\n";  // 1000
    cout << numbers.at(99) << "\n"; // 1000
    return 0;
}