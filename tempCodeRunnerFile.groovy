#include <iostream>
#include <string>

using namespace std;

int hitungHurufVokal(string kalimat) {
  int jumlah = 0;
  for (int i = 0; i < kalimat.length(); i++) {
    if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' ||
        kalimat[i] == 'e' || kalimat[i] == 'o' ||
        kalimat[i] == 'A' || kalimat[i] == 'I' || kalimat[i] == 'U' ||
        kalimat[i] == 'E' || kalimat[i] == 'O') {
      jumlah++;
    }
  }
  return jumlah;
}

int main() {
  string kalimat = "Ini adalah kalimat untuk diuji";
  int jumlahHurufVokal = hitungHurufVokal(kalimat);
  cout << "Jumlah huruf vokal pada kalimat tersebut adalah: " << jumlahHurufVokal << endl;
  return 0;
}