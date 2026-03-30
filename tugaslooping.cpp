#include <iostream>
using namespace std;

int main() {
    return 0;
}
#include <iostream>
using namespace std;

int angka;
int pilihan;

int main() {
    return 0;
}
// ... (code sebelumnya)
bool isPrima(int n);
// ...
bool isPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}
bool isFibonacci(int n);
bool isFibonacci(int n) {
    if (n < 0) return false;
    int a = 0, b = 1;
    if (n == a || n == b) return true;
    int c = a + b;
    while (c <= n) {
        if (c == n) return true;
        a = b; b = c; c = a + b;
    }
    return false;
}
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}
void tampilkanMenu() {
    cout << "\n1. Cek Prima\n2. Cek Fibonacci\n0. Keluar\nPilih: ";
    cin >> pilihan;
}