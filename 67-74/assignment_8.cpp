#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    vector<int>::iterator iter = numbers.begin();

    numbers.erase(iter, iter + 2);
    
    cout << *iter << "\n"; // 30
    
    
    numbers.erase(iter, iter + 2);
    
    cout << *iter << "\n"; // 50
    

    numbers.insert(iter, 20);

    cout << *iter << "\n"; // 20

    return 0;
}