# <h1 align="center">Laporan Praktikum Modul Struct</h1>
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

### 1. [Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.]

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
Program di atas merupakan kode yang akan menjalankan kode tentang struct. kode di atas sendiri nantinya akan menampilkan sebuah struktur data tentang buku yang memiliki lima anggota seperti ; judul buku, pengarang, penerbit, tebal halaman,dan harga buku atau dengan kata singkatnya kode tersebut menjalankan tentang struktur sebuah buku.

Mari kita bahas kode di atas, untuk main() kode ini akan membuat sebuah variabel yang bernama 'favorit' dengan tipe data 'buku' nantinya pada variabel tersebut akan diisi dengan informasi tentang buku favorit. Lalu pada perintah 'cout' ini merupakan fungsi yang akan menampilkan teks 'Buku Favorit Saya' dengan menggunakan perintah atau kode 'cout << "\tBuku Favoorit Saya" << endl;' perintah ini akan menampilkan sebuah teks "Buku Favorit Saya" terhadap baris baru. Lalu kode akan menampilkan tentang informasi buku favorit seperti judul, pengarang, penerbit, tebal halaman, serta harga mengguanakan perintah dengan kode 'cout' yang sama.


#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/2dde9272-4935-40c7-b83f-f01cf6949ccb)
kode di atas akan menjalankan output berupa tampilan data yang merupakan kumpulan informasi tentang 'Buku Favorit Saya' dengan berisikan 'Judul Buku : The Alpa Girl's Guide' lalu 'Pengarang : Henry Menampiring' lalu 'Penerbit : Gagas Media' lalu ada berupa 'Tebal Halaman : 253 halaman' serta 'Harga Buku : Rp 79000'. Tampilan Output di atas sesuai dengan kode yang sudah kita masukkan.
| 
### 2. [Buatlah sebuah struktur dengan skema seperti di bawah, isi dengan nilai kemudian jalankan.]

```C++
#include <iostream>
using namespace std;

struct hewan {
    string namaHewan;
    string jenisKelamin;
    string caraBerkembangbiak;
    string alatPernafasan;
    string tempatHidup;
    bool Karnivora;
};

struct hewanDarat {
    int jumlahKaki;
    bool menyusui;
    string suara;
};

struct hewanLaut {
    string bentukSirip;
    string bentukPertahananDiri;
};

int main() {
    hewanDarat kelinci; // Menggunakan tipe data hewanDarat untuk kelinci
    kelinci.jumlahKaki = 4;
    kelinci.menyusui = true;
    kelinci.suara = "Citcit";

    hewanLaut ikan; // Menggunakan tipe data hewanLaut untuk ikan
    ikan.bentukSirip = "Sirip ekor";
    ikan.bentukPertahananDiri = "Sisik";

    hewan serigala; // Tetap menggunakan tipe data hewan untuk serigala
    serigala.namaHewan = "Serigala";
    serigala.jenisKelamin = "Jantan";
    serigala.caraBerkembangbiak = "Melahirkan";
    serigala.alatPernafasan = "Paru-paru";
    serigala.tempatHidup = "Hutan terbuka";
    serigala.Karnivora = true;

    cout << "\t\tHewan" << endl;
    cout << "\t" << serigala.namaHewan << endl;
    cout << "\tJenis kelamin : " << serigala.jenisKelamin << endl;
    cout << "\tCara berkembangbiak : " << serigala.caraBerkembangbiak << endl;
    cout << "\tAlat pernafasan : " << serigala.alatPernafasan << endl;
    cout << "\tTempat hidup : " << serigala.tempatHidup << endl;
    cout << "\tKarnivora : " << (serigala.Karnivora ? "Yes" : "No") << endl << endl;

    cout << "\t\tHewan Darat" << endl;
    cout << "\tKelinci" << endl;
    cout << "\tJumlah kaki : " << kelinci.jumlahKaki << endl;
    cout << "\tMenyusui : " << (kelinci.menyusui ? "Yes" : "No") << endl;
    cout << "\tSuara : " << kelinci.suara << endl << endl;

    cout << "\t\tHewan Laut" << endl;
    cout << "\tIkan" << endl;
    cout << "\tBentuk sirip : " << ikan.bentukSirip << endl;
    cout << "\tBentuk pertahanan diri: " << ikan.bentukPertahananDiri << endl;

    return 0;
}

```
Program di atas merupakan kode yang akan menjalankan program struct dengan menjelaskan beberapa struktur data untuk menyimpan suatu informasi tentang hewan. Pada kode di atas kita akan menjalankan tiga struktur data yang merupakan 'hewan', 'hewanDarat', dan 'hewanLaut'. Lalu pada struktur hewan memiliki anggota-anggotanya seperti 'namaHewan', 'jenisKelamin', 'caraBerkembangbiak', 'alatPernafasan', 'tempatHidup', serta 'Karnivora'. Pada struktur 'hewanDarat' akan memiliki anggota-anggotanya seperti 'jumlahKaki'. 'menyusui' serta 'suara'. Pada struktur 'hewanLaut' serta memiliki anggota-anggotanya yaitu 'bentuSirip' serta 'bentukPertahananDiri'. 

