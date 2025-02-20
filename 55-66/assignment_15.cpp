#include <iostream>
using namespace std;

double avg(int money[], int monsize) {
    double res = 0;
    for (int i = 0; i < monsize; i++) {
        res += money[i];
    }
    return res / monsize;
}

int main() {
    int money[] = {10, 20, 15, 25, 30, 35};
    int monsize = size(money);
    cout << avg(money, monsize) << "\n"; // 22.5

    return 0;
}
