# <h1 align="center">Laporan Praktikum Modul Stack</h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
1. Pengertian
    Stack merupakan suatu metode dalam menyimpan atau mengambil sebuah data dari maupun ke memori [1]. Stack ini dapat diibaratkan sebuah tumpukan barang yang hanya memiliki pintu di atasnya (memasukkan dan mengambil barang hanya dapat dilakukan melalui pintu itu). Jika kita analogikan terhadap kehidupan sehari-hari adalah seperti tumpukan piring yang ada pada sebuah restoran lalu tumpukannya akan ditambah pada bagian paling atas pula. Jadi dapat diambil kesimpulan stack adalah First in Last Out (FILO) dan Last In First Out (LIFO)

    ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/e44d8e12-9068-47cd-85e7-4977d874d3d1)
    Gambar di atas merupakan sebuah ilustrasi terjakdinya stack jika kita adaptasikan pada kehidupan sehari-hari

2. Operasi yang Terjadi dalam Stack

    ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/d7a33cc3-5a14-4ad9-8598-2e5612ae3d78)
    1. Proses deklarasi yaitu proses pendeklarasian stack.
    2. Proses isempty yaitu proses pemeriksaan apakah stack dalam keadaan kosong atau tidak.
    3. Proses isfull yaitu sebuah proses pemeriksaan stack sudah penuh atau belum.
    4. Proses inisialisasi yaitu merupakan proses stack kosong atau bisanya dengan pemberian nilai untuk top

3. Implementasi Stack
    1. Implementasi stack dengan Array
    Array adalah implementasi stack yang paling sederhana serta memeberikan akses acak kepada pengguna berdasarkan indeks. Kelebihan dari implementasi stack menggunakan array yaitu terdapat kemudahan dalam pproses implementasi. Namun kekurangnannya array masih tergolong flesibel. Selain itu, ukuran array tidak dapat berubah secara dinamin sesuai dengan kebutuhan proses [2].
    2. Implementasi stack dengan Linked List
    Jika menggunakan linked list, maka operasi push dapat digantikan dengan cara addEd Front serta operasi pop yang dapat diganti dengan menghapus node depan dari lnked list. Seperti halnya array. Kelbihan dari implmentAI ATck menggunakan linked list yaitu kemampuannya untuk bertambah serta berkurang sesuai dengan kebutuhan saat runtime. Namun kekurangannya yaitu dalam prosesnya. Karena membutuhkan alokasi memori tambahan karena menggunakan pointer dalam linked list[2].

4. Kelebihan Menggunakan Stack
    1. Membantu mengelola data dengan metode LIFO
    2. Membersihkan objek secara otomatis
    3. Tidak gampang rusak
    4. Ukuran variabel tidak dapat diubah 
    5. Dapat mengontrol memori secara mandiri

5. Kekurangan Menggunakan Stack
    1. Memori dalam stack sangat terbatas
    2. Ada berupa kemungkinan stack akan meluap maupun overflow jika terlalu banyak projek
    3. Tidak memungkinkan akses yang acak, karena harus mengeluarkan tumpukan paling atas atau terlebih dahulu untuk mengakses paling bawah.

6. Jenis-jenis Stack 
    1. Register Stack, yang merupakan stack yang hanya mampu menampung data dalam jumlah yang kecil. Kedalam maksimum pada register stack yang cenderung dibatasi karena ukuran unit memorinya sangat kecil dibandingkan dengan memory stack.
    2. Memory Stack, Pada stack dengan jenis seperti ini maka kedalaman stack cukup fleksibel serta mampu menangani dalam skala yang lebih besar dibandingkan jenis sebelumnya [3].

7. Karakteristik Stack 
    1. stack dapat digunakan ada  banyak algoritma yang berbeda seperti Tower of Hanoi, Tree traversal, rekursi dll.
    2. Memiliki prinsip operasi Last In First Out, yaitu elemen yang dimasukkan pertama akan muncul terakhir dan sebaliknya.
    3. Jika tidak mempunyai elemen data kosong, akan tetap dilakukan operasi penghapusan maka akan terjadi stack overflow
    4. Jika ruang memori yang dialokasikan untuk struktur data stack sudah penuh namun masih dilakukan operasi penyisipan elemen maka akan terjadi stack overflow.
    5. Penyisipan dan penghapusan terjadi di satu ujung yaitu dari atas tumpukan [4].

8. Fungsi serta kegunaan dalam Stack
    1. Struktur data dalam stack dapat digunakan untuk evaluasi serta konversi ekspresi aritmatika.
    2. Stack digunakan dalam manajemen memori.
    3. Dipakai untuk memproses pemanggilan sebuah fungsi
    4. Digunakan untuk pemeriksaan tanda kurung
    5. Stack digunakan dalam pemograman rekursi

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
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/1a75b92b-4f2a-4104-87d6-ef3f1b9d60d5)
Saat kode di jalankan, kode akan meminta user untuk menginputkan sebuah kalimat yang di mana kalimat tersebut diminta oleh user minimal tiga kata, lalu saat user sudah menginputkan beberapa kata, maka kode akan menjalankan perintahnya dengan membalik kata serta huruf tersebut. Lalu User akan ditampilkan sebuah hasil yang di mana hasil tersebut ditampilkan sebuah susunan kata yang dibalik dan susunan huruf yang dibalik.


## Kesimpulan
1. Stack merupakan suatu metode dalam menyimpan atau mengambil sebuah data dari maupun ke memori.
2. Operasi Stack terdiri dari proses deklarasi, Proses isempty, Proses isfull yaitu sebuah proses pemeriksaan stack sudah penuh, Proses inisialisasi.
3. Implementasi stack dapat terjadi dengan array & linked list
4. Jenis stack ada dua yaitu register stack & memory stack
5. Kelebihan stack : mengelola data, membersihkan objek, tidak gampang rusak, variabel dapat diubah, dapat mengontrol memori dengan mandiri.
6. Kekurangan stack : memori terbatas, biasa terjadi stack oferflow, akses yang acak.
7. Karakteristik stack : dapat digunakan di beberapa algoritma yang berbeda, prinsip LIFO, penyisipan dan penghapusan terjadi di satu ujung dari tumpukan dll.
8. fungsi Stack : evaluasi ekspresi aritmatika, manajmene memori, pemanggilan sebuah fungsi, pemeriksaan tanda kurung, pemogrmaan rekursi


## Referensi
[1] Mulyana, A et al. (2021). Cara mudah mempelajari algoritma dan struktur data (cetakan pertama). DIVA Press.


[2] Sihombing, E, "Penerapan stack dan queu pada array dan linked list", INFOKOM, vol 7, no 2, 15-24,Desember, 2019.

[3] A. Maulana, "Memahami Stack, Struktur Data yang Memudahkan Programmer Jalankan Tugasnya" (2021). Diakses pada 5/5/2024 dari https://glints.com/id/lowongan/stack-adalah/

[4] Trivusi, "Struktur Data  Stack : Pengertian, Karakteristik, dan Kegunaannys" (2022). Diakses pada 5/5/2024 dari https://www.trivusi.web.id/2022/07/struktur-data-stack.html
