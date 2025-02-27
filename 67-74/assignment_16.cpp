#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> n1 = {1, 2, 3};
    vector<int> n2 = {4, 5, 6};


    vector<int> allvectors;
    allvectors.resize(n1.size() + n2.size());
    merge(n1.begin(), n1.end(), n2.begin(), n2.end(), allvectors.begin());

    for (int i : allvectors) {
        cout << i << "\n";
    }
    return 0;
}