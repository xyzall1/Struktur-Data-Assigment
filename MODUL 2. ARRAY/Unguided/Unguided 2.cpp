#include <iostream>

using namespace std;


//PROGRAM INPUT ARRAY 3 DIMENSI
//Di mana user dapat memasukkan elemen dari array dengan ukuran yang diinputkan

int main()
{
    // Mendeklarasikan variabel array dengan 2 dimensi
    int arr[2][3][3];

    // Inisialisasi variabel untuk inputan user
    int baris, kolom, panjang;

    // Inputan dari user
    cout << "Masukkan jumlah baris : ";
    cin >> baris;

    cout << "Masukkan jumlah kolom : ";
    cin >> kolom;

    cout << "Masukkan jumlah panjang : ";
    cin >> panjang;

    // Inisialisasi variabel untuk inputan elemen array
    int input;

    // Perulangan untuk inputan elemen array
    for (int x = 0; x < baris; x++)
    {
        for (int y = 0; y < kolom; y++)
        {
            for (int z = 0; z < panjang; z++)
            {
                cout << "Input Array [" << x << "] [" << y << "] [" << z << "] = ";
                cin >> input;

                // Memasukkan setiap input ke array
                arr[x][y][z] = input;
            }
        }
    }

    // Outputan array yang sudah diinputkan
    cout << endl
         << "Array yang telah diinputkan : " << endl;

    for (int x = 0; x < baris; x++)
    {
        for (int y = 0; y < kolom; y++)
        {
            for (int z = 0; z < panjang; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    cout << endl
         << "Tampilan array:" << endl;

    for (int x = 0; x < baris; x++)
    {
        for (int y = 0; y < kolom; y++)
        {
            for (int z = 0; z < panjang; z++)
            {
                if (z == panjang - 1)
                {
                    cout << arr[x][y][z];
                }
                else
                {
                    cout << arr[x][y][z] << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
