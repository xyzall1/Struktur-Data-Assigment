# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
1. Pengertian
Array atau dapat disebut dengan sebuatan larik merupakan sebuah koleksi pada data di mana setiap elemen memakai nama yang sama serta bertipe dan setiap elemen dapat diakses dengan membedakan indeks arraynya. setiap rinci data deisebut dengan elemen array serta setiap array dapat dijalankan mengguankan elemen yang disebut dengan indeks. Jadi pada setiap array yang digunakan untuk menyajikan sekumpulan data yang bertipe sama dan disimpan dengan urutan yang sesuai serta kontinu [1]. Untuk mudah mengingat kita dapat menyebutkan bahwa setiap elemen atau anggota larik dapat dikenali atau diakses melalui suatu indeks, array yang berdimensi satu disebut dengan vektor kemudian dua disebut matriks lalu yang berdimensi lebih dari duan disebut dengan tensor [3]. Disamping itu dalam penggunaan array kita harus memperhatikan pendeklarasian tipe data array, nama variabel array serta subskrip atau indeks array.

2. Fungsi Array
Fungsi pertama untuk array yaitu fungsi pada pengurutan seperti quicksort dan mergesort untuk menyusun kembali elemen-elemen array secara berurutan naik atau turun, kemudian dapat difungsikan untuk pencarian berlaku untuk menemuksn elemen atau melakukan pencarian tertentu dalam array jadi fungsi ini dapat mengoptimalkan operasi pencarian serta meningkatkan kecepatan dan efesiensi pemrosesan array, kemudian yang terakhir fungsi transformasi di mana fungsi ini diterapkan pada setiap elemen array, fungsi ini menerapkan fungsi matematika pada setiap elemen atau menemukan jumlah atau produk dari semua nilai array [2]. 

3. Karakteristik Array
mempunyai batasan dari pemesanan alokasi memory (bersifat statis), mempunyai tipe data sama (bersifat homogen), dapat diakses secara acak.

Ketiga hal di atas merupakan hal yang harus selalu diperhatikan dalam teori tentang array, hal lain yang perlu kita perhatikan yaitu tentang jenis array yang akan dibahas pada literatur di bawah.

1. Array Satu Dimensi
Array satu dimensi merupakan salah satu bentuk array yang paling sederhana dari array dengan elemen disimpan secara linier dan dapat diakses secara individual lalu menentukan nilai indeks pada setiap elemen yang disimpan dalam array.
2. Array Dua Dimensi
Array dua dimensi merupakan array yang terdiri dari n buah baris dan m buah kolom, atau array dua dimensi juga biasa disebut sebagai array yang mempunyai dua subskrip yaitu baris dan kolom.
3. Array Multidimensi
Array multidimensi yaitu array yang memilki lebih dari satu subskrip, dalam penulisan array multidimensi biasanya terdapat pemsaukan data serta penampilan data yang terjadi secara berulang, di mana perulangan pertama sebagai identifikansi baris dan perulangan kedua sebagai identifikasi kolom.
3. Array Empat Dimensi
Array empat dimensi yaitu array yang memiliki empat tingkat dimensi atau indeks, array dengan jenis ini sering digunakan dalam konteks di mana data tersusun dalam struktur yang kompleks.
4. Array Lima Dimensi
Array lima dimensi merupakan array yang memilki lima tingkat dimensi atau indeks, biasanya array lima dimensi sering digunakan dalam konteks di mana data sangat kompleks.










## Guided 

### 1. [Program Input Array Tiga Dimensi]

```C++
#include <iostream>
using namespace std;
//PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    //Deklarasi array
    int arr[2] [3] [3];
    //input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array! [" << x << "] [" << y << "] [" << z << "] = ";
                cin >> arr [x] [y] [z];
            }
        }
        cout << endl;  
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
            cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
         }
    }
    cout << endl;
    //Tampilan array
    for (int x=0; x < 2; x++)
    {
        for (int y=0; y < 2; y++)
        {  
            for (int z=0; z < 2; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
    cout << endl;
    }
}

```
Program di atas merupakan program yang menampilkan array tiga dimensi. Seperti biasa karena kita menggunakan bahasa c++ jadi kita memulai dengan library 'iostream', lalu diikuti dengan membuat fungsi dengan main(), kode di atas akan membuat array dengan tiga dimensi dengan ukuran 2x3x3 yang berarti dua slice lalu setiap slice memiliki tiga layer dan setiap layer memiliki tiga elemen. lalu program dilanjutkan dengan memasukkan elemen ke dalam array dengan mengguanakan loop yang kan mengulangi semua dimensi array serta meminta input dari user dan program tersebut juga akan menampilkan elemen yang dimasukkan dengan menggunakan loop yang akan mengulangi semua dimensi array dan menampilkan setiap elemen.

