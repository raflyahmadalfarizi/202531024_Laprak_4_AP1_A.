#include <iostream>
#include <iomanip>  // Untuk mengatur presisi output

using namespace std;

int main() {
    int n; // Menyimpan jumlah mahasiswa
    int hadir = 0; // Menghitung jumlah mahasiswa yang hadir
    int tidakHadir = 0; // Menghitung jumlah mahasiswa yang tidak hadir
    int kehadiran; // Menyimpan input kehadiran setiap mahasiswa

    // Meminta input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    // Membaca data kehadiran n mahasiswa
    for (int i = 1; i <= n; i++) {
        cout << "Mahasiswa " << i << " (1=hadir, 0=tidak): ";
        cin >> kehadiran;

        // Menghitung jumlah hadir dan tidak hadir
        if (kehadiran == 1) {
            hadir++;
        } else if (kehadiran == 0) {
            tidakHadir++;
        } else {
            // Jika input tidak valid, anggap sebagai tidak hadir
            cout << "Input tidak valid, dianggap tidak hadir" << endl;
            tidakHadir++;
        }
    }

    // Menampilkan hasil
    cout << endl;
    cout << "Hadir: " << hadir << endl;
    cout << "Tidak hadir: " << tidakHadir << endl;
        
    // Menghitung persentase kehadiran dengan presisi 2 desimal
    double persentase = (static_cast<double>(hadir) / n) * 100;
    cout << fixed << setprecision(2);
    cout << "Persentase hadir: " << persentase << "%" << endl;

    return 0;
}
