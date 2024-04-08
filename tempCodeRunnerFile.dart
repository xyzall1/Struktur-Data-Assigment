#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung banyaknya huruf vokal dalam sebuah kalimat
int hitungHurufVokal(string kalimat) {
  // Deklarasi variabel untuk menyimpan jumlah huruf vokal
  int jumlahVokal = 0;

  // Looping melalui setiap karakter dalam kalimat
  for (int i = 0; i < kalimat.length(); i++) {
    // Menghapus spasi di awal dan akhir kalimat
    if (i == 0 && kalimat[i] == ' ') {
      continue;
    } else if (i == kalimat.length() - 1 && kalimat[i] == ' ') {
      break;
    }

    // Menghitung jumlah huruf vokal
    if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' ||
        kalimat[i] == 'e' || kalimat[i] == 'o') {
      jumlahVokal++;
    }
  }

  // Mengembalikan jumlah huruf vokal
  return jumlahVokal;
}

int main() {
  // Meminta pengguna untuk memasukkan kalimat
  string kalimat;
  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);

  // Menghitung jumlah huruf vokal dalam kalimat
  int jumlahHurufVokal = hitungHurufVokal(kalimat);

  // Menampilkan hasil
  cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << jumlahHurufVokal << endl;

  return 0;
}