#### Output:
(![Cuplikan layar 2024-03-25 094526](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/b9027efa-93dd-41f8-8424-60f6fa3b79a3)
)
kode di atas akan menjalankan output berupa permintaan untuk memasukkan elemen kepada user yang di mana nilainya untuk setiap indeks dari array tiga dimensi pada "Input Array! [0] [0] [0] =". Lalu setelah semua elemen diinput maka program akan menampilkan kembali semua elemen dengan format "Data Array "[x] [y] [z]="
Lalu kode nantinya akan menjalankan serta menampilkan arrray dengan format yang lebih rapih dengan bentuk 2x2x2. 


### 2. [Program Mencari Nilai Maksimal pada Array]

```C++
#include <iostream>
using namespace std;

int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ":";
        cin >> array[i];
    }
    maks = array[0];
    for (i =0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```

Kode di atas merupakan kode yang dibuat untuk menampilkan nilai maksimal pada array. Seperti biasa saat menggunakan c++ kita menggunakan library 'iostream' lalu mebuat fungsi dengan main()
lalu program akan kita buat untuk mengarahkan user memasukkan panjang array yang diingankan, kemudian saat panjang array sudah diproses maka program akan melakukan looping dengan meminta user memasukkan data array lalu program akan mencari nilai maksimum serta menampilkan lokasi indeksnya.
#### Output:
![Cuplikan layar 2024-03-25 102205](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/a8f592eb-4135-4d33-b2f7-18b20cbb9b68)
Setelah kode dijalankan maka program akan meminta user untuk memasukkan panjang array, di sini saya memasukkan 4 untuk panjang arrray, lalu memasukkan 2,5,7,8 untuk elemen array dan dari bilangan yang diinputkan maka akan dicari nilai maksimum yaitu 8 dan nilai maksimum tersebut merupakan array pada posisi ke 3.


## Unguided 

### 1. [Buatlah Program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!]

```C++
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

```
Kode di atas merupakan sebuah program yang akan mencetak elemen-elemen dari sebuah array dan kemudian memisahkan antara bilanagna genap dan bilangan ganjil. Kita menggunakan library 'iostream' lalu kita akan deklarasikan variabel 'dataArray' yaneg merupakan sebuah array dan dininsialisasi denga 10 buah bilangan bulat, lalu deklarasikan variabel 'length' dan mrnghitungan panjang array dengan 'dataArray' menggunakan operator 'sizeof' serta hasilnya nanti akan disimpan pada variabel 'length' lalu kode akan menjalankan loop untuk memeriksa setiap elemen dari 'dataArray' dan mencetak bilangan genap jika elemen tersebut habis dibagi dua lalu mengguanakan loop untuk memeriksa setiap elemen dari 'dataArray' dan mencetak bilangan ganjil jika elemen tersebut tidak habis dibagi dua.

#### Output:
![Cuplikan layar 2024-03-25 111518](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/3de07824-2b07-4c68-b72e-417ffb538f69)
Saat dijalankan kode trsebut langsung akan menampilkan data array yang sudah ditampilkan pada kode yaitu (1,2,3,4,5,6,7,8,9,10). Lalu kode akan menampilkan nomor genap pada elemen array di atas lallu dihasilkan (2,4,6,8,10) dan untuk nomor ganjil dihasilkan (1,3,5,7,9).

### 2. [Buatlah program input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemnya diinputkan oleh user]

```C++
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

```

