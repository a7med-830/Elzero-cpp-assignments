#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;

    switch (day) {
    case 1:
    case 2:
    case 3:
        cout << "Shop Is Open";
        break;

    case 5:
    case 4:
        cout << "Shop Is Closed";
        break;
        
    default:
        cout << "Day Is Not Valid";
    }

    return 0;
}