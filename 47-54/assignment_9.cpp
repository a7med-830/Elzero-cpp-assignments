#include <iostream>
using namespace std;

int main() {
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

    for (int i = 1; i <= 2; i++)
        cout << friends[i] << endl;
        
    int i = 1;
    while (i <= 2) {
        cout << friends[i] << endl;
        i++;
    }
    
    
    return 0;
}
