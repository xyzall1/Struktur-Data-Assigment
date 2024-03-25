#include <iostream>
using namespace std;

int main() {
    int dataArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Deklarasi dan inisialisasi array dataArray
    int length = sizeof(dataArray) / sizeof(dataArray[0]); // Hitung panjang array

    cout << "Data Array : "; 
    for (int i = 0; i < length; i++) { // Perulangan untuk mencetak setiap elemen array
        cout << dataArray[i]; // Cetak elemen ke-i
        if (i != length - 1) { // Jika elemen ke-i bukan terakhir
            cout << ", "; 
        }
    }
    cout << endl << endl; // Pindah baris

    cout << "Nomor Genap : "; 
    for (int i = 0; i < length; i++) { // Perulangan untuk mencetak setiap elemen array
        if (dataArray[i] % 2 == 0) { // Jika elemen ke-i genap
            cout << dataArray[i]; // Cetak elemen ke-i
            if (i != length - 1) { // Jika elemen ke-i bukan terakhir
                cout << ", "; // Cetak koma dan spasi
            }
        }
    }
    cout << endl << endl; // Pindah baris

    cout << "Nomor Ganjil : "; 
    for (int i = 0; i < length; i++) { // Perulangan untuk mencetak setiap elemen array
        if (dataArray[i] % 2 != 0) { // Jika elemen ke-i ganjil
            cout << dataArray[i]; // Cetak elemen ke-i
            if (i != length - 1) { // Jika elemen ke-i bukan terakhir
                cout << ", "; // Cetak koma dan spasi
            }
        }
    }
    cout << endl << endl; 

    return 0;
}
