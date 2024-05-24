#include<iostream>
using namespace std;

// Fungsi untuk melakukan iterasi
void iterasi(int n, long long &hasil) {
  hasil *= n;
  if(n == 1)
    return;
  iterasi(n-1, hasil);
}

// Fungsi rekursif untuk menghitung nilai faktorial
long long faktorial(int n) {
  long long hasil = 1;
  iterasi(n, hasil);
  return hasil;
}

int main() {
  int bilangan;
  
  // Meminta input bilangan bulat positif
  cout << "Masukkan bilangan bulat positif: ";
  cin >> bilangan;
  
  // Menghitung faktorial dari bilangan
  long long hasil = faktorial(bilangan);
  
  // Menampilkan hasil
  cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
  
  return 0;
}