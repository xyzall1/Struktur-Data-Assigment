#include <iostream>
#include <string>
#include <algorithm>

void binarySearch(const std::string& kalimat, char huruf) {
    // Mengurutkan kalimat
    std::string sortedKalimat = kalimat;
    std::sort(sortedKalimat.begin(), sortedKalimat.end());

    // Inisialisasi indeks awal dan akhir
    int awal = 0;
    int akhir = sortedKalimat.length() - 1;
    int tengah;

    // Iterasi binary search
    while (awal <= akhir) {
        tengah = (awal + akhir) / 2;

        // Jika huruf ditemukan
        if (sortedKalimat[tengah] == huruf) {
            std::cout << "Huruf '" << huruf << "' ditemukan pada indeks " << tengah << std::endl;
            return;
        }
        // Jika huruf pada tengah kurang dari huruf yang dicari, maka cari di bagian kanan
        else if (sortedKalimat[tengah] < huruf) {
            awal = tengah + 1;
        }
        // Jika huruf pada tengah lebih besar dari huruf yang dicari, maka cari di bagian kiri
        else {
            akhir = tengah - 1;
        }
    }

    // Jika huruf tidak ditemukan
    std::cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << std::endl;
}

int main() {
    std::string kalimat;
    char huruf;

    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    std::cout << "Masukkan huruf yang ingin dicari: ";
    std::cin >> huruf;

    binarySearch(kalimat, huruf);

    return 0;
}
