# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
1. Pengertian

    Searching merupakan serangkaian langkah atau intruksi yang digunakan untuk memcari elemen atu informasi tertentu di dalam suatu dataset yang di mana tujuannya yaitu menemukan posisi atau keberadaan elemen yang dicari atau dalam algoritma struktur data search dijadikan salah satu teknik penting dalam menyelesaikan berbagai masalah [1]. Atau jika saya berpendapat searching merupakan sebuah proses pencarian untuk nilai tertentu yang dimiliki oleh suatu data lalu pada saat proses pencariannya ini setiap nilai akan dibandingkan tiap-tiap elemen dan array dengan data yang akan kita cari lalu nantinya akan mengambil indeks atau posisi dari data lalu akan diproses dengan perulangan.

2. Jenis

    A. Sequential Search

    Sequential Search merupakan metode searching dapat disebut dengan pencarian lurus (linear search) atau dengan nama lain yaitu pencarian berkelanjutan [2]. Jadi pada metode ini  setiap elemen dalam array akan dibandingkan secara berurutann yang akan dimulai dari elemen pertama sampai elemen yang ingin ditemukan atau semua elemen yang telah dibandingkan. Untuk lebih jelasnya kita berikan contoh seperti di bawah ini.

    ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/65d0b59a-2d0b-401b-8318-0b3bf477c444)

    Pada gambar di atas merupakan proses rangkainan sequential search lalu akan melakukan proses rangkaian pencarian data yang dilakukan secara terurut dan dari indeks ke 0 sampai indeks ke-n pada gambar tersebut terdapat delapan indeks dalam array dan juga terdapat delapan value. Proses yang dilakukan yaitu :

        1. Permintaan pencarian data, yaitu 10 (x=10).
        2. Lalu proses iterasi untuk pencarian data :
            1 = 10(false!)
            2 = 10(false!)
            5 = 10(false!)
            10 = 10 (true) outputnya yaitu "Ada" terdapat pada indeks ke-3
            jika sampai pengurutan data yang terakhir tidak menemukan, maka outputnya yang dihasilkan yaitu "data yang dicari tidak ada" [3]. 

    B. Binary Search 

    Binary Search ialah satu proses algoritma yang digunakan untuk proses pencarian data yang terurut , jika data belum terurut maka harus dilakukan proses pengurutan (sorting) terlebih dahulu yang artinya proses pencarian data tidak akan dapat dilakukan jika data tidak terurut [4]. Binary search sendiri memiliki beberapa prinsip seperti : 

        1. Diambil posisi awal 1 dan posisi akhir = N, kemudian dicari posisi data tengah dengan rumus (posisi awal + posisi akhir)
        2. Data yang dicari dibandingkan dengan data tengah. Jika lenih kecil, proses dilakukan kembali namun posisi terakhir dianggap sama dengan     posisi tengah -1. Jika lebih besar, proses dilakukan kembali namun posisi awal dianggap sama dengan posisi tengah +1 [5].
        3. Demikian seterusnya sampai data tengah sama dengan yang dicari.
    
    



## Guided 

### 1. [Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data]

```C++
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if(data[i] == cari) {
            ketemu = true;
            break;
        }
    }
        cout << "\t Program Sequential Search Sederhana\n" << endl;
        cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}"<< endl;
    if (ketemu) {
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}


```
Program di atas merupakan kode yang akan menjalankan sequential search. Pertama kita seperti biasa menggunakan include <iostream> untuk memulai sebuah program pada bahasa c++ lalu <using namespace std;> untuk kita dapat menggunakan nama-nama dari namespace tanpa harus menulis <std>. Penjelasan dari kode di atas yaitu kodini akan menjalankan untuk mencari nilai <cari> dalam sebuah array atau pada variabel <data> dengan panjang yaitu <n> ;a;u jika nilai pada <cari> ditemukan maka kode akan menampilkan pesan berupa "angka <nila cari> ditemukan tehdap indeks atau indeks ke-<indeks>" sesuai dengan data yang akan pengguna cari, namun jika pemgguna memasukkan angka yang tak termasuk dalam data maka kode akan menjalankan pesan yaitu "<nilai cari> tidak dapat ditemukan pada data".

