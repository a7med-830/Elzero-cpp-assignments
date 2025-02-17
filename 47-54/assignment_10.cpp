#include <iostream>
using namespace std;

int main() {
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

    for (int i = 0; i < size(friends); i++) {
        if (friends[i][0] == 'A')
            cout << friends[i] << endl;
    }

    int i = 0;
    while (i < size(friends)) {
        if (friends[i][0] == 'A')
            cout << friends[i] << endl;
        i++;
    }
    
    
    return 0;
}
