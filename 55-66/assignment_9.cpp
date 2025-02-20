#include <iostream>
using namespace std;

int sumall(int numbers[], int numssize, int ignored) {
    int res = 0;
    for (int i = 0; i < numssize; i++) {
        if (numbers[i] == ignored)
            continue;

        res += numbers[i];
    }
    
    return res;
}

int main() {
    int numbers[] = {13, 20, 3,  30,
                     5,  7,  40, 13}; // 20 + 3 + 30 + 5 + 7 + 40 = 105
    int numssize = size(numbers);
    int noneed = 13;
    cout << sumall(numbers, numssize, noneed) << "\n";

    return 0;
}
