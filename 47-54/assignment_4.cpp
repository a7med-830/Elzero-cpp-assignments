#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 18; i+=2) {
        if (i == 10 || i == 12)
            continue;
        else 
        cout << i << endl;
        
    }
    
    
    int i = 0;
    while (i <= 18) {
        if (i == 10 || i == 12) {}
        else 
            cout << i << endl;

        i += 2;
    }
    
    return 0;
}
