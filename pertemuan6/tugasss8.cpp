#include <iostream>
using namespace std;

int main() {

    int pilihan;

    do {

        cout << "\n===== MENU =====" << endl;
        cout << "1. penjumlahan" << endl;
        cout << "2. pengurangan" << endl;
        cout << "3. perkalian" << endl;
        cout << "4. pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {

            case 1:
                cout << "penjumlahan";
                break;

            case 2:
                cout << "pengurangan";
                break;

            case 3:
                cout << "Perkalian";
                break;

            case 4:
                cout << "Pembagian";
                break;

            case 5:
                cout << "keluar";
                break;

            default:
                cout << "Pilihan tidak tersedia";
        }

    } while (pilihan != 5);

    return 0;
}