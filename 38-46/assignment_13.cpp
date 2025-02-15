#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";

    cout << fName << mName << lName << endl;
    cout << fName + mName + lName << endl;
    cout << fName.append(mName + lName) << endl;

    return 0;
}
