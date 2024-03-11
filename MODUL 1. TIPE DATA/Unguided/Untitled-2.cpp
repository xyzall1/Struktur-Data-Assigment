#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Membuat map dengan kunci string dan nilai integer
    map<string, int> Dosen;

    // Menambahkan data ke map
    Dosen["Sari"] = 37;
    Dosen["Dewi"] = 45;
    Dosen["Sri"] = 55;

    // Menampilkan data dari map menggunakan iterator
    map<string, int>::iterator it;
    for (it = Dosen.begin(); it != Dosen.end(); it++)
    {
        cout << "Nama: " << it->first << ", Umur: " << it->second << endl;
    }

    return 0;
}