# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
1. Pengertian
Pengurutan (sorting) yaitu suatu proses mengurutkan data dengan suatu aturan tertentu , sehingga akan tersusun secara teratur sesuai dengan aturang yang berlaku [1].Pengurutan ini dapat dilakukan dengan cara ascending dan discending serta digunakan juga untuk mengururtkan daya yang bertipe angka atau karakter. Atau hal lain juga dapat dikatakan bahwasanny sorting merupakan proses pengurutan data yang sebelumnya disususn secara acak atau tak teratur menjadi urut. Pengururtan dapat dilakukan dengan metode ascending atau nilai terkecil hingga terbesar maupun juga sebaliknya yaitu disebut dengan descending yaitu dari nilai terbesar ke nilai terkecilnya.

2. Jenis Sorting
A. Selection Sort, yang merupakan metode pengurutan yang membandingkan elemen yang sekarang dengan elemen berikutnya sampai ke elemen yang terakhir. Lalu jika ditemukan elemen lain yang lebih kecil dari elemen sekarang maka dicatat posisinya dan langsung ditukar. Atau dengan kata lain Metode selection Sort merupakan pemilihan dari suatu nilai yang terkecil dan kemudian menukarnya dengan elemen paling awal, lalu membandingkan dengan elemen yang sekarang dengan elemen-elemen berikutnya samapai dengan elemen terakhir, perbandingan dilakukan terus-menerus sampai tidak ada lagi pertukaran data [2]. Metode selection sort memilih nilai minimum kemudian bertukar dengan item pertama lalu bandingkan berikutnya hingga tidak ada pertukaran [5].

B. Bubble Sort, yang merupakan suatu algoritma pengurutan sederhana yang digunakan untuk mengurutkan data-data dalam sebuah array [3]. Algoritma ini akan berkerja dengan cara membandingkan nilai tiap elemen array dengan elemen array berikutnya serta menukar nilainya jika sesuai dengan kondisi yang diperoleh terpenuhi. Proses ini akan terus berulang hingga seluruh elemen array dalam tabel yang telah diproses urut. Pengurutan dengan metode ini dapat dikatakan paling lambat dan paling tidak efesien dibandingkan dengan elemen pengurutan lain yang umum digunakan. Bahkan dalam kasus terbaik (yaitu list sudah terurut), kompleksitas algorita pengurutan gelembung yaitu O(n). Namun dalam kasus umum kompleksitas metode ini yaitu O(n^2). Dengan unterval data antara 100 sampai 1000 elemen dengan waktu eksekusi  dengan satuan second (s) [4].

C. Insertion Sort, yang merupakan metode pertengahan artinya metode ini memiliki kecepatan rata-rata antara metode primitif (bubble dan selection) dan modern (merge dan quick). Lalu metode ini didasarkan terhadap sebuah kunci yang diambil terhadap elemen kedua pada sebuah larik, lalu meyisipkan elemen tersebut jika kondisi percabangan terpenuhi. Metode Penyisipam ini bertujuan untuk menjadikan bagian sisi kiri larik terurutkan sampai dengan seluruh larik berhasil diurutkan. Kompleksitas Insertion sort sendiri yaitu kondisi terbaik (best case) tercapai jika data telah terurut. Hanya satu perbandingan dilakukan untuk setiap posisi i, sehingga terdapat n-1 perbandingan, atau O (n)^6.

