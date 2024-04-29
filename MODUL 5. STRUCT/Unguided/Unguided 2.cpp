#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku;
    string pengarang;
    string penerbit;
    int tebalHalaman;
    int hargaBuku;
};

int main() {
    // Mendeklarasikan variabel favorit dengan tipe buku dan kapasitas 5 elemen
    buku favorit[5];

    // Mengisi data ke dalam variabel favorit
    favorit[0].judulBuku = "The Alpha Girl's Guide";
    favorit[0].pengarang = "Henry Manampiring";
    favorit[0].penerbit = "Gagas Media";
    favorit[0].tebalHalaman = 253;
    favorit[0].hargaBuku = 79000;

    favorit[1].judulBuku = "10 Cerita Nabi Palsu";
    favorit[1].pengarang = "Aurel Dewanti";
    favorit[1].penerbit = "Gajah Duduk";
    favorit[1].tebalHalaman = 580;
    favorit[1].hargaBuku = 76000;

    // Menampilkan informasi buku favorit
    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit[0].judulBuku << endl;
    cout << "\tPengarang : " << favorit[0].pengarang << endl;
    cout << "\tPenerbit : " << favorit[0].penerbit << endl;
    cout << "\tTebal Halaman: " << favorit[0].tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit[0].hargaBuku << endl;

    cout << endl;

    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit[1].judulBuku << endl;
    cout << "\tPengarang : " << favorit[1].pengarang << endl;
    cout << "\tPenerbit : " << favorit[1].penerbit << endl;
    cout << "\tTebal Halaman: " << favorit[1].tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit[1].hargaBuku << endl;

    return 0;
}