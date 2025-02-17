#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }

    cout << endl;
    
    int x = 0;
    while (x <= 10) {
        cout << x++ << endl;
    }
    
    cout << endl;

    int y = 0;
    do {
        cout << y++ << endl;
    } while (y <= 10);
    

    return 0;
}
