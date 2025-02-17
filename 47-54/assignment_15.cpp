#include <iostream>
using namespace std;

int main() {
    int nums[] = {2, 4, 5, 6, 10};
    int last_element = size(nums) - 1;

    for (int i = 0; i <= last_element; i++) {
        cout << nums[i] << " + " << nums[last_element - i] << " = " << nums[i] + nums[last_element - i] << endl;
    }

    return 0;
}
