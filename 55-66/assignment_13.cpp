#include <iostream>
using namespace std;

string greeting(string name, string gender = "None") {
    return string("Hello ") + ((gender == "None") ? "" : ((gender == "Male") ? "Mr " : "Miss ")) + name;
}

int main() {
    cout << greeting("Osama", "Male") << "\n";  // Hello Mr Osama
    cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
    cout << greeting("Sameh") << "\n";          // Hello Sameh

    return 0;
}
