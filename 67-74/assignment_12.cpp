#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40};

    // Method One
    // numbers.erase(numbers.end() -1);

    // Method Two
    // numbers.pop_back();

    // Method Three
    numbers.resize(numbers.size() -1);

    // Do Not Edit
    for (int i : numbers) {
        cout << i << "\n";
    }
    return 0;
}
