#include <iostream>
using namespace std;

int main() {
    int harga, jumlah_barang = 0;
    int total = 0;
    double diskon = 0.0, total_bayar = 0.0;

    cout << "Belanja Minimarket\n";

    while (true) {
        cout << "Masukkan harga barang (0 untuk selesai):\n";
        cout << "Harga: ";
        cin >> harga;

        if (harga == 0) {
            break;
        }

        jumlah_barang++;
        total += harga;
    }

    cout << "\nJumlah barang: " << jumlah_barang << endl;
    cout << "Total sebelum diskon: " << total << endl;

    if (total >= 100000) {
        diskon = total * 0.10;
    }

    total_bayar = total - diskon;

    cout << "Diskon: " << diskon << endl;
    cout << "Total bayar: " << total_bayar << endl;

    return 0;
}