3. Kompleksitas waktu 
A. Bubble Sort, kompleksitas waktu untuk bubble sort yaitu O(n^2) di mana jumlah elemen dalam array yang diurutkan karena Bubble Sort memiliki dua nested loop yang di mana satu loop luar untuk mencari semua elemen array dan satu loop untuk membandingkan dan menukar elemen-elemen yang tidak terurut.
B. Selection Sort, kompleksitas waktu untuk selection sort yaitu O(n^2). Dalam hal ini iterasi pada loop luar akan mencari elemen terkecil dari bagian tidak terurut dari array dan menukarnya dengan elemen pertama dari bagian tidak terurut tersebut. Dengan cara ini, setiap iterasi loop luar akan memindahkan elemen terkecil ke posisi yang sesuai dalam array.
C. Insertion Sort, kompleksitas waktunya yaitu O(n^2) di mana n merupakan jumlah elemen dalam array yang diurutkan. Meskipun Insertion Sort memilki performa yang lebih baik daripada Bubble Sort atau Selection Sort dalam kasus tertenu, seperti pada array yang hampir terurut maka kompleksitas waktu terburuknya tetap O(n^2)


## Guided 

### 1. [Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort]

```C++
#include <iostream>

using namespace std;

void bubble_sort(double arr[], int length) {
    bool not_sorted = true;
    int j=0;
    double tmp;

    while (not_sorted) {
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr [i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }// end of if
        }// end of for loop
    }// end of while loop
}//end of bubble_sort

void print_array(double a[], int length) {

    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {

    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99,99};

    cout << "Urutan bilangan sebelum sorting : " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting : " << endl;
    print_array(a,length);

}

```
Program di atas merupakan kode yang mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort. Pertama kita menggunakan include <iostream> untuk memulai kkode c++ lalu kita ketikkan 'using namespace std;' yang digunakan untuk menuliskan std dalam kode ini lalu kita membuat fungsi dengan 'void' untuk mengurutkan array bilangan double dengan kode 'void bubble_sort(double arr[], int length)' kemudian kita akan mengecek apakah array urut atau tidak dengan 'bool nilaiTidakTerurut = true;' jika belum maka kita akan mengurutkan dengan penukaran 'indeksPenukaran++;'. Kemudian kode selanjutkan akan menjalankan perulangan.

Kemudian kita membuat fungsi untuk mencetak isi array dengan void 'void print_array(double a[], int length)'. Berikutnya kita akan ketikkan eleemen double array yang akan kita sorting. Lalu kode akan menjalankan urutan bilangan sebelum dan sesudah sorting.

#### Output:
![Cuplikan layar 2024-04-01 093113](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/c71c857b-019c-40a2-a90f-451816966cce)
kode di atas akan menjalankan output berupa urutan bilangan sebelum dan sesudah di sorting. Pada sebelum bikangan di sorting seperti : 22,1 15,3 8,2 33,21 99 lalu urutan bilangan setelah sorting seperti 8,2 15,3 22,1 23,21 99.

Kompleksitas waktu dalam kode di atas yaitu O(n^2) dikarenakan n adalah panjang array yang akan diurutkan serta bubble sort akan melakukan perbandingan antara setiap elemen dengan elemen lainnya, jadi terdapat n elemen, lalu akan dilakukan n-1 perbandingan lain daripada itu bubble sort juga akan melakukan pergeseran elemen yang diperlukan setelah perbandingan. Sedangkan kompleksitas ruangnya berupa O(1) karena algoritma hanya butih ruang yang terbatas untuk menyimpan beberpa variabel dan tidak bergantung terhadap panjang array yang akan diurutkan.


### 2. [Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort]

```C++
#include <iostream>
using namespace std;

void insertion_sort(char arr[], int length) {
     int i, j;
    char tmp;
    
    for (i = 1; i < length; i++) {
            j = i;
        
        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}
void print_array(char a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
 
    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);
 
    insertion_sort(a, length);
 
    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}
```

Kode di atas merupakan kode yang dibuat untuk mengurutkan karakter secara descending menggunakan algortima Insertion Sort. Awalnya kita menggunakan 'include <iostream>' untuk memulai kode pada bahasa program c++ lalu kita akan menggunakan'using namespace std;' yang merupakan fungsi yang dimasukkan jika pada kode terdapat std lalu kita akan membuat sebuah fungsi dengan void().

