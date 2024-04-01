#include <iostream>
using namespace std;

// fungsi untuk mengurutkan array dari tipe float menggunakan algoritma Selection Sort
void selectionSort(float arr[], int n) {
    // iterasi melalui array, mulai dari elemen yang pertama
    for (int i = 0; i < n-1; i++) {
        // asumsikan bahwa nilai minimum adalah elemen pertama dari bagian yang belum disortir
        int minIndex = i;
        // iterasi 
        for (int j = i+1; j < n; j++) {
            // kalau elemen saat ini lebih besar dari elemen berikutnya
            if (arr[j] > arr[minIndex]) {
                // perbarui indeks minimum jadi indeks dari elemen yang lebih besar
                minIndex = j;
            }
        }
        // tukar nilai minimum yang ada di bagian belum disortir dengan elemen pertama dari bagian belum disortir
        swap(arr[minIndex], arr[i]);
    }
    // print keterangan
    cout << "URUTAN IPS MAHASISWA DARI TERBESAR HINGGA TERKECIL" << endl;
    cout << "==================================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "IPS " << i+1 << " : " << arr[i] << endl;
    }
}

int main() {
    // menjelaskan array menggunakan float
    float IPS[5] = {3.8, 2.9, 3.3, 4.0, 2.4};
    // hitung ukuran dari array
    int size = sizeof(IPS)/sizeof(IPS[0]);
    // panggil fungsi selectionSort untuk mengurutkan array secara menurun
    selectionSort(IPS, size);
    // return 0 jika program berhasil 
     return 0;
}