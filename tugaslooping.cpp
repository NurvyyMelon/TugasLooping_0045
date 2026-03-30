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