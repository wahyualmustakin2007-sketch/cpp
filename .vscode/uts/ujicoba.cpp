#include <iostream>
using namespace std;

int main() {
    float panjang, lebar, luas, keliling;

    cout << "Masukkan panjang: ";
    cin >> panjang;

    cout << "Masukkan lebar: ";
    cin >> lebar;

    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    cout << "Luas Persegi Panjang = " << luas << endl;
    cout << "Keliling Persegi Panjang = " << keliling << endl;

    return 0;
}