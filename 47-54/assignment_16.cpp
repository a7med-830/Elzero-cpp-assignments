#include <iostream>
using namespace std;

int main() {
    int index = 10;
    int jump = 2;

    for (;;) {
        if (index >= 4){
            cout << index << endl;
            index -= jump;
        }
    }


    return 0;
}
