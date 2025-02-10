#include <iostream>
using namespace std;

int main() {
    int age = 20;
    int points = 650;

    if (age > 18) {
        cout << "Yes Age Is Ok" << endl;
    } else {
        cout << "No Age Is Not Ok" << endl;
    }

    if (points > 500) {
        cout << "Yes Points Is Ok" << endl;
    } else {
        cout << "No Points Is Not Ok" << endl;
    }

    return 0;
}