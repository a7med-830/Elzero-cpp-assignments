#include <iostream>
using namespace std;

int pricing(int total_phones, int used_phones, int new_price, int vat) {
    int used_price = new_price - 200;
    int new_phones = total_phones - used_phones;

    int total = ((used_phones * used_price) + (new_phones * new_price));

    return total - (total * (vat / 100.0));
}

int main() {
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400

    return 0;
}
