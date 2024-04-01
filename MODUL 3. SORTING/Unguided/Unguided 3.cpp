#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Meminta user memasukkan bilangan bulat n
    int n;
    cout << "Masukkan nilai n : ";
    cin >> n;

    // Membuat vektor untuk menyimpan karakter
    vector<char> v(n);

    // Meminta user memasukkan setiap karakter
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan karakter ke-" << i+1 << " : ";
        cin >> v[i];
    }

    // Menampilkan urutan karakter sebelum diurutkan
    cout << "\nUrutan karakter sebelum sorting : \n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    // Melakukan sorting ascending
    sort(v.begin(), v.end());

    // Menampilkan urutan karakter setelah diurutkan secara ascending
    cout << "\nUrutan karakter setelah ascending sort : \n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    // Melakukan sorting descending
    sort(v.begin(), v.end(), greater<char>());

    // Menampilkan urutan karakter setelah diurutkan secara descending
    cout << "\nUrutan karakter setelah descending sort : \n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
