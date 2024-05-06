# <h1 align="center">Laporan Praktikum Modul Stack</h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
1. Pengertian
Struct yaitu salah satu tipe data yang berisikan kumpulan variabel-variabel serta bernaung dalam satu nama yang sama serta memilki kaitan satu sama lain [1]. Dalam struct kita dapat memilki variabel-variabel yang bertipe data yang sama atau berbeda, bahakan struct sendiri dengan menyimpan variabel yang bertipe data array atau struct itu sendiri [2]

2. Cara Menggunakan Struct
Penggunaan atau pemakaian tipe data struct dilakukan dengan membuat suatu variabel yang bertipe data struct tersebut. Pengaksesan elemen struct yang akan dilakukan secara individual dengan menyebutkan nama variabel struct diikuti dengan operator titik (.) Seperti pada kode di bawah ini :

3. Pengelompokan Data
Struct memungkinkan kita untuk mengelompokkan data terkait bersama-sama. Ini sangat berguna ketika memiliki sejumlah variabel yang saling terkait dan ingin memperlakukan mereka sebagai satu kesatuan. Misalnya, dalam pengelompokan mahaiswa di kelas, kita dapat menggunakan struct untuk menyimpan informasi seperti nama, NIM, umur, asal daerah dan informasi lainnya dalam satu unit [3].

4. Penggunaan Struct
Penggunaan struct memiliki beberapa pilihan untuk mendeklarasikan variabel ketika tipe struktur ditentukan dengan menempatkan satu atau lebih nama variabel yang dipisahkan koma di antara kurung kurawal penutup dan titik koma. Variabel struktur dapat diinisialisasi. Inisialisasi setiap variabel harus diapit kurung kurawal.

```C++
#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku;
    string pengarang;
    string penerbit;
    int tebalHalaman;
    int hargaBuku;
};

int main() {
    // Mendeklarasikan variabel favorit dengan tipe buku
    buku favorit;

    // Mengisi data ke dalam variabel favorit
    favorit.judulBuku = "The Alpha Girl's Guide";
    favorit.pengarang = "Henry Manampiring";
    favorit.penerbit = "Gagas Media";
    favorit.tebalHalaman = 253;
    favorit.hargaBuku = 79000;

    // Menampilkan informasi buku favorit
    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit.judulBuku << endl;
    cout << "\tPengarang : " << favorit.pengarang << endl;
    cout << "\tPenerbit : " << favorit.penerbit << endl;
    cout << "\tTebal Halaman: " << favorit.tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit.hargaBuku << endl;
 
    return 0;
}

```
5. Cara Membuat Struct
Struct dapat kita buat dengan kata kunci struct kemudian diikuti dengan nama struct dan isinya.
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/cb997fac-ab0e-41aa-b991-e8f0c28c12a4)





## Guided 

### 1. Sourcecode

```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();

    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;

    cetakArrayBuku();

    return 0;
}



```
Program di atas merupakan kode yang akan menjalankan kode tentang struct. kode di atas sendiri nantinya akan menampilkan sebuah struktur data tentang buku yang memiliki lima anggota seperti ; judul buku, pengarang, penerbit, tebal halaman,dan harga buku atau dengan kata singkatnya kode tersebut menjalankan tentang struktur sebuah buku.

Mari kita bahas kode di atas, untuk main() kode ini akan membuat sebuah variabel yang bernama 'favorit' dengan tipe data 'buku' nantinya pada variabel tersebut akan diisi dengan informasi tentang buku favorit. Lalu pada perintah 'cout' ini merupakan fungsi yang akan menampilkan teks 'Buku Favorit Saya' dengan menggunakan perintah atau kode 'cout << "\tBuku Favoorit Saya" << endl;' perintah ini akan menampilkan sebuah teks "Buku Favorit Saya" terhadap baris baru. Lalu kode akan menampilkan tentang informasi buku favorit seperti judul, pengarang, penerbit, tebal halaman, serta harga mengguanakan perintah dengan kode 'cout' yang sama.


#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/6c13e5aa-b0cd-47b4-a0c6-a7f5d7355cd4)
Pada output di atas kode akan menambahkan sebanyak 5 string berupa (Inggris, Dasar Multimedia, Matematika Diskrit, Struktur Data, Kalkulus) 5 string ini akan disimpan ke stack, lalu kode akan mencetak semua elemen ke stack paada akhirnya kode akan menampilkan informasi apakah stack penuh atau kosong. Lalu kita akan mengecek ke posisi ke 2 dalam array untuk menggunakan fungsi dan lalu kode akan menghapus data teratas dari array menggunakan fungsi lagi, lalu kita cek banyaknya data dalam array serta output yang dihasilkan yaitu '4' karena kita sudah menghapus 1 yang merupakan data dari array. Kemudian kita ubah posisi ke-2 dalam array menjadi 'Bahasa Jerman' lalu kode akan mencetak isi dari array dan menghapus semua array serta mengecek array lalu outputnya yaitu 0 karena data telah terhapus serta output yang dihasilkan kosong maka kode akan menjalankan pesan 'Tidak ada data yang dicetak'.

## Unguided 

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palimdrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

