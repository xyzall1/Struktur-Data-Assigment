#include <iostream>
#include <cmath> // untuk log10

// Fungsi untuk menghitung faktorial
unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Fungsi untuk menghitung jumlah digit
int digitCount(int n) {
    if (n == 0) {
        return 1;
    } else {
        return (int)log10(n) + 1;
    }
}

int main() {
    unsigned int num;

    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> num;

    std::cout << "Faktorial dari " << num << " adalah: " << factorial(num) << std::endl;
    std::cout << "Jumlah digit dari " << num << " adalah: " << digitCount(num) << std::endl;

    return 0;
}
