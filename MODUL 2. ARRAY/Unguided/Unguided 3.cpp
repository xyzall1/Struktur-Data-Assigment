#include <iostream>
using namespace std;

int main()
{
    // Variabel untuk menyimpan jumlah elemen array
    int n;

    // Prompt user untuk memasukkan jumlah elemen array
    cout << "Masukkan jumlah elemen array : " << endl;

    // Baca nilai dari user
    cin >> n;

    // Buat array dengan ukuran sama dengan jumlah elemen
    int arr[n];

    // Variabel untuk menyimpan nilai maksimum, minimum, dan total
    int max = INT_MIN, min = INT_MAX, sum = 0;

    cout << "==============================" << endl;

    // Lakukan perulangan sesuai dengan jumlah elemen
    for (int i = 0; i < n; i++)
    {
        // Prompt user untuk memasukkan setiap elemen
        cout << "Masukkan elemen ke-" << i + 1 << " : ";

        // Baca nilai dari user
        cin >> arr[i];

        // Periksa apakah nilai saat ini lebih besar dari nilai maksimum serta
        // update jika benar
        if (max < arr[i])
            max = arr[i];

        // Periksa apakah nilai saat ini lebih kecil dari nilai minimum serta
        // update jika benar
        if (min > arr[i])
            min = arr[i];

        // Hitung total
        sum += arr[i];
    }

    cout << "==============================" << endl;

    // Cetak hasil
    cout << "Nilai maksimum : " << max << endl;
    cout << "Nilai minimum : " << min << endl;
    cout << "Rata-rata : " << sum / (float)n << endl;

    cout << "==============================" << endl;

    // Selesaikan fungsi main
    return 0;
}
