#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {5, 4, 3, 2, 1};

    // Method One
    // sort(nums.begin(), nums.end());

    // Method Two
    // reverse(nums.begin(), nums.end());

    // Method Three -> Use Swap + Loop For Challenge
    for (int i = 0; i < nums.size() / 2; ++i) {
        swap(nums[i], nums[nums.size() - 1 - i]);
    }

    for (int i : nums) {
        cout << i << "\n";
    }

    return 0;
}
