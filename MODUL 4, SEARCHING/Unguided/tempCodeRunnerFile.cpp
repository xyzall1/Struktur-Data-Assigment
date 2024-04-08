#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 4;
    int count = 0;
    int i;
    // algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if(data[i] == cari) {
            count++;
        }
    }
    cout << "\t Program Sequential Search Sederhana\n" << endl;
    cout << " Data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}"<< endl;
    if (count > 0) {
        cout << "\n Angka "<< cari << " Ditemukan Sebanyak " << count << " Kali." << endl;
    } else {
        cout << cari << " Tidak Dapat Ditemukan Pada Data." << endl;
    }
    return 0;
}