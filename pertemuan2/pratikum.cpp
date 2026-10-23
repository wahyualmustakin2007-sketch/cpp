#include <iostream>
#include <string>
using namespace std;

int main() {

    string nama, prodi;
    int semester, nim;
    double beratbadan, tinggibadan;

    cout << "Nama    : ";
    getline(cin, nama);

    cout << "NIM       : ";
    getline(cin >> nim);

    cout << "Program Studi  : ";
    getline(cin, prodi);

    cout << "Semester       : ";
    cin >> semester;

     cout << "berat badan          : ";
     cin >> beratbadan;

     cout << "tinggi badan           : ";
     cin >> tinggibadan;

    cout << "\n===== DATA MAHASISWA =====" << endl;
    cout << "Nama          : " << nama << endl;
    cout << "NIM           : " << nim << endl;
    cout << "Program Studi : " << prodi << endl;
    cout << "Semester      : " << semester << endl;
    cout << "berat badan   : " << beratbadan << endl;
    cout << "tinggi badan  : " << tinggibadan << endl;

    return 0;
}