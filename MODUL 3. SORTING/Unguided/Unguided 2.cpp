#include <iostream>
#include <string>

int main() {
    // Deklarasi nama-nama warga 
    std::string nama[10] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    // Menggunakan Metode Algoritma Bubble Sort
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            // Membandingkan dua nama yang berurutan
            if (nama[j] > nama[j + 1]) {
                // Jika nama yang lebih besar, tukar posisi
                std::string temp = nama[j];
                nama[j] = nama[j + 1];
                nama[j + 1] = temp;
            }
        }
    }

    // Menambahkan keterangan pada kode yang dihasilkan
    std::cout << "Daftar Nama Warga RT yang Urut Berdasarkan Abjad" << std::endl;
    std::cout << "================================================" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << i + 1 << ". " << nama[i] << std::endl;
    }

    return 0;
}