```C++
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Kalimat : ";
    getline(cin, input);

    stack<char> s;
    for (char c : input) {
        s.push(c);
    }

    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    if (input == reversed) {
        cout << "Kalimat tersebut adalah polindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan polindrom." << endl;
    }

    return 0;
}
```
#### Interpretasi 
Dalam kode di atas mulanya kode akan membuat variabel yang berupa input dari tipe string serta nantinya kode akan meminta user untuk mengisi stack dari tipe char serta mengisi stack dengan setiap karakter dari kalimat tersebut dengan menggunakan perulangan, lalu nantinya kita akan membuat variabel reversed dari tipe string yang kosong. Lalu nantinya perulangan akan berjalan sambil memeriksa apakah stack kosong atau tidak. Jika stack tidak kosong maka kode akan menjalankan dan menambahkan karakter teratas dari stack ke reversed serta kemudian nantinya akan terjadi pop karakter tersebut dari stack. Setelah perulangan selesai, nantinya kita bandingkan input dengan reversed, nantinya jika variabel sama maka kode akan menampilkan sebuah pesan 'Kalimat tersebut adalah polindrom'. Namun, jika tidak maka kode akan menampilkan sebuah pesan 'Kalimat tersebut adalah bukan polindrom'.

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/4f489a8b-4583-4553-aea8-dd38420de0c8)
Saat dijalankan kode tersebut akan menampilkan sebuah output berupa pesan untuk mengisi 'Kalimat' atau inputan yang akan di masukkan dari user lalu saat kita masukkan sebuah kalimat maka kode akan menjalankan perintah, apakah kalimat tersebut polindrom atau tidak. Kalimat polindrom merupakan diksi yang di mana jika huruf terbaca dari kiri ke kana atau sebaliknya maka pembacaan tetap sama. Jika kalimat yang dimasukkan polindrom maka kode akan mencetak pesan 'Kalimat tersebut adalah polindrom' namun jika tidak kode akan menjalankan sebuah pesan 'Kalimat tersebut adalah bukan polindrom.


### 2. Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat?


#### Input :
```C++
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

string reverseWordsAndChars(string str) {
    istringstream iss(str);
    stack<string> s;
    string word;

    while (iss >> word) {
        string reversedWord = "";
        for (int i = word.length() - 1; i >= 0; i--) {
            reversedWord += word[i];
        }
        s.push(reversedWord);
    }

    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
        if (!s.empty()) {
            reversed += " ";
        }
    }

    return reversed;
}

int main() {
    string input;
    cout << "Kalimat : ";
    getline(cin, input);

    string reversed = reverseWordsAndChars(input);
    cout << "Hasil : " << reversed << endl;

    return 0;
}
```
#### Interpretasi
Kode tersebut mengguanakan fungsi reverse words and chars yang akan menerima sebuah string sebagai parameter serta mengembalikan string yang telah diubah dengan urutan kata serta karakter dari belakang ke depan. Kode tersebut bisa menjalankan dengan cara memecah string menjadi kata-kata menggunakan stream, kemudian membalik setiap kata menggunakaan perulangan. Fungsi dari 'reversewordAndChars' ini akan mengambil sebuah sitring sebagai input serta mengembalikan string yang dibalik, lalu pada kode ini memuat adanya 'istringstream' yang berfungsi untuk memecah input menjadi kata-kata individual lalu pada setiap kata nantinya kode akan membalik dengan menggunakan loop yang akan mengulang dari akhir sampai dengan ke awal kata. Lalu saat kata dibalik nantinya akan disimpan di dalam sebuah stack. Dan setelah semua kata dibalik nantinya fungsi ini akan mengambil kata-kata dari stack serta menggabungkannya menjadi sebuah string yang dibalik. Lalu saat ada dalam fungsi 'main' kode akan meminta user untuk menginputkan sebuah kalimat dan kode akan memanggil fungsi 'reverseWordsAndChars' untuk digunakan mengubah input menjadi kalimat yang dibalik.

#### Output
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/3242d7e1-0e4c-4912-b854-505bdb586920)
Pada kode di atas akan menjalankan sebuah data buku favorit saya yang memilki lima variabel yaitu judul buku, pengarang, penerbit, tebal halaman, serta harga buku. Serta pada output ini kode menjalankan deklarasi variabel struct yang berjenis array. Kode akan menjalankan sesuai dengan inputan yang sudah kita masukkan sesuai dengan gambar di atas.


## Kesimpulan
Struct yaitu salah satu tipe data yang berisikan kumpulan variabel-variabel serta bernaung dalam satu nama yang sama serta memilki kaitan satu sama lain [1]. Dalam struct kita dapat memilki variabel-variabel yang bertipe data yang sama atau berbeda, bahakan struct sendiri dengan menyimpan variabel yang bertipe data array atau struct itu sendiri [2]. Penggunaan atau pemakaian tipe data struct dilakukan xengan membuat suatu variabel yang bertipe data struct tersebut. Pengaksesan elemen struct yang akan dilakukan secara individual dengan menyebutkan nama variabel struct diikuti dengan operator titik (.). Struct akan memungkinkan kita untuk mengelompokkan data terkait bersama-sama.


## Referensi
[1] Aho, Hopcroft, Ullman, "Data Structures and Algorithms", Prentice Hall, 1987.

[2] Sjukani, Moh, "Struktur Data (Algortima dan Struktur Data dengan C++", Jakarta : Mitra Wacana Media, 2012).

[3] Sari, R., Pangaribuan, H., & Hasibuan, R. (2020). Implementasi Struct untuk Menyimpan Data Mahasiswa dan Nilai Mata Kuliah pada Sistem Informasi Akademik. Jurnal Komputer dan Sistem Informasi, 11(1), 1-10.

[4] Microsoft. (n.d.). Struct (C++). Retrieved April 29, 2024, from https://learn.microsoft.com/en-us/cpp/cpp/struct-cpp?view=msvc-170
