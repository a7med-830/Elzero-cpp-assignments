#include <iostream>
using namespace std;

int main() {
    // int vals[] = {100, 200, 600, 200, 100};
    // int vals[] = {100, 200, 200, 100};
    int vals[] = {100, 300, 600, 200, 100};

    int length = sizeof(vals) / sizeof(vals[0]);

    if (vals[0] == vals[length - 1] && vals[1] == vals[length - 2]) {
        cout << "Array Is Palindrome\n";
    }
    else {
        cout << "Array Is Not Palindrome\n";
    }
    
    return 0;
}
