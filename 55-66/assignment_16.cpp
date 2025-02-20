#include <iostream>
using namespace std;

int books(int small, int medium, int large, int shelf) {
    /*
        1 shelf -> 20 spaces
        1 small book -> 2 spaces
        1 medium book -> 4 spaces
        1 large book -> 6 spaces
    */

    int spaces = shelf * 20;
    int books_spaces = (small * 2) + (medium * 4) + (large * 6);

    if (books_spaces > spaces) {
        return 0;
    }
    else {
        return spaces - books_spaces;
    }
    
}

int main() {
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0

    return 0;
}
