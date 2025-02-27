#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> firstnumbers = {10, 30, 50, 70};
    vector<int> secondnumbers = {20, 40, 60, 80};

    vector<int> allvectors;
    allvectors.resize(firstnumbers.size() + secondnumbers.size());
    merge(firstnumbers.begin(), firstnumbers.end(), secondnumbers.begin(),
          secondnumbers.end(), allvectors.begin());

    for (int i : allvectors) {
        cout << i << "\n";
    }
    return 0;
}