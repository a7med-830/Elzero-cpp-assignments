#include <iostream>
using namespace std;

int main() {
    // int vals[]{100, 200, 250, 400, 200};
    // int vals[]{100, 200, 500, 400, 200};
    int vals[]{100, 200, 600, 400, 200};
    
    int middel = (sizeof(vals) / sizeof(vals[0]) / 2 );
    int last = (sizeof(vals) / sizeof(vals[0])) - 1;
    int Penultimate = (sizeof(vals) / sizeof(vals[0])) - 2;

    if (vals[0] + vals[last] > vals[middel]) {
        cout << "First Number + Last Number Is Larger Than Middle Number\n";
        cout << vals[0] << " + " << vals[last] << " = " << vals[0] + vals[last] << endl;
        cout << vals[0] + vals[last] << " > " << vals[middel] << endl;
    }
    else if (vals[1] + vals[Penultimate] > vals[middel]) {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number\n";
        cout << vals[1] << " + " << vals[Penultimate] << " = " << vals[1] + vals[Penultimate] << endl;
        cout << vals[1] + vals[Penultimate] << " > " << vals[middel] << endl;
    }
    else {
        cout << "Middle Number Is The Largest\n" << vals[middel];
    }
    

    return 0;
}
