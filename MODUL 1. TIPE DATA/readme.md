# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
Tipe data merupakan pengelompokkan sebuah data berdasarkan beberapa jenis data yang akan digunakan. Pada penjelasan di bawah ini kita akan membahas tiga tipe data yaitu:
1. Tipe data primitif
Merupakan tipe data yang tipe data yang paling dasar serta paling sederhana, biasanya sudah disediakan oleh sistem. Berikut macamnya :
    a. Integer yaitu tipe data yang berjenis bilangan bulat (contoh; 1,-2),
    b. Float merupakan tipe data yang memiliki jenis nilai bilangan desimal (contih; 2,3),
    c. Char merupakan data yang biasannya memiliki jenis data huruf abjad dan bisanya digunakan untuk simbol (contoh; X,Y),
    d. Boolean adalah tipe data yang memilki dua nilai benar atau salah (contoh; TRUE, FALSE).
2. Tipe data abstrak
Merupakan tipe data yang kita buat sendiri. berikut contoh tipe data abstrak;
    a. Pernyataan konstruktif yaitu tipe yang memilki dua karakter,
    b. pencacahan nilai yaitu tipe data yamg memiliki pencacahan dua nilai karakter huruf besar yang valid,
    c. Kesesuaian pola yaitu kumpulan satu atau beberapa pola pada jenis datanya. 
3. Tipe data koleksi
Merupakan tipe data yang digunakan untuk mengelompokkan beberapa nilai. Berikut jenis tipe data koleksi;
    a. Array merupakan tipe data yang menyimpan beberapa elemen atau tipe data yang serupa,
    b. Vector merupakan salah satu tipe data yang sudah disediakan oleh template Standar Template Library (STL),
    c. Map merupakan tipe data yang lumayan mirip dengan array namu  memilki index yang memungkinkan bukan integer.




## Guided 

### 1. [Tipe Data Primitif]

```C++
#include <iostream>
using namespace std;
// Main program
int main()
{
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +, -, *, /
    cin >> op;
    // It allow user to enter the operands
    cin >> num1 >> num2;    // Switch statement begins
    switch (op)
    {
    // If user enter +
    case '+':
        cout << num1 + num2;
        break;
// If user enter -
case '-':
        cout << num1 - num2;
        break;
// If user enter *
case '*':
        cout << num1 * num2;
        break;
// If user enter /
case '/':
        cout << num1 / num2;
        break;
// If the operator is other than +, -, * or /,
// error message will display
default:
        cout << "Error! operator is not correct";
} // switch statement ends
return 0;
}
```
Kode di atas merupakan kode untuk memasukkan operator matematika dengan dua bilangan setelah itu kemudian kode tersebut akan menjalankan nilai yang dimasukkan dengan sesuai operator yang dimasukkan.

