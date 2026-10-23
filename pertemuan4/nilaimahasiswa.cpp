#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string nama, kelulusan;
    float tugas, uts, uas, kehadiran, nilaiAkhir;
    int jumlahHadir;
    char grade;

    cout << "=== PROGRAM NILAI MAHASISWA ===" << endl;

    cout << "Nama Mahasiswa : ";
    getline(cin, nama);

    cout << "Nilai Tugas    : ";
    cin >> tugas;

    cout << "Nilai UTS      : ";
    cin >> uts;

    cout << "Nilai UAS      : ";
    cin >> uas;

    cout << "Jumlah Hadir (0-10) : ";
    cin >> jumlahHadir;

    // Menghitung persentase kehadiran
    kehadiran = jumlahHadir * 10.0;

    // Menghitung nilai akhir
    nilaiAkhir = (tugas * 0.25) +
                 (uts * 0.30) +
                 (uas * 0.35) +
                 (kehadiran * 0.10);

    // Menentukan grade
    if (nilaiAkhir >= 85) {
        grade = 'A';
    } else if (nilaiAkhir >= 75) {
        grade = 'B';
    } else if (nilaiAkhir >= 65) {
        grade = 'C';
    } else if (nilaiAkhir >= 60) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Menentukan kelulusan
    if (nilaiAkhir >= 60 & kehadiran >= 75) {
        kelulusan = "LULUS";
    } else {
        kelulusan = "TIDAK LULUS";
    }

    // Menampilkan hasil
    cout << fixed << setprecision(2);

    cout << "\n=== HASIL NILAI MAHASISWA ===" << endl;
    cout << "Nama Mahasiswa : " << nama << endl;
    cout << "Nilai Tugas    : " << tugas << endl;
    cout << "Nilai UTS      : " << uts << endl;
    cout << "Nilai UAS      : " << uas << endl;
    cout << "Jumlah Hadir   : " << jumlahHadir
         << " dari 10 pertemuan" << endl;
    cout << "Kehadiran      : " << kehadiran << "%" << endl;
    cout << "Nilai Akhir    : " << nilaiAkhir << endl;
    cout << "Grade          : " << grade << endl;
    cout << "Kelulusan      : " << kelulusan << endl;

    return 0;
}
