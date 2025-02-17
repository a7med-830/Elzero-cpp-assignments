#include <iostream>
using namespace std;

int main() {
    string friends[] = {"Ahmed", "Osama", "Ameer"};

    for (int i = 0; i < size(friends); i++) {
        cout << string(size(friends[i]) + 4, '=') << endl;
        cout << "= " << friends[i] << " =" << endl;
        cout << string(size(friends[i]) * 3 + 3, '=') << endl;
        
        cout << "== ";
        for (int n = 0; n < size(friends[i]); n++) {
            if (n < size(friends[i])-1)
            cout << friends[i][n] << ", ";
            else
            cout << friends[i][n];
            
        }
        cout << " =" << endl;
        cout << string(size(friends[i]) * 3 + 3, '=') << endl;
        cout << endl;
    }
    return 0;
}
