#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 126; i = i*2+2) {
        cout << i << endl;
    }
    
    int i =2;
    while (i <= 126) {
        cout << i << endl;
        i = i * 2 + 2; 
    }
    
    return 0;
}