Pada bagian-bagian 'main()' kode akan membuat variabel dengan tipe data 'hewanDarat', 'hewanLaut', dna 'hewan' serta pada variabel 'kelinci' akan memiliki tipe data 'hewanDarat', variabel 'ikan' akan memilki tipe data 'hewanLaut' dengan variabel 'serigala' dengan memilki tipe data 'hewan'. Setelah itu, kode akan mengisi informasi tentang setiap hewan tersebut, nantinya informasi akan ditampilkan dengan menggunakan perintah 'cout' yang nantinya kode akan menjalankan informasi tentang serigala, lalu informasi tentang kelinci, serta informasi tentang ikan.

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/36540e2f-a939-45e4-bc30-e47a1c97a71c)

Setelah kode dijalankan maka program akan menampilkan kode yang berisikan tentang tiga struktur seperti Hewan dengan (nama hewna, jenis kelamin, cara berkembangbiak, alat pernafasan, tempat hidup, apakah karnivora? ) lalu pada hewan darat (jumlah kaki, apakah menyusui?, suara) serta hewan laut (bentuk sirip dan bentuk pertahanan diri).

## Unguided 

### 1. [Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan]

```C++
#include<iostream>

using namespace std;

struct buku{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    int harga_buku;
};buku data1[5];

int main(){

    data1[0].judul_buku = "Sebuah Seni Untuk Bersikap Bodo Amat";
    data1[1].judul_buku = "Sebuah Seni Untuk Bersikap Tidak Bodo Amat";
    data1[2].judul_buku = "1001 Cara Sukses di Usia Tua";
    data1[3].judul_buku = "3000 Cara Meningkatkan Kinerja Otak";
    data1[4].judul_buku = "Cara Menikmati Hidup Tanpa Beban";

    data1[0].pengarang = "Aurel Rowling";
    data1[1].pengarang = "Aliana Sawafi";
    data1[2].pengarang = "Rosa Nur";
    data1[3].pengarang = "Dewanti Angguna";
    data1[4].pengarang = "Laksita Ardelia";

    data1[0].penerbit = "Garam Media";
    data1[1].penerbit = "Gula Media";
    data1[2].penerbit = "Erlangga";
    data1[3].penerbit = "Garuda";
    data1[4].penerbit = "Empat Mata";

    data1[0].tebal_halaman = 233;
    data1[1].tebal_halaman = 290;
    data1[2].tebal_halaman = 157;
    data1[3].tebal_halaman = 480;
    data1[4].tebal_halaman = 670;

    data1[0].harga_buku = 600000;
    data1[1].harga_buku = 34000;
    data1[2].harga_buku = 459000;
    data1[3].harga_buku = 670000;
    data1[4].harga_buku = 870000;
    

    
    for(int i=0; i<5; i++){
    cout<<"Data Buku ke-"<<i+1<<endl;
    cout<<"Judul: "<<data1[i].judul_buku<<endl;
    cout<<"Pengarang: "<<data1[i].pengarang<<endl;
    cout<<"Penerbit: "<<data1[i].penerbit<<endl;
    cout<<"Tebal Halaman: "<<data1[i].tebal_halaman<<endl;
    cout<<"Harga: "<<data1[i].harga_buku<<endl;
    cout<<endl;
    cout<<endl;
    }
    return 0;
}

```
Kode di atas merupakan sebuah program yang akan menjalankan kode yang memuat tentang struct yang bernama 'buku' lalu memiliki lima variabel seperti (judul buku yang menyimpan string judul buku, pengarang akan menyimpan string nama pengarang buku, penerbit yang akan menyimpan nama penerbit buku, tebal halaman akan menyimpan integer jumlah tebal halaman buku, harga buku akan meyimpan harga beli buku). Kemudian pada array tersebut yang didefinisikan dengan 'data1' lalu dengan kapasitas 5 elemen yang nantinya elemen tersebut adalah sebuah objek dar struct 'buku'. Lalu kode tersebut menginisialisasi setiap elemen array dengan nilai-nilai yang telah ditentukan. Kemudian kode tersebut akan menggunakan perulangan 'for' lalu mencetak semua data yang telah disimpan pada setiap elemen dari array 'data1'. setelah itu kode akan mengakhiri program dengan mengembalikan nilai '0' dengan fungsi 'main'. Oleh karena itu kode akan menyimpan dan mencetak data-data tentang lima buku yang telah ditentukan. 

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/c625985e-b3b4-430f-9ef9-8e35bc124179)
Saat dijalankan kode tersebut akan menampilkan sebuah output berupa data berupa buku yang di mana isinya berisikan variabel, di mana ada lima data buku dalam output yang akan dijalankan dalam kode serta dalam data buku tersebut terdapat lima variabel juga yaitu (judul, pengarang, penerbit, tebal halaman, serta harga buku). Data buku tersebut nantinya akan keluar sesuai terhadap masing-masing inputan array yang kita masukkan. Seperti gambar di atas ini.


