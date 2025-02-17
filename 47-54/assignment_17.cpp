#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 102; i){
        if (i <= 9){
            cout << "00" << i << endl;
        }
        else if (10 <= i <= 20){
            cout << "0" << i << endl;
        }
        else if (100 <= i <= 102){
            cout << i << endl;
        }
    }
    return 0;
}
