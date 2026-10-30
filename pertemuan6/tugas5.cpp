#include <iostream>
using namespace std;

int main() {
    int bilangan, faktorial=1;
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    int i=1;
    while(i <= bilangan) {
        faktorial *= i;
        i += 1;
    }
    cout << bilangan << "! = " << faktorial;
     return 0;
}