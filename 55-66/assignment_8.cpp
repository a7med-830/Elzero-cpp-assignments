#include <iostream>
using namespace std;

int plusandmultiply(int numbers[], int numssize) {
    int num1 = 0, num2 = 1;
    for (int i = 0; i < numssize; i++){
        if (numbers[i] % 2) {
            num2 *= numbers[i];
        }
        else {
            num1 += numbers[i];
        }
    }
    
    return num1 + num2;
}

int main() {
    int numbers[] = {10, 20, 3, 30, 5, 7, 40};
    int numssize = size(numbers);
    cout << plusandmultiply(numbers, numssize) << "\n";
    // Even Numbers -> 10 + 20 + 30 + 40 = 100
    // Odd Numbers  -> 3 * 5 * 7 = 105
    // Total = 100 + 105 = 205

    return 0;
}
