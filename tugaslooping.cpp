#include <iostream>
using namespace std;

// Global
int angka;
int pilihan;

bool isPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

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
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

void tampilkanMenu() {
    cout << "\n=============================" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "=============================" << endl;
    cout << "Pilihan Anda: ";
    cin >> pilihan;
}

void tampilkanHasilPrima() {
    if (isPrima(angka)) cout << ">> " << angka << " adalah bilangan PRIMA.\n";
    else cout << ">> " << angka << " BUKAN bilangan prima.\n";
}

void tampilkanHasilFibonacci() {
    if (isFibonacci(angka)) cout << ">> " << angka << " adalah bagian FIBONACCI.\n";
    else cout << ">> " << angka << " BUKAN bagian fibonacci.\n";
}

int main() {
    bool running = true;
    while (running) {
        tampilkanMenu();
        switch (pilihan) {
            case 1:
                inputAngka();
                tampilkanHasilPrima();
                break;
            case 2:
                inputAngka();
                tampilkanHasilFibonacci();
                break;
            case 0:
                cout << "Terima kasih telah menggunakan program ini!" << endl;
                running = false;
                break;
            default:
                cout << "Pilihan tidak tersedia. Gunakan 0, 1, atau 2." << endl;
                break;
        }
    }
    return 0;
}