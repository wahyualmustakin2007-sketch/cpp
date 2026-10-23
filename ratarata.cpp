#include <iostream>
using namespace std;

int main() {
    int tugas, uts, uas, rata_rata;

    cout << "Masukkan tugas: ";
    cin >> tugas;

    cout << "Masukkan uts: ";
    cin >> uts;

    cout << "Masukkan uas: ";
    cin >> uas;

    rata_rata = tugas + uts + uas / 3;

    cout << "rata_rata = " << rata_rata << endl;

    return 0;
}