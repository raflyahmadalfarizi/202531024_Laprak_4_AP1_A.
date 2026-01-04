#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;

    cout << "Masukkan jumlah hari: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int uangSaku;
        cout << "Uang saku hari ke-" << i << ": ";
        cin >> uangSaku;
        total += uangSaku;
    }

    cout << "\nTotal: " << total << endl;

    return 0;
}
