#include <iostream>
#include <cmath>
using namespace std;

int minpositive(int nums[], int numssize) {
    for (int i = 0; i < numssize; i++) {
        if (nums[i] <= 0) {
            continue;
        }

        if (nums[i] <= abs(nums[0]))
            nums[0] = nums[i];
    
    }

    return nums[0];
}

int main() {
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0}; // 5
    int numssize = size(numbers);
    cout << minpositive(numbers, numssize) << "\n";

    return 0;
}
