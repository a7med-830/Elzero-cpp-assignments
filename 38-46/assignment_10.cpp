#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // Method 1
    cout << "First : " << nums[0] <<endl;
    cout << "last : " << nums[5] <<endl;
    
    // Method 2
    cout << "First : " << nums.front() <<endl;
    cout << "last : " << nums.back() <<endl;
    
    // Method 3
    cout << "First : " << *(nums.begin()) <<endl;
    cout << "last : " << *(nums.end() - 1) <<endl;


    return 0;
}
