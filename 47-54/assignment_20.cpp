#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    int array_size = size(names);

    for (int i = 0; i < array_size; i++){
		if (size(names[i]) == 5)
			cout << names[i] << '\n';
	}
    
    return 0;
}
