#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Number One : ";
    cin >> num1;

    cout << "Number Two : ";
    cin >> num2;

    if (num1 > num2) {
        /*
        if num1 = 5, num2 = 10
        num1 = 5 + 10       -> num1 = 15 
        num2 = 15 - 10      -> num2 = 5
        num1 = 15 - 5       -> num1 = 10
        */
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    for (int i = num1 + 1; i < num2 ; i++){
        if (i % 2)
            cout << i << endl;
    }



    return 0;
}
