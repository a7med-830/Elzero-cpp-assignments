#include <iostream>
using namespace std;

int main() {
    for (int i = 30; i >= 3; i-=3){
        cout << i << endl;
    } 
    
    cout << endl;

    for (int i = 30; i >= 3; i-=3){
        if (i % 2)
            cout << i << endl;
    } 

    
    return 0;
}
