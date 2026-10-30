#include <iostream>

using namespace std;

int main() {
    int angka;

    cout << "masukan angka:";
    cin >> angka;

    for (int i = 1; i <= 20; i++) {
        cout << angka << " x " << i << " = " << (angka * i) << endl;
    }

    return 0;
}
