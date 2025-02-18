#include <iostream>
#include <cmath>
using namespace std;

void thepower1(int base, int exponent) {
    long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    cout << result << endl;
}

void thepower2(int base, int exponent) {
    cout << pow(base, exponent) << endl;
}

int main() {
    thepower1(2, 5);
    thepower2(2, 5);

    return 0;
}
