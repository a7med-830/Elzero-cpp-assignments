#include <iostream>
using namespace std;

int beforeresult(int main, int last) {
    int res = 0;
    for (int i = main; i >= main - last; i--) {
        res += i;
    }
    return res;
}

int main() {
    cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
    // Main Number [10]
    // Numbers Before [9 + 8 + 7 + 6 + 5] <- 5 Numbers
    cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
                                         // Main Number [1015
    // Numbers Before [14 + 13 + 12] <- 3 Numbers

    return 0;
}