Fungsi void() pada kode di atas yaitu kode yang menjalanakan untuk mengurutkan arrat dengan metode insertion sort dengan menggunakan variabel i dan j. Variabel 'tmp' di sini diguanakan untuk menukar nilai lalu kita akan membandingkan nilai dengan while dengan mengurangi indeks 'j--' lalu kode akan menjalankan perulangan. Lalu saat void print array() sebagai fungsi untuk mencetak isi array kemudian int length() untuk menentukan panjang array lalu char a[length] utuk menyimpan karakter. Berikutnya 'out << "......" << endl;' untuk tampilan kemudian kode akan memanggil insertion sort dengan 'insertion_sort(a, length)' serta kode akan menampilkan atau mencetak hasil dengan kode 'cout << "\nUrutan karakter setelah sorting: " << endl print_array(a, length);' dan jangan lupa untul 'return 0' untuk pemberhentian looping.

#### Output:
![Cuplikan layar 2024-04-01 100241](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/14514216-f3fb-42d5-90ee-973e336cff07)
Setelah kode dijalankan maka program akan menampilkan urutan karakter sebelum disorting yautu berupa 'c f a z d p' kemudian karakter setelah di sorting yaitu berupa 'z p f d c a'.

Kompleksitas waktunya yaitu O(n^2) di mana n merupakan panjang array yang akan diurutkan sebab setiap iterasi for loop kode ini akan melakukan compar antara semua elemen yang sudah diurutkan. Kemudian kompleksitas ruang berupa O(1) karena kode tersebut membutuhkan ruang yang terbatas serta hanya beberapa variabel sementara alokasi memori bergantung juga terhadap array, hal ini dapat dilihat beberapa variabel sementara seperti i, j, dan tmp tak ada alokasi memeori dengan panjang array.


## Unguided 

### 1. [Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!]

```C++
#include <iostream>
using namespace std;

// fungsi untuk mengurutkan array dari tipe float menggunakan algoritma Selection Sort
void selectionSort(float arr[], int n) {
    // iterasi melalui array, mulai dari elemen yang pertama
    for (int i = 0; i < n-1; i++) {
        // asumsikan bahwa nilai minimum adalah elemen pertama dari bagian yang belum disortir
        int minIndex = i;
        // iterasi 
        for (int j = i+1; j < n; j++) {
            // kalau elemen saat ini lebih besar dari elemen berikutnya
            if (arr[j] > arr[minIndex]) {
                // perbarui indeks minimum jadi indeks dari elemen yang lebih besar
                minIndex = j;
            }
        }
        // tukar nilai minimum yang ada di bagian belum disortir dengan elemen pertama dari bagian belum disortir
        swap(arr[minIndex], arr[i]);
    }
    // print keterangan
    cout << "URUTAN IPS MAHASISWA DARI TERBESAR HINGGA TERKECIL" << endl;
    cout << "==================================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "IPS " << i+1 << " : " << arr[i] << endl;
    }
}

int main() {
    // menjelaskan array menggunakan float
    float IPS[5] = {3.8, 2.9, 3.3, 4.0, 2.4};
    // hitung ukuran dari array
    int size = sizeof(IPS)/sizeof(IPS[0]);
    // panggil fungsi selectionSort untuk mengurutkan array secara menurun
    selectionSort(IPS, size);
    // return 0 jika program berhasil 
     return 0;
}

```
Kode di atas merupakan sebuah program yang akan menjalankan kode sorting dengan metode Selection Sort. Seperti biasanya kita menggunakan <iostream> sebelum memulai kode cpp. Kita awali dengan membuat fungsi void yang merupakan fungsi yang digunakan untuk melakukan kode tanpa mengembalikan nilai.