#### Output:
![alt text](https://github.com/xyzall1/Struktur-Data-Assigment/blob/master/MODUL%201.%20TIPE%20DATA/pict/Guided1.png?raw=true)
kode di atas akan memeberi perintah kepada user untuk menginput operator dan bilangan untuk dioperasikan namun jika operator tidak ada maka akan menghasilkan Error! operator is not correct



### 2. [Tipe Data Abstrak]

```C++
#include <stdio.h>

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{

    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
```

Kode di atas merupakan kode yang menggunakan tipe data abstrak yang dapat menyimpan beberapa variabel sekaligus dengan memilki tiga variabel yaitu name, addres, hingga age.

#### Output:
![alt text](https://github.com/xyzall1/Struktur-Data-Assigment/blob/master/MODUL%201.%20TIPE%20DATA/pict/Guided2.png?raw=true)
kode di atas akan meghasilkan output berupa kesesuaian nama, addresm hingga age yang sudah di inputkan pada program di atas


### 3. [Tipe Data Koleksi ]

```C++
#include <iostream>
using namespace std;
int main()
{

    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;
    
    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```

Kode di atas merupakan kode yang menggunakan tipe koleksi yang di mana menggunakan array untuk menyimpan beberapa nilai bilangan bulat atau integer.

#### Output:
![alt text](https://github.com/xyzall1/Struktur-Data-Assigment/blob/master/MODUL%201.%20TIPE%20DATA/pict/Guided3.png?raw=true)
Output dari program di atas yaitu kode akan meneyesuaikan antara index dan elemen yang telah dimasukkan pada kode program. untuk lebih jelasnya dapat dilihat pada gambar di atas.


## Unguided 

### 1. [Buatlah Program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif]

```C++
#include <iostream>
#include <cmath> // untuk log10

// Fungsi untuk menghitung faktorial
unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Fungsi untuk menghitung jumlah digit
int digitCount(int n) {
    if (n == 0) {
        return 1;
    } else {
        return (int)log10(n) + 1;
    }
}

int main() {
    unsigned int num;

    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> num;

    std::cout << "Faktorial dari " << num << " adalah: " << factorial(num) << std::endl;
    std::cout << "Jumlah digit dari " << num << " adalah: " << digitCount(num) << std::endl;

    return 0;
}

```
Kode di atas merupakan kode yang menggunakan jenis data primitif serta menggunakan dua fungsi, kode tersebut akan menjalankan perintah untuk memasukkan bilangan bulat genap atau integer positif lalu akan difaktorkan dengan menggunakan 'factorial' dan dicari berapa jumlah digitnya dengan menggunakan 'digitCount'. kesimpulan dari materi tipe data primitif yaitu tipe data yang paling sederhana dan biasanya rentan dipakai dengan menggunakan tipe data yang berbentuk bilangan karena untuk menyelesaikan permaslahan terkait operasi bilangan. 

#### Output:
![alt text](https://github.com/xyzall1/Struktur-Data-Assigment/blob/master/MODUL%201.%20TIPE%20DATA/pict/Unguided%201.png
?raw=true)


Saat dijalankan kode di atas akan meinta user untuk memasukkan bilangan genap postif, maka bilangan yang dimasukkan yaitu 18 dan otomatis program akan mencari faktorial dari 18 yaitu 6402373705728000 dengan jumlah digit bilangan yang dicari yaitu 2 digit.

### 2. [Jelaskan fungsi dari class dan struct secara detail dan diberikan contoh programnya]

Fungsi dari class dan struct;
a. class menggunakan akases private secara default yang memungkinkan bahwa semua variabel dan fungsi yang didefinisikan dalam class akan menjadi pirivate secara default. kita perlu menggunakan kata kunci 'public' atau 'private' untuk mengatur tingkat akses dsri variabel dan fungsi.
b. Struct menggunakan akses public secara deflaut yang berarti bahwa semua variabel dan fungsi yang didefinisikan dalam struct akan menjadi public secara deflaut, kita tidak perlu menggunakan kata kunci 'public' atau 'private' untuk mengatur segala akses dari variabel dan fungsi.
berikut contoh kode programnya;

```C++
#include <iostream>

struct Person {
    std::string name;
    int age;
    double height;

    // Membuat instances dari struct person
    void printDetails() {
        std::cout << "Name: " << name << ", Age: " << age << ", Height: " << height << std::endl;
    }
};

int main() {
    // Memberi nilai ke anggota struct
    Person alin;
    alin.name = "alin omagaa";
    alin.age = 18;
    alin.height = 45;

    Person orel;
    orel.name = "orel omaga";
    orel.age = 75;
    orel.height = 32,5;

    // Menampilkan nilai anggota struct
    alin.printDetails();
    orel.printDetails();

    return 0;
}

```

Kode di atas merupakan kode yang menggunakan 'struct' untuk mendefinisikan 'person' atau dari tipe data kustom yang memilki tiga variabel nama, age, height. kode tersebut menggunakan 'printDetails()' untuk memanggil tiga variabel di atas kemudian untuk per step sudah dijelaskan pada komentar di atas.

#### Output:
![alt text](https://github.com/xyzall1/Struktur-Data-Assigment/blob/master/MODUL%201.%20TIPE%20DATA/pict/Unguided%202.png
?raw=true)


Saat dijalankan maka kode tersebut akan menjalankan inputan yang sudah dimasukkan pada kode seperti nama, age, dan height pada masing-masing nama orang. 

### 3. [Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dan map]

Array ; dapat menyimpan indeks yang dimulai dari nol, hanya dapat meyinmpan dengan tipe data yang sama, memiliki ukuran yang terbatas dan tidak dapat diubah setelah didefinisikan, tidak dapat menyimpan lebih dari satu nilai dengan indeks yang sama.

Map ; menyimpan data dengan kunci yang unik, dapat menyimpan tipe data yang berbeda, dapat berkurang atau bertambah ukurannya secara dinamis, map juga dapat menyimpan lebih dari satu nilai dengan kunci yang sama.

Berikut contoh programnya;
```C++
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
```
Kode di atas menjalankan sebuah program untuk membuat sebuah map dengan kunci berupa string dan nilai berupa integer, kemudian program akan menambahkan beberapa data ke map tersebut dan menampilkan data dari map menggunakan iterator. fungsi 'map<string, int> untuk membuat sebuah map dengan kunci string dan nilai berupa integer selanjutnya untuk fungsi begin() dan end() digunakan untuk mendapatkan iterator untuk memulai serta mengakhiri iterasi dan jangan lupa jika dalam looping kita harus mengunci dengan 'it->first' dengan nilai 'it->second' untuk iterator dapat mengakses setiap elemen.

#### Output:
![alt text](https://github.com/xyzall1/Struktur-Data-Assigment/blob/master/MODUL%201.%20TIPE%20DATA/pict/Unguided%203.png
?raw=true)

Saat dijalankan maka kode tersebut akan menjalankan inputan yang sudah dimasukkan pada kode seperti nama dan umur pada masing-masing nama orang. untuk lebih jelasnya dapat dilihat pada gambar di atas 

## Kesimpulan
Tipe data merupakan kumpulan dari beberapa jenis tipe data, untuk tipe data yang kita bahas ada tiga yaitu primitif di mana tipe data yang paling sederhana (jenis ; integer, float, char, boolean), tipe data abstrak yang di mana dapat kita setting sendiri (jenis; pernyataan konstruktif,penvcacahan nilai, kesesuaian pola) sedangkan tipe data koleksi merupakan tipe data yang digunakan untuk mengelompokkan beberapa nilai (jenis; array, vector,map). untuk penggunaan nya bisa diaplikasikan dengan kebutuhan masing-masing.

## Referensi
[1] N. Dea Rizkita. Algoritma,Tipe Data dan Struktur Data. Lampung: Jurnal Umitra; 2019.
[2] A. S. Putra, “2018 Artikel Struktur Data, Audit Dan Jaringan Komputer; 2018.