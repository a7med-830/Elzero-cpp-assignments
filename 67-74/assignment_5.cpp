#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};
    vector<int>::iterator it = numbers.begin();

    // Write Method One
    // advance(it, (distance(numbers.begin(), numbers.end()) * numbers.front()) /
    //                 (numbers.front() +
    //                  numbers.front())); // 8 * 10 / (10 + 10) = 80/20 = 4

    // Write Method Two
    // it = next(numbers.begin(), (distance(numbers.begin(), numbers.end()) *
    // numbers.front()) / (numbers.front() + numbers.front()));

    // Write Method Three
    auto number = numbers.begin() + (distance(numbers.begin(), numbers.end()) *
    numbers.front()) / (numbers.front() + numbers.front()); it =
    find(numbers.begin(), numbers.end(), *number);

    cout << *it << "\n"; // 50
    return 0;
}
