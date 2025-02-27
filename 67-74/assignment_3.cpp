#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};

    // Write Your Code Here
    int *fir = &numbers[0];
    int *last = &numbers[numbers.size() - 1];

    // Do Not Edit Below
    cout << *fir << "\n";  // 10
    cout << *last << "\n"; // 80

    return 0;
}