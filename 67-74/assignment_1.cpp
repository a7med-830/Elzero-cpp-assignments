#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vect = {100, 200, 300, 400};

    for ( int i : vect ) {
        cout << i << endl;
    }

    cout << "First Element Is :  " << vect.front() << endl;
    cout << "Last Element Is : " << vect.back() << endl;

    return 0;
}
