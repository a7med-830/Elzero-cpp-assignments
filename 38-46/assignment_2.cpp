#include <iostream>
using namespace std;

int main() {
    int check = 25;
    int nums[]{20, 25, 30, 70, 100};

    int Penultimate = (sizeof(nums) / sizeof(nums[0])) - 2;

    if (nums[0] > check) {
        cout << "{" << nums[0] << "} + {" << nums[Penultimate] << "} = " << nums[0] + nums[Penultimate] << endl;
    } 
    else if (nums[1] > check) {
        cout << "{" << nums[1] << "} + {" << nums[Penultimate] << "} = " << nums[1] + nums[Penultimate] << endl;
    }
    else if (nums[2] > check) {
        cout << "{" << nums[2] << "} + {" << nums[Penultimate] << "} = " << nums[2] + nums[Penultimate] << endl;
    }

    return 0;
}
