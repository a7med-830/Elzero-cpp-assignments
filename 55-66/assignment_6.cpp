#include <iostream>
#include <string>
using namespace std;

string swapping(string text) {
    for (int i = 0; i < size(text); i++) {
        if (text[i] == 'h' || text[i] == 'H') {
            
        }
        else if (islower(text[i])) {
            text[i] = toupper(text[i]);
        }
        else if (isupper(text[i])) {
            text[i] = tolower(text[i]);
        }
    }

    return text;
}

int main() {
    cout << swapping("hero Of THe PROgramming")
         << "\n"; // hERO oF tHE proGRAMMING

    return 0;
}
