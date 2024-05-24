#include<iostream>
using namespace std;

// Fungsi rekursif untuk menghitung nilai faktorial
long long faktorial(int n) {
  if(n == 0)
    return 1;
  else
    return n * faktorial(n-1);
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