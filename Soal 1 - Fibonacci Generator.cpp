#include <iostream>
using namespace std;

void fibonacci_n(int n) {
    cout << "\nHasil (" << n << " suku):\n";
    // Deret mulai dari 0 1 1 2 3 ...
    int a = 0, b = 1, c;
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";
    for (int i = 3; i <= n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

void fibonacci_max(int m) {
    cout << "\nHasil (<= " << m << "):\n";
    int a = 0, b = 1, c;

    if (a <= m) cout << a << " ";
    if (b <= m) cout << b << " ";

    while (true) {
        c = a + b;
        if (c > m) break;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int pilihan;
    while (true) {
        cout << "\n=== FIBONACCI GENERATOR ===" << endl;
        cout << "1) n suku" << endl;
        cout << "2) sampai <= m" << endl;
        cout << "3) exit" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            int n;
            cout << "Masukkan n: ";
            cin >> n;
            if (n <= 0) {
                cout << "Input tidak valid!" << endl;
            } else {
                fibonacci_n(n);
            }
        } 
        else if (pilihan == 2) {
            int m;
            cout << "Masukkan m: ";
            cin >> m;
            if (m < 0) {
                cout << "Input tidak valid!" << endl;
            } else {
                fibonacci_max(m);
            }
        } 
        else if (pilihan == 3) {
            break;
        } 
        else {
            cout << "Pilihan tidak valid!" << endl;
        }
    }
    return 0;
}