Pada kode ini '(int i = 0; i < n-1; i++)' kita akan melakukan iterasi melalui array, mulai dari elemen yang pertama, kemudian kita akan asumsikan nilai yang terkecil pada elemen pertama sebelum disortir menggunakan kode 'int minIndex = i; dan for (int j = i+1; j < n; j++)', berikutnya kita akan sortir dengan metode selection sort dengan catatan jika elemen saat ini lebih besar dari elemen berikutnya maka tukar dengan perintah kode  if 'arr[j] > arr[minIndex]' 'minIndex = ' 'swap arr[minIndex], arr[i]' selanjutnya kita akan menambahkan keterangan opsional dengan kode 'cout << "URUTAN IPS MAHASISWA DARI TERBESAR HINGGA TERKECIL" << endl;' Selanjutnya kita akan mencetak output dengan menggunakan kode ini 'for (int i = 0; i < n; i++) cout << "IPS " << i+1 << " : " << arr[i] << endl'

Tidak lupa kita juga akan memberi inputan IPS yang akan dijalankan dengan data yang bertipe float float IPS[5] = {3.8, 2.9, 3.3, 4.0, 2.4}; yang berjumlah lima elemen atau [5] selanjutnya kita akan melakukan perhitungan untuk mengurutkan array dengan metode pembagian lalu kita panggil array yang sudah dipanggil dengan kode 'selectionSort(IPS, size)' serta yang terakhir jangan lupa untuk mengetikkan 'return 0' jika kode berhasil.

#### Output:
![Cuplikan layar 2024-04-01 070715](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/c07b7f3c-4f42-4ef3-9dd6-5d4978e587db)
Saat dijalankan kode trsebut langsung akan menampilkan data IPS Mahasiswa dari terbesar hingga terkecil sesuai dengan kode dan soal yang diberikan. Output akan menjelaaskan bahwasannya tingkat IPS 1 atau IPS yang tertinggi yaitu 4, lalu dilanjutkan IPS 2 dengan 3.8 dan seterusnya hingga IPS yang paling kecil yaitu IPS 5 dengan 2,4.

Kompleksitas waktu dari kode tersebut yaitu O(n^2), singkat saya jelaskan di mana n yaitu ukuran dari array. Dikarenakan adanya perulangan for di dalam fungsi 'selectionSort' yang memiliki kompleksitas waktu O(n) sendiri-sendiri atau O(n) x O(n) lalu totalnya O(n^2).
Untuk kompleksitas ruang sendiri yaitu O(1) karena penggunaan ruang tidak bergantung terhadap ukuran array, hal ini disebabkan penggunaan variabel lokal dan fungsi yang tak menggunakan variabel global sehingga jumlah memori yang dibutuhkan tak akan bertambah bila array bertambah besar.

### 2. [Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!]

```C++
#include <iostream>
#include <string>

int main() {
    // Deklarasi nama-nama warga 
    std::string nama[10] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    // Menggunakan Metode Algoritma Bubble Sort
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            // Membandingkan dua nama yang berurutan
            if (nama[j] > nama[j + 1]) {
                // Jika nama yang lebih besar, tukar posisi
                std::string temp = nama[j];
                nama[j] = nama[j + 1];
                nama[j + 1] = temp;
            }
        }
    }

    // Menambahkan keterangan pada kode yang dihasilkan
    std::cout << "Daftar Nama Warga RT yang Urut Berdasarkan Abjad" << std::endl;
    std::cout << "================================================" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << i + 1 << ". " << nama[i] << std::endl;
    }

    return 0;
}
```

Kode di atas merupakan sebuah program yang akan menjalankan kode sorting dengan metode Bubble Sort. Seperti biasanya kita menggunakan <iostream> dan include <string> karena tipe data yang akan kita gunakan untuk kode ini merupakan string untuk sebelum memulai kode cpp. Sebelumnya kita akan menggunakan fungsi 'int main' terlebih dahulu untuk menjalankan program yang biasanya harus dikembalikan ke dalam sebuah integer.

