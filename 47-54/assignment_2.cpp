#include <iostream>
using namespace std;

int main() {
    int index = 2;
    for (;;) { 
        if (index <= 8) {
            cout << index << "\n"; // From 2 To 10
            index++;
        }
        else {
            break;
        }
    }

    return 0;
}
