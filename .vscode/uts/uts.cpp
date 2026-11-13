#include <iostream>
#include <string>
using namespace std;

int main() {

    int jumlah;
    int nilai;
    int total = 0;
    int lulus = 0;
    int tidakLulus = 0;

    double rataRata;

    string nama;
    string namaTertinggi;
    string namaTerendah;

    int nilaiTertinggi = -1;
    int nilaiTerendah = 101;

    cout << "Jumlah mahasiswa : ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah mahasiswa tidak valid!" << endl;
        return 0;
    }

    for (int i = 1; i <= jumlah; i++) {

        cout << "\nNama Mahasiswa ke-" << i << " : ";
        cin >> ws;
        getline(cin, nama);

        cout << "Nilai mahasiswa ke-" << i << " : ";
        cin >> nilai;

        total += nilai;

        // Menentukan kelulusan
        if (nilai >= 60) {
            lulus++;
        } else {
            tidakLulus++;
        }

        // Menentukan nilai tertinggi
        if (nilai > nilaiTertinggi) {
            nilaiTertinggi = nilai;
            namaTertinggi = nama;
        }

        // Menentukan nilai terendah
        if (nilai < nilaiTerendah) {
            nilaiTerendah = nilai;
            namaTerendah = nama;
        }
    }

    rataRata = (double) total / jumlah;

    cout << "\n===== HASIL DATA MAHASISWA =====" << endl;

    cout << "Total nilai              : " << total << endl;
    cout << "Rata-rata                : " << rataRata << endl;
    cout << "Jumlah lulus             : " << lulus << endl;
    cout << "Jumlah tidak lulus       : " << tidakLulus << endl;

    cout << "Mahasiswa Nilai Tertinggi: "
         << namaTertinggi << " (" << nilaiTertinggi << ")" << endl;

    cout << "Mahasiswa Nilai Terendah : "
         << namaTerendah << " (" << nilaiTerendah << ")" << endl;

    return 0;
}