Lalu kita masuk pada pembahasan kode seperti dimulai untuk deklarasi menggunakan array yang di mana elemennya berisi daftar nama warga RT 'std::string nama[10] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};' lalu kita akan menjalankan metode Bubble Sort dengan menjalankan kode ini 'for (int i = 0; i < 10; i++) dan for (int j = 0; j < 10 - i - 1; j++)' kemudian kode ini 'if (nama[j] > nama[j + 1])' untuk menukar abjad nama yang lebih dahulu lalu dengan mengurutkan serta jika sudsh benar maka data akan terurut. Selanjutnya kita akan menambahkan keterangan output pada kode dengan 'std::cout << "......" << std::endl;'. Berikutnya kode akan mencetak dengan 'for (int i = 0; i < 10; i++) std::cout << i + 1 << ". " << nama[i] << std::endl;' jika kode sudah berhasil maka 'return 0' untuk memberhentikan kode.
    



#### Output:
![Cuplikan layar 2024-04-01 075303](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/ebacd94b-806a-4b1d-b29a-8de226f3ce12)
Saat dijalankan maka kode tersebut akan menjalankan ouputan dengan keterangan 'Daftar Nama Warga RT yang ururt Berdasarkan Abjad' lalu hasilnya langsung ururt berdasarkan awalan huruf abjad seperti ana, ani, caca, cici, dadi, dida, dodo, sana, siti, situ. 

Kompleksitas waktu pada kode di atas yang dapat kita lihat karena terdapat dua perulangan for yang berkaitan juga, seperti yang kita ketahui yaitu perulangan luar variabel i dengan perulangan dalam dengan variabel j lalu pada setiap iterasi perulangan luar maka perulangan dalam akan otomatis dijalankan sebanyak n - i - 1 kali, di mana n yaitu jumlah elemen dari array. Maka dari itu kompleksitas waktu dari program ini yaitu O(n^2). Sedangkan kompleksitas ruang ini dengan adanya ukuran memori yang dibutuhkan untuk menyimpan array nama lalu variabel lainnya tak bergantung dengan jumlah elemen dan array. Maka dari itu kompleksitas ruang nya menjadi konstan yaitu O(1).



### 3. [Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)! ]
![Cuplikan layar 2024-04-01 082304](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/ca0664c7-dab8-4f03-869d-2fe8c98c5e74)

```C++
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

```
Kode di atas merupakan kode untuk melakukan sorting dari sorting secara menaik (ascending) dan menurun (descending). Seperti biasanya kita mengetikkan include <iostream> untuk penulisan cpp lalu include <vector> yaitu sebuah directive preprocessor dalam bahasa c++, vector merupakan sebuah kumpulan elemen yang didapatkan serta dapat diubah ukurannya secara dinamis. Kemudian iclude <algorithm> yang merupakan fungsi untuk proses pengolahan data  atau yang digunakan pada kode ini berupa pengurutan.

Lalu kita masuk dalam 'int main()' yang merupakan fungsi untuk menjalankan program yang biasanya harus dikembalikan ke dalam sebuah integer. Lalu kita akan memasukkan kode dengan meminta user bilangan bulat n dengan kode 'int n; cout << "Masukkan nilai n : "; cin >> n;' berikutnya kita akan membuan vektor guna menyimpan karakter serta memerintahkan user untuk memasukkan karakter dengan 'vector<char> v(n);' dan 'for (int i = 0; i < n; i++)' serta 'cout << "Masukkan karakter ke-" << i+1 << " : " cin >> v[i]' Setelah kita input kan maka kita akan melakukan sorting ascending dengan kode ' sort(v.begin(), v.end());' lalu menampilkan yang sudah diurutkan secara ascending dengan kode 'cout << "\nUrutan karakter setelah ascending sort : \n"; for (int i = 0; i < n; i++)  { cout << v[i] << " "; }' lalu untuk sorting descending dengan kode 'sort(v.begin(), v.end() greater<char>());' serta menampilkan hasilnya dengan kode 'cout << "\nUrutan karakter setelah descending sort : \n"; for (int i = 0; i < n; i++) { cout << v[i] << " "; }' lalu 'return 0' jika kode berhasil dijalankan.