Penjelasan singkat terhadap kode di atas yaitu <n> akan diinisialisasikan dengan nilai 10 serta array yang dinamai dengan <data> diinisialisasi dengan nilai 10 bialangan bulat lalu variabel <cari> akan diinisialisasikan dengan nilai 10 yang akan di cari terhadap array, lalu variabel <ketemu> akan diinisialisasikan dengan nilai <false> yang akan digunakan apakah nilai pada <cari> sudah ditemukan atau sebaliknya lalu variabel <i> akan diinisialisasikan dengan nilai 0 untuk indeks perulangan. Perulangan sendiri akan dilakukan selama <i> < <n> lalu iterasi akan +1 pada <i>. Setelah itu program akan menjalankan dan memeriksa dengan perulangan. Kode akan menampilkan sebuah data {9, 4, 1, 7, 5, 12, 4, 13, 4, 10} lalu jika kode pada variabel <ketemu> bernilai <true> akan  mencetak pesan yang sudah dibuat begitupun sebaliknya saat nilai <false> lalu kode selesai dan akan mengembalikan nilai 0.

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/b8a4110e-680f-4334-ba47-90b8d166a987)
kode di atas akan menjalankan output berupa tampilan data yang sudah dimasukkan terhadap kode yaitu {9 4 1 7 5 12 4 13 4 10} setelah itu kode akan mencari nilai 10 pada array tersebut merupakan termasuk pada data tersebut atau tidak lalu jika iya maka kode akan mencetak angka tersebut yaitu <10> dengan indeks yang ditemukan dengan kode tersebut yaitu indeks ke-9 atau kode tersebut menjalankan pesan "angka 10 ditemukan pada indeks ke-9".

### 2. [Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search]
```C++
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int Data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for (i = 0; i < 7; i++) {
        min = i;
        for (j = i + 1; j < 7; j++) {
            if (Data[j] < Data[min]) {
                min = j;
            }
        }
        temp = Data[i];
        Data[i] = Data[min];
        Data[min] = temp;
    }
}

void binarysearch() {
    // searching
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 7;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (Data[tengah] == cari) {
            b_flag = 1;
            break;
        }
        else if (Data[tengah] < cari) {
            awal = tengah + 1;
        }
        else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke- " << tengah << endl;
    }
    else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main () {
    cout << "\t BINARY SEARCH " << endl;
    cout << "\n Data : ";

    //tampilkan data awal
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << Data[x];
    }
    cout << endl;

    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";

    // urutkan data dengan selection sort
    selection_sort();

    // tampilkan data setelah diurutkan
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << Data[x];
    }
    cout << endl;

    binarysearch();

    _getche();
    return EXIT_SUCCESS;
}
```
Program di atas merupakan kode yang akan menjalankan binary search. Program ini akan mencari nilai yang dilambangkan dengan <cari> terhadap array <Data> dengan panjang array yaitu 7 lalu jika nilai <cari> ditemukan maka kode akan menampilkan "Data ditemukan pada idex ke-[indeks]" lalu sebaliknya jika tidak maka kode akan menajalankan atau mencetak pesan "Data tidak ditemukan".

