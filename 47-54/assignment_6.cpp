#include <iostream>
using namespace std;

int main() {
    for (int i = 10; i <= 100000000; i *= i)
        cout << i << endl;
        
        
    int i = 10;
    while (i <= 100000000) {
        cout << i << endl;
        i *= i;
    }
    
    return 0;
}