#### Output:
![Cuplikan layar 2024-04-01 082618](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/d4c7b61b-95ad-4eda-90cc-a83b7d3bcced)
Saat dijalankan kode tersebut akan langsung memerintah user untuk memasukkan inputan nilai n, di sini saya mencoba dengan input bilangan 5 lalu kita akan diperintahkan untuk input karakter ke-1 dan saya memasukkan a, ke-2 : b, ke-3 : c, ke-4 : e serta ke-5 : d dapat dilihat urutannya belum terurut. Kemudian kode dijalankan dan menampilkan karakter sebelum sorting yaitu ' a b c e d' berikutnya menampilkan karakter setelah dilakukan ascending sort berubah menjadi 'a b c d e' lalu ururtan karkatel setelah descending sort menjadi 'e d c b a'.

Kompleksitas waktunya yang dapat dilihat pada kode di atas jika menggunakan kedua kasus sorting dengan metode ascending dan discending lalu menggunakan teknik pembagian serta penggabungan data dikarenakan iterasi terjadi sebanyak n kali maka dapat dikatakan kompeksitas waktunya yaitu O(log n). Sedangkan kompleksitas ruang nya yaitu dikarenakan ukuran memori yang dibutuhkan tergantung pada jumlah elemen yang akan disisimpan terhadap vektor yang di mana ukuran memori akan bertambah jika vektor akan bertambah serta begitu juga sebaliknya. Maka dari itu kompleksitas ruang dalam kode ini yaitu O(n). 

## Kesimpulan
Sorting merupakan Pengurutan (sorting) yaitu suatu proses mengurutkan data dengan suatu aturan tertentu , sehingga akan tersusun secara teratur sesuai dengan aturang yang berlaku. Sorting dapat dilakukan dari dua urutan yaitu ascending yang berarti mengurutkan data dari yang terkecil hingga terbesar dan descending yang berarti emngurutkan data dari yang terbesar ke data yang terkecil. Kemudian Sorting sendiri memilki beberapa macam, seperti yang sudah kita bahas sorting meliputi bubble sort, insertion sort dan selection sort. Lalu untuk ketiga macam sorting ini memiliki kompleksitas waktunya yang sama yaitu O(n^2).


## Referensi
[1] S. A. Yoga, N.A. Rizki, R. Laili, H.S. Reno, dan S. A, "Penerapan Algoritma Selection Sort untuk Melakukan Pengurutan Data dalam Bahasa Pemograman PHP", vol 1, no 4, pp 191, Desember 2022.
[2] Lasriana dan G. Aris, "Sistem Informasi Apotek Berbasis WEB Menggunakan Algoritma Sequential Search dan Selection Sort.", vol 7, no 2, pp 392-401, 2022.
[3] T.A Davina, F. Ihza, F.F. Muhammad, A.W. Nur dam F. Ridwan, "Analisis Kompleksitas Waktu Menggunakan Sorting Algorithm pada Pengaplikasian Fitur Pengurutan Harga dari Terendah dan Tertinggi di Shopee.", vol 3, No 1, pp 68-80, Mei 2024.
[4] Friend, E. H., “Sorting on electronic computer systems”, Journal of the ACM,No 3, Vol 4, pp.134–168, 1956.
[5] K. Priambodo dan J. S. Wibowo, “Proceeding SENDIU
2021 IMPLEMENTASI ALGORITMA SELECTION
SORT UNTUK PERANGKINGAN POIN PADA ESPORTS TOURNAMENT GARUDA LEAGUE,” no.20, pp .978–979, 2021.
[6] A.H. Saptadi, D.W. Sari., "Analisis Algoritma Insertion Sort, Merge Sort dan Implementasinya dalam Bahasa Pemograman C++", Jurnal Infotel, No 2, Vol 4, November 2012.