Penjelasan dari kode si di atas pertama kita ketikkan library terlebih dahulu untuk input dan output untuk <iostream> lalu ada  <conio.h> untuk input dari pengguna lalu <iomanip> berfungsi untuk format output. Setelah itu variabel <Data> akan diinisialisasikan dengan 7 nilai array lalu variabel <cari> tanpa nilai. Fungsi <selection_sort()> digunakan untuk mengurutkan data dengan cara selection sort begitupun juga dengan <binarysearch()> lalu pada <main()> kode akan menampilkan pesan "BINARY SEARCH" dan "DATA" kode akan menampilkan data awal pada array lalu memerintah pengguan untuk memasukkan data yang akan dicari lalu kode akan menjalankan dengan selection sort dan akan menampilkan data yang sudah diirutkan dan memanggil fungsi <binarysearch()> untuk melakukan pencarian data. Berikutnya kode akan menunggu input dari pengguna dengan <_getche()> dan akan keluar dengan mengembalikan nilai denga, <EXIT_SUCCESS>.

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/24f489b9-1dca-4667-9019-5ff3b50e9354)
Setelah kode dijalankan maka program akan menampilkan data yang terdapat di dalam kode, lalu pengguna akan memasukkan angka yang akan di cari, di sini saya memasukkan angka "4" setelah itu kode akan mengurutkan data terlebih dahulu dan memastikan apakah angka "4" terdapat dalam data tersebut atau tidak. Setelah dijalankan ternyata angka "4" termasuk dalam data tersebut maka kode akan mencetak pesan "Data ditemukan pada index ke- 2" sesuai dengan kode dan indeks. Namun jika angka yang kita masukkan tidak terdapat dalam data maka kode akan menjalankan pesan "Data tidak ditemukan"


## Unguided 

### 1. [Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!]

```C++
#include <iostream>
#include <string>
#include <algorithm>

void binarySearch(const std::string& kalimat, char huruf) {
    // Mengurutkan kalimat
    std::string sortedKalimat = kalimat;
    std::sort(sortedKalimat.begin(), sortedKalimat.end());

    // Inisialisasi indeks awal dan akhir
    int awal = 0;
    int akhir = sortedKalimat.length() - 1;
    int tengah;

    // Iterasi binary search
    while (awal <= akhir) {
        tengah = (awal + akhir) / 2;

        // Jika huruf ditemukan
        if (sortedKalimat[tengah] == huruf) {
            std::cout << "Huruf '" << huruf << "' ditemukan pada indeks " << tengah << std::endl;
            return;
        }
        // Jika huruf pada tengah kurang dari huruf yang dicari, maka cari di bagian kanan
        else if (sortedKalimat[tengah] < huruf) {
            awal = tengah + 1;
        }
        // Jika huruf pada tengah lebih besar dari huruf yang dicari, maka cari di bagian kiri
        else {
            akhir = tengah - 1;
        }
    }

    // Jika huruf tidak ditemukan
    std::cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << std::endl;
}

int main() {
    std::string kalimat;
    char huruf;

    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    std::cout << "Masukkan huruf yang ingin dicari: ";
    std::cin >> huruf;

    binarySearch(kalimat, huruf);

    return 0;
}

```
Kode di atas merupakan sebuah program yang akan menjalankan kode yang akan melakukan pencarian sebuah huruf dalam suatu kalimat menggunakan algoritma binary search. Kode ini akan mencari huruf yang akan dimasukkan pengguna dalam kalimat yang dimasukkan juga oleh pengguna. Jika huruf ditemukan maka kode akan mencetak pesan "Huruf '[huruf]' ditemukan pada indeks [indeks]" namun jika tidak maka akan mencetak pesan "Huruf '[huruf]' tidak ditemukan dalam kaliimat".

