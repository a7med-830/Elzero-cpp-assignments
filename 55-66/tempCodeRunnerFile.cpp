#include <iostream>
using namespace std;

int plusandmultiply(int numbers[], int numssize) {
    int num1 = 0, num2 = 0;
    for (int i = 0; i < numssize; i++){
        if (numbers[i] % 2) {
            num2 *= numbers[i];
        }
        else {
            num1 += numbers[i];
        }
    }