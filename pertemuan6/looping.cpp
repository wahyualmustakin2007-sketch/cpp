// #include <iostream>
// using namespace std;

// int main() {


//     for (int i = 1; i <= 5; i++) {

//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// for (int i = 1; i <= 3; i++) {

//     for (int j = 1; j <= 3; j++) {
//         cout << "* ";
// //     }

//     cout << endl;
// }


// #include <iostream>
// using namespace std;

// int main() {

//     int jumlah;
//     double nilai;
//     double total = 0;

//     cout << "Jumlah mahasiswa: ";
//     cin >> jumlah;

//     for (int i = 1; i <= jumlah; i++) {

//         cout << "Nilai mahasiswa ke-" << i << ": ";
//         cin >> nilai;

//         total += nilai;
//     }

//     double rataRata = total / jumlah;

//     cout << "Total nilai   : " << total << endl;
//     cout << "Rata-rata     : " << rataRata << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {

    int nilai;

    cout << "Masukkan nilai 0-100: ";
    cin >> nilai;

    while (nilai < 0 || nilai > 100) {

        cout << "Nilai tidak valid!" << endl;
        cout << "Masukkan kembali: ";
        cin >> nilai;
    }

    cout << "Nilai diterima: " << nilai;

    return 0;
}