Penjelasan dari kode di atas, kita memasukkan beberapa library seperti <iostream> tang berfungsi untuk input dan output lalu <algorithm> digunakan untuk mengurutkan string dan <string> digunakan untuk memanipulasi string. Berikutnya fungsi 'binarySearch()' akan digunakan untuk pencarian dengan binary search pada dua parameter yaitu <kalimat> dan <huruf> selanjutnya pada bagian <main()> akan meminta input kalimat dan huruf yang akan dicari oleh pengguna lalu kode akan mengurutkan kalimat dengan <std::sort()>lalu fungsi akan inisialisasi dengan variabel <awal> dan <akhir> dengan nilai 0 serta panjang kalimat -1 lalu fungsi akan melakukan iterasi binary search. Lanjut Fungsi akan melakukan iterasi binary search hingga awal lebih besar dari 'akhir' dengan setiap iterasi fungsi akan menentukan indeks 'tengah' dari kalimat yang diurutkan, Jika huruf pada indeks tengah sama dengan huruf yang dicari, maka fungsi akan menampilkan pesan "Huruf '[huruf]' ditemukan pada indeks [indeks]" dan kemudian keluar. jika kurang maka fungsi akan mencari huruf yang dicari di bagian kanan dari indeks 'tengah' lalu jika lebih besar maka fungsi akan dicari di bagian kiri dari indeks 'tengah'. Lalu jika huruf tidak ditemukan setelah iterasi selesai maka fungsi akan mencetak pesan "Huruf '[huruf]' tidak ditemukan dalam kalimat."

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/c0af5ea6-71a5-49f5-9fce-6e49d53a6c0a)
Saat dijalankan kode trsebut langsung memerintahkan pengguna untuk memasukkan kalimat yang diminta dengan tampilan pesan "Masukkan kalimat" lalu saya di sini memasukkan kalimat "Manusia Biasa" dan setelah itu kode akan menjalankan pesan di mana pengguna akan disuruh mengetikkan huruf apa yang akan dicari dengan pesan "Masukkan huruf yang ingin dicari" saya di sini mencoba untuk memasukkan huruf "u" dan setelah di cek huruf "u" termasuk hruruf dalam kalimat yang saya masukkan lalu kode akan menajalankan pesan "Huruf 'u' ditemukan pada indeks 12". Namun jika huruf yang dimasukkan tidak terdapat dalam kalimat maka kode akan menjalankan pesan "huruf '[huruf]' tidak ditemukan dalam kalimat.

### 2. [Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!]

```C++
#include <iostream>
#include <string>
#include <algorithm>

// Fungsi untuk menghitung jumlah huruf vokal dalam sebuah kalimat
int countVowels(const std::string& sentence) {
    int count = 0;
    // Mengubah kalimat menjadi huruf kecil untuk menangani kasus huruf besar dan kecil
    std::string lowercaseSentence = sentence;
    std::transform(lowercaseSentence.begin(), lowercaseSentence.end(), lowercaseSentence.begin(), ::tolower);

    // Memeriksa setiap huruf dalam kalimat dan menghitung huruf vokal
    for (char c : lowercaseSentence) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    std::string kalimat;

    std::cout << "Masukkan kalimat : ";
    std::getline(std::cin, kalimat);

    int jumlahVokal = countVowels(kalimat);

    std::cout << "Jumlah Huruf Vokal Pada Kalimat Yaitu : " << jumlahVokal << std::endl;

    return 0;
}

```

Kode di atas merupakan sebuah program yang akan menghitung banyaknya huruf voka; (a,i,u,e,o) dalam sebuah kalimat.Pada kode di atas kita akan menggunakan library <iostream> untuk input dan output lalu <string> untuk manipulasi string lalu <algorithm> untuk mengubah kalimat menjadi huruf kecil. Berikutnya fungsi <countVowels()> digunakan untuk menghitung banyaknya huruf vokal dalam sebuah kalimat lalu fungsi ini memerlukan satu parameter, yaitu <sentence> kemudian di bagian <main()> kode akan meminta input dari pengguna. Kemudian fungsi akan memanggil inputan pengguna dengan <countVowels()> dengan parameter <kalimat> lalu fungsi <countVowels()> akan mengubah kalimat menjadi huruf kecil dengan menggunakan fungsi <std::transform()> dan <::tolwer()>, kemudian fungsi akan melakukan iterasi pada setiap huruf dalam kalimat, kemudian fungsi akan memeriksa huruf vokal yang terdapat pada kalimat. Jika huruf tersebut adalah huruf vokal, maka fungsi akan +1 ke variabel <count> dan setelah iterasi selesai fungsi akan mengembalikan nila <count> lalu pada bagian <main()> kode akan menampilkan jumlah huruf vokal.



#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/2577cfce-2873-44c2-86a3-075f29fe60e9)
Saat dijalankan maka kode tersebut akan menjalankan ouputan yang memerintah pengguna untuk memasukkan kalimat, di sini saya memasukan kalimat "Alin adalah anak prodi sains data ITTP" dengan lalu kode akan menjalankan dan langsung menghitung berapa jumlah huruf vokal yang terdapat dalam kalimat tersebutdengan mencetak pesan "Jumlah Huruf Vokal Pada Kalimat Yaitu :" dan dapat ditemukan yaitu 14 jumlahmya.



