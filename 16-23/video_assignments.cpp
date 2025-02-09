#include <iostream>
using namespace std;

int main() {
    double n;
    cout << "Enter KB number : ";
    cin >> n;

    cout << "Number of KB is : " << n << endl;
    cout << "Number of Bytes is : " << n / 1024 << endl;
    cout << "Number of Bits is : " << (n / 1024) / 1024 << endl;
}