Kode di atas merupakan kode yang akam membuat array tiga dimensi namun sesuai dengan inpuan user. Seperti biasanya kita masukkan library 'iostream' lalu membuat suatu fungsi dengan main(). Selanjutnya kita akan mendeklarasikan variabel dengan 'arr' yang akan diinisialisasi dengan variabel jumlah baris, kolm, panjang. Selanjutnya user akan diminta mamasukkan jumlah baris, kolom ,panjang setelah user menginput maka kode akan menjalankan looping dengan menggunakan variabel tersebut. Lalu kode akan menjalankan perulangan nested dengan dimensi array yang akan disimpan ke 'arr[x] [y] [z]'.

#### Output:
![Cuplikan layar 2024-03-25 105054](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/20c2a26e-a921-4eb6-a382-8145b716d243)
Saat dijalankan maka kode tersebut akan memerintah user untuk memasukkan jumlah baris yang di mana pada perocbaan ini saya memasukkan 3 untuk jumlah baris, lalu memasukkan jumlah kolom yaitu 2 dan memasukkan jumlah panjang yaitu 3. Kemudian kode tersebut akan menjalankan perintah untuk user untuk input elemen array. Setelah itu Array akan ditampilkan dengan rapi dengan elemen yang sudah diinputkan.

### 3. [Buatlah program menu untuk mencari nilai maksimum, minimum dan nilai rata-rata dari suatu array dengan input yang dimasukan oleh user!]

```C++
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


```
Kode di atas merupakan kode untuk mencari nilai makksimum, minimum, dan rata-rata. Program di atas akan meminta user untuk memasukkan jumlah elemen array kemudian ukuran sesuai dengan jumlah elemen tersebut lalu akan mencari nilai minimum, maksimum, dan rata-rata pada elemen yang dimasukkan. Saat user memasukkan inputan elemen setelahnya program akan menjalankan inisalisasi variabel untuk menyimpan nilai maksimum, minimum, dan total. Lalu kode menjalankan looping sesuai dengan jumlah elemen serta akan membandingkan setiap elemen dengan nilai maksimum dan minimum serta hapus jika benar lalu setelah itu kode akann menjalankan menambahkan setiap elemen ke total. setelah itu baru akan didapatkan nilai yang diminta.

#### Output:
![Cuplikan layar 2024-03-25 103622](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/ed3dffa5-a94c-45d8-b75e-9c600399ebca)
Saat dijalankan kode tersebut akan langsung memerintah user untuk memasukkan jumlah elemen array. Di sini saya memasukkan 5 untuk jumah elemn array lalu kita akan diperintah untuk memasukkan elemen pertama hingga elemen kelima. Setelahnya kode akan menjalankan kode yang akan menghasilkan nilai maksimum dari array di atas yaitu 8 lalu nilai minimum yaitu 2 dan rata-rata dari array tersebut yaitu 5,6.

## Kesimpulan
Hal yang dapat kita simpulkan pada materi array kali ini yaitu, array memiliki pengertian sebagai larik koleksi pada data di mana setiap elemen memakai nama yang sama serta bertipe dan setiap elemen dapat diakses dengan membedakan indeks arraynya. Kemudian dalam penggunaan array kita harus memperhatikan pendeklarasian tipe data array, nama variabel array serta subskrip atau indeks array. Selanjutnya array memiliki fungsi untuk pengurutan, pencarian, dan transformasi. Hal yang perlu diingat bahwa array memiliki karakteristik beruta batasan memory (bersifat statis), mempunyai tipe data yang sama lalu dapat diakses secara acak. Kemudian yang terakhir array memiliki berbagai macam jenis seperti satu dimensi, dua dimensi, tiga dimensi, empat dimensi, lima dimensi dan multidimensi.


## Referensi
[1] N. Charibaldi, "Modul Kuliah Algoritma Pemrograman II," Edisi Kedua, Yogyakarta, 2004.

[2] D.B.A Kizi dan B.D. Irmatova., USE OF DIFFERENT ALGORITHMS AND APPLICATION OF SOFTWARE PRODUCT CREATION SEQUENCES IN ORGANIZING COMPLEX STRUCTURED PROJECTS //Educational Research in Universal Sciences. – 2023. – Т. 2. – NO. 11. – С. 170-173.

[3] H. Ellis., S. Sartaj., dan R. Sanguthevar, "Computer Algorithms / C++," Computer Science Press, 1998.
