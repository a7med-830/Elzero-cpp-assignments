#include <iostream>
using namespace std;

int main() {
    int i = 100;
	while (i <= 1000){
		std::cout << i << '\n';
		i += 100;
		std::cout << i << '\n';
	}

    return 0;
}
