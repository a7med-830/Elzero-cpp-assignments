#include <iostream>
using namespace std;

int firstnegative(int nums[], int numssize) {
    int min = nums[0];
    for (int i = 0; i < numssize; i++) {
        if (nums[i] >= 0) {
            continue;
        }

        if (nums[i] >= min)
            min = nums[i];
    }

    return min;
}

int main() {
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0, -5, -10}; // -5
    int numssize = size(numbers);
    cout << firstnegative(numbers, numssize) << "\n";

    return 0;
}
