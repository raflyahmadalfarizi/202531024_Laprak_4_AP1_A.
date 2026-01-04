#include <iostream>
using namespace std;

int main() {
    const int kode_rahasia = 7;
    int tebakan;
    int max_tebakan = 3;
    int percobaan = 1;

    while (percobaan <= max_tebakan) {
        cout << "Percobaan " << percobaan << "/" << max_tebakan << " - Tebak: ";
        cin >> tebakan;

        if (tebakan == kode_rahasia) {
            cout << "Benar!" << endl;
            break;
        } else {
            cout << "Salah!" << endl;
        }
        percobaan++;
    }

    if (percobaan > max_tebakan) {
        cout << "Kalah! Angka = " << kode_rahasia << endl;
    }

    return 0;
}