### 2. [Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided 1, berjenis Array. Bagimana cara mengisi data dan menampilkannya?]


#### Input :
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
    // Mendeklarasikan variabel favorit dengan tipe buku dan kapasitas 5 elemen
    buku favorit[5];

    // Mengisi data ke dalam variabel favorit
    favorit[0].judulBuku = "The Alpha Girl's Guide";
    favorit[0].pengarang = "Henry Manampiring";
    favorit[0].penerbit = "Gagas Media";
    favorit[0].tebalHalaman = 253;
    favorit[0].hargaBuku = 79000;

    favorit[1].judulBuku = "10 Cerita Nabi Palsu";
    favorit[1].pengarang = "Aurel Dewanti";
    favorit[1].penerbit = "Gajah Duduk";
    favorit[1].tebalHalaman = 580;
    favorit[1].hargaBuku = 76000;

    // Menampilkan informasi buku favorit
    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit[0].judulBuku << endl;
    cout << "\tPengarang : " << favorit[0].pengarang << endl;
    cout << "\tPenerbit : " << favorit[0].penerbit << endl;
    cout << "\tTebal Halaman: " << favorit[0].tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit[0].hargaBuku << endl;

    cout << endl;

    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit[1].judulBuku << endl;
    cout << "\tPengarang : " << favorit[1].pengarang << endl;
    cout << "\tPenerbit : " << favorit[1].penerbit << endl;
    cout << "\tTebal Halaman: " << favorit[1].tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit[1].hargaBuku << endl;

    return 0;
}
```
Jika variabel struct berjenis array maka nantinya kita akan mempunyai sebuah array yang elemen-elemennya adalah objek dari struct itu sendiri nantinya. Untuk mengisi data pada setiap elemen dari array dnegan menggunakan contoh guided satu yaitu dengan 'data1' dan kita bisa menggunakan notasi dot (.) untuk mengakses variabel anggota dari struct 'buku'. Kemudian untuk menampilkannya kita dapat menggunakan perulangan 'for' untuk mengulangi setiap elemen dari array 'data1' lalu akan mencetak nilai-nilai dari variabel anggota melalui struct 'buku'. Kmeudian untuk menampilkannya kita menggunakan perulangan 'for' yang akan diulang lima kali lalu pada setiap iterasi perulangan kode akan mencetak variabel dari struct 'buku' pada elemen yang masih diiterasi.

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