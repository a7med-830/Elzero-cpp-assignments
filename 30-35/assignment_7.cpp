#include <iostream>
using namespace std;

int main() {
    int result = 0;
    int num1, num2, num3, num4;
    cout << "Please Type 5 Numbers In A Row\n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 < 20 and num1 % 2 == 0)
        result += num1; 

    if (num2 < 20 and num2 % 2 == 0)
        result += num2;

    if (num3 < 20 and num3 % 2 == 0)
        result += num3; 

    if (num4 < 20 and num4 % 2 == 0)
        result += num4;

    cout << result;
}