### 3. [Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!]

```C++
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

```
Kode di atas merupakan kode untuk melakukan pencarian sebuah bilangan yang sudah disediakan pada data array menggunakan sequential search. Penjelasan kode tersebut seperti kita menggunakan variabel <n> yang diinisialisasikan dengan nilai 10 dan array <data> yang juga diinisialisasikan lalu kita gunakan variabel <cari> untuk inisialisasi dengan nilai 4 yang merupakan bilangan yang dicari dalam array lalu kita gunakan variabel <count> yang juka diinisalisasikan dengan nilai 0 yang kemudian digunakan untuk menghitung jumlah kemunculan bilangan <cari> dalam array kemudian variabel i diinisialisasi dengan nilai 0, yang digunakan sebagai indeks pada perulangan dan selama i < n pada setiap perulangan, program akan memeriksa apakah bilangan pada indeks i sama dengan bilangan cari dan jika bilangan pada indeks i = <cari> maka variabel <count> akan +1. Berikutnys saat perulangan selesai kode akan mencetak pesan "Program Sequential Search Sederhana" dan "Data :{9, 4, 1, 7, 5, 12, 4, 13, 4, 10} lalu pada variabel <count> yang lebih dari 0 maka kode akan menjalankan pesan "Angka [cari] Ditemukan Sebanyak [count] Kali." Jika tidak, maka kode akan menjalankan "[cari] Tidak Dapat Ditemukan Pada Data.".

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/aea423c1-dd97-4218-8af5-b37009cf90df)
Pada Output di atas kode akan langsung menampilakan data yang sudah dimasukkan dalam kode yaitu {9, 4, 1, 7, 5, 12, 4, 13, 4, 10} lalu sesuai yang diminta oleh kode yang akan mencari jumlah angka 4 ditemukan berapa kali lalu kode akan menjalankan pesan "Angka 4 Ditemukan Sebanyak 3 Kali.".

## Kesimpulan
Searching merupakan serangkaian langkah atau intruksi yang digunakan untuk memcari elemen atu informasi tertentu di dalam suatu dataset yang di mana tujuannya yaitu menemukan posisi atau keberadaan elemen yang dicari atau dalam algoritma struktur data search dijadikan salah satu teknik penting dalam menyelesaikan berbagai masalah [1]. Searching sendiri memiliki dua jenis yaitu sequential searching dan binary searching namun dari kedua macam tersebut memiliki perbedaan signifikan yang langsung mudah diingiat yaitu sequential search merupakan algoritma yang kerjanya harus mengecek satu persatu elemen yang akan dicari dan memerlukan waktu yang lebih lama sedangkan binary search yaitu pencariannya dilakukan dengan cara membagi array menjadi bagian-bagian elemen hingga elemen yang ditemukan namun harus mengurutkan array terlebih dahulu namun tetap tingkat efesiensi waktu yang baik yaitu binary search.

## Referensi
[1] Sitorus, Lamhot, “Algoritma dan Pemrograman”, Andi, Yogyakarta, 2015.

[2] F. Teknik and U. Muhammadiyah, “Penerapan Algoritma Squential Search With Sentinel Pada Aplikasi Katalog Buku Perpustakaan”, vol. 17, no. 2, pp. 15–19, 2021.

[3] W. S. Wafiqah, A. Septi, dan R. Ben, "Penggunaan Algoritma Sequential Searching pada Aplikasi Perpustakaan Berbasis Web", vol. 7, no. 2, pp.294-302, 2022.

[4] S. D. J. Bernad, Y. Ade, T. J. Nancy, "Implementasi Algoritma Binary Search pada pencarian Data Jemaat Gereja HKBP Manado", vol. 9, no. 1, pp. 18-23, 2022. 

[5] O. Onsardi, M. Muntahanah, R. Toyib, "Penerapan Algoritma Binary Search dalam Pencarian Data Potensi Investasi di Kabupaten Seluma dengan Smartphone", vol. 3, no. 3, pp. 129-136, 2020.
