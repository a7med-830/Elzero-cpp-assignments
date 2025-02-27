#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int add(vector<int> v) {
    int sum;
    for ( int i : v )
        sum += i;

    return sum;
}

int main() {
    vector<int> numbersone = {10, 20, 30};
    vector<int> numberstwo = {5, 15, 25};

    cout << add(numbersone) << "\n"; // 60
    cout << add(numberstwo) << "\n"; // 45

    return 0;
}