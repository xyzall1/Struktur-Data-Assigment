# <h1 align="center">Laporan Praktikum Modul Rekursif</h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
1. Pengertian Rekursif
    Rekursif merupakan fungsi yang memanggil dirinya sendiri, atau dapat diartikan fungsi tersebut dipanggil di dalam tubuh fungsi itu sendiri [1]. Perlu kita perhatikan bahwasannya fungsi rekursif dalam sebuah pemanggilan dapat terjadi berulang kali. Hali ini dikarenakan proses yang berulang-ulang maka harus terdapat suatu kondisi yang nantinya akan mengakhiri prosesnya. Namun jika tidak, maka pproses tidak akan pernah berhenti sampai dengan memori yang digunakan tak dapat menampung lagi.

2. Tujuan Algoritma Rekursif
    - Dapat digunakan untuk memecahkan suatu masalah menjadi sub masalah yang lebih sederhana.
    - Algoritma ini sering digunakan untuk dapat mengimplementasikan struktur data seperti pohon, graf, atau daftar lainnya yang terhubung.
    - Rekursif sendiri dapat digunakan untuk melakukan pengulangan secara efisien [2].

3. Jenis Algoritma Rekursif
    - Factorial
        Algoritma ini digunakan untuk menghitung faktorial suatu bilangan. Faktorial ini meliputi bilangan n (ditulis n) yang merupakan sebuah hasil perkalian untuk semua bilangan bulat positif 1 hingga n.
    - Tower of Hanoi
        Tower of Hanoi sendiri dapat digunakan untuk memindahkan tumpukan cakram dari satu tiang ke tiang lainnya dengan aturan bahwa hanya satu cakram yang daoat dipindahkan pada satu waktu dan cakram yang lebih besar serta tidak boleh ditempatkan di atas yang lebih kecil.
    - DFS of Graph
        Digunakan untuk melakukan pencarian pada struktur data graf secara rekursif, di mana algoritm ini nantinya akan menguji semua simpul dalam graf dengan mengikuti jalur secara mendalam sebelum kembali.
    - Eksponential
        Algoritma ekponensial ini digunakan untuk menghitung hasil dari suatu operasi ekponensial dengan memanggil dirinya sendiri [3].
4. Jenis Rekursif
    - Rekursif Langsung
        Jenis rekursif ini di mana suatu fungsi dapat memanggil dirinya sendiri secara langsung dalam blok kodenya sendiri yang berarti fungsi tersebut muncul sebgai bagian dari definisi fungsi serta fungsi tersebut memanggil dirinya sendiri untuk menjalankan tugasnya.
    - Rekursif Tidak Langsung
        Dalama rekursif tak langsung ini suatu fungsi akan memanggil fungsi lain yang kemudian memanggil kembali fungsi pertama, Rekursif sendiri akan berakhir jika kasus dasar terpenuhi serta pada saat itulah proses berhenti [4].
5. Keuntungan
    - Rekursif Langsung
        Ada beberapa keuntungna menggunakan rwkursif langsung yaitu dapat dengan mudah dipahami karena kasus dasar rekursif didefinisikan dengan jelas dalam fungsi yang sama. Selain itu dalam skenario tertentu, penggunaan rekursif langsung dapat meningkatkan efesiensi dikarenakan menghindari overhead pemanggilan fungsi tambahan.
    - Rekursif Tidak Langsung
        Salah satu keuntungan rekursif tak langsung yaitu seringkali lebih mudah untuk dipahami dan debug. Dikarenakan kasus dasar serta kasus rekursif didefinisikan dalam fungsi terpisah. Jenis Rekursif tidak langsung ini dapat meningkatkan efesiensi dalam kasus tertentu dikarenakan memungkinkan struktur yang lebih modular dan dapat mengurangi ukuran tumpukan panggilan. 
6. Kelemahan
    - Rekursif Langsung
        Salah satu kelemahannya yaitu dapat menimbulkan kesulitan yang lebih besr untuk men-debug fungsi rekursif langsung dikarenakan tumpukan panggilan biasa bisa menjadi sangat besar serta kemungkinan besar menjadi sulit untuk melacak eksekusi fungsi tersebut, selain itu rekursif langsung dapat menghabiskan banyak memori jika rekursif tidak dihentikan dengan benar, karena setiap pemanggilan rekursif menambahkna lapisan baru ke tumpukan panggilan.
    - Rekursif Tidak Langsung
        Kelemahannya yaitu meliputi penulisan serta pemahamannya bisa lebih rumit dikarenakan logikanya terbagi menjadi dua fungsi, selain itu rekursif tidak langsung dapat menghabiskannya lebih banyak memori dalam beberapa kasus dikarenakan memerlukan pemanggilan fungsi tambahan [5].





## Guided 
### 1. Rekursif Langsung (Direct Recursion)

```C++
#include <iostream>
using namespace std;

//Code ini berfungsi untuk melakukan hitung mundur
//dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}

int main() {
    cout << "Rekursi Langsung: ";
    countdown(5); //5 merupakan input nya
    cout << endl;
    return 0;
}
```
#### Interpretasi
Kode di atas yaitu menjanlankan tentang fungsi rekursif langsung. Berikut penjelasan kode:

1. Deklarasi Fungsi countdown :
    - Fungsi countdown ini memiliki parameter yang disebut dengan 'n' yang berarti mewakili bilangan yang akan dihitung mundur sendiri.
    - Fungsi ini juga dapat digunakan untuk mencetak suatu bilangan yaitu 'n' lalu nanti kodenya akan memanggil dirinya sendiri yaitu dengan nilai 'n' lalu dikurangi 1, sehingga didapatkan proses hitung mundur yang dilakukan secara rekursif.

2. Penggunaan fungsi countdown yang ada di dalam main :
    - Di dalam fungsi main sendiri yaitu fungsi countdown yang nantinya akan dipanggil dengan argumen 5 lalu akan dilakukan proses hitung mundur lalu akan dimulai dari bilangan 5.
    - Lalu hasil output nantinya dari fungsi countdown lalu akan dicetak ke layar selanjutnya akan dituangkan dalam kasus ini yaitu 5 4 3 2 1.

3. Peunggunaan count untuk output:
    - cout merupakan suatu fungsi yang biasanya digunakan untuk mencetak suatu output ke layar. Dalam kondisi kode di atas cout yang digunakan untuk mencetak bilangan yang dihitung mundur.

4. Penggunaan return dalam fungsi countdown:
    - Fungsi countdown memiliki kondisi berupa if (n == 0) yaitu memiliki fungsi sebagai kondisi untuk menghentikan proses hitung mudur. Jadi ketika ada kondisi n mencapai 0, fungsi countdown akan menghentikan proses rekursif lalu akan dikembalikan ke fungsi main. 

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/cae7b9d8-0201-4d1c-9aff-100a508965fe)

Pada kode di atas akan menjalankan suatu output berupa suatu fungsi faktorial dari 5 yaitu yang akan dikalikan dengan 5 4 3 2 1.

### 2. Rekursif Tidak Langsung (Indirect Recursion)

```C++
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}

```
#### Interpretasi 
Kode tersebut merupakan kode yang menjalankan fungsi rekursif tidak langsung. Rekursif tidak langsung dapat diartikan kode dari fungsi tersebut harus memanggil dirinya sendiri, tetapi tidak langsung melalui parameter yang nantinya diberikan, melainkan melalui fungsi lain yang dipanggil nantinya. Berikut penjelasan lebih singkatnya :

- Fungsi memiliki functionA serta functionB yang merupakan fungsi rekursif tidak langsung. Nantinya kode ini akan dipanggil secara bergantian serta memanggil dirinya sendiri, namun tidak langsung melalui parameter yang nantinya diberikan.
- Fungsi functionA nantinya akan memanggil functionB dengan parameter n-1 yang selanjutnya akan memanggil terhadap functionA dengan paramter n dibagi dengan 2 atau dapat dituliskan dengan n/2. Proses ini akan terus berulang hingga nilai n ini akan mencapai nilai 0.
- Selanjutnya pada functionB akan memanggil functionA dengan parameter n juga dibagi dengan 2 atau disebut dengan n/2 yang nantinya functionB dengan parameter n-1. Proses ini nantinya akan terus berlanjut hingga nilai n bernilai dengan 0.

Jadi dapat disimpulkan rekursif tidak langsung dapat digunakan untuk mencapai tujuan yang kompleks dengan cara memanggil fungsi lain yang memanggil fungsi lainnya begitu juga seterusnya hingga mencapai kondisi yang diharapkan.

#### Output
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/635be4df-324d-4d20-95b1-932747424990)
Pada output di atas kode akan menjalankan functionA yang akan dianggil dengan parameter 5 yang kemudian memanggil functionB dengan parameter 4 lalu functionB selanjutnya memanggil functionA dengan parameter 2 lalu kemudian memanggil functionB dengan parameter 1 serta seterusnya hingga n mencapai 0. Hasil dari fungsi ini yaitu berupa output deret bilangan yang berurutan yang dimulai dari 5 hingga 1 serta memiliki output berupa 5 4 2 1.


## Unguided 

### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!


```C++
#include<iostream>
using namespace std;

// Fungsi rekursif untuk menghitung nilai faktorial
long long faktorial(int n) {
  if(n == 0)
    return 1;
  else
    return n * faktorial(n-1);
}

int main() {
  int bilangan;
  
  // Meminta input bilangan bulat positif
  cout << "Masukkan bilangan bulat positif: ";
  cin >> bilangan;
  
  // Menghitung faktorial dari bilangan
  long long hasil = faktorial(bilangan);
  
  // Menampilkan hasil
  cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
  
  return 0;
}
```
#### Interpretasi 
Kode di atas merupakan kode yang akan menjalankan rekursif langsung dengan menghitung bilangan bulat positif yang dimasukkan oleh user. Berikut penjelasan rincinya:
- Fungsi rekursif akan menghitung nilai faktorial dari bilangan n, kondisi basis jika n bernilai dengan 0 maka nilai faktorial yaitu 1, ini merupakan dasar rekursi lalu kasus rekursif jika n bernilai lebih besar dari 0 maka nilai faktorialnya dihitung dengan mengalikan n dengan faktorial dari n-1. Selanjutya proses ini akan diulangi hingga mencapai kasus yang mempunyai level dasar.
- Deklarasi Variabel bilangan ini digunakan untuk menampung bilangan yang dimasukkan oleh user.
- Dalam mencetak pesan "Masukkan bilangan bulat positif:" dengan menggunakan cin lalu untuk membaca input dari user serta menyimpan dalam variabel bilangan.
- Dalam menghitung faktorial fungsi akan memanggil faktorial(bilangan) untuk menghitung nilai faktorial dari bilangan yang dimasukkan dan menyimpan hasilnya dalam variabel hasil.
- Menampilkan hasil kita menggunakan Faktorial dari dengan nilai bilangan, tanda adalah serta nilai pada hasil.
- Mengembalikan nilai 0 dari fungsi main() yang berguna untuk menunjukkan kode berhasil dijalankan.

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/885fb8c9-cfa2-4f51-85c4-e133b2ed0f5a)

Saat kode dijalankan kode ini menggunakan rekursif langsung, dengan fungsi factorial(n) untuk menghitung faktorial dari bilangan n dengan mengembalikan n dengan faktorial dari n-1. Fungsi ini akan meminta input oleh user dari sebuah bilangan positif oleh user, menghitung faktorialnya, serta menampilkan hasilnya. Di sini user memasukkan angka bilangan positif 5 dan prosesnyya 5 * 4 * 3 * 2 * 1 yang hasiknya yaitu 120.

#### 2.	Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 diatas!

```C++
#include<iostream>
using namespace std;

// Fungsi untuk melakukan iterasi
void iterasi(int n, long long &hasil) {
  hasil *= n;
  if(n == 1)
    return;
  iterasi(n-1, hasil);
}

// Fungsi rekursif untuk menghitung nilai faktorial
long long faktorial(int n) {
  long long hasil = 1;
  iterasi(n, hasil);
  return hasil;
}

int main() {
  int bilangan;
  
  // Meminta input bilangan bulat positif
  cout << "Masukkan bilangan bulat positif: ";
  cin >> bilangan;
  
  // Menghitung faktorial dari bilangan
  long long hasil = faktorial(bilangan);
  
  // Menampilkan hasil
  cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
  
  return 0;
}
```
#### Interpretasi
Kode di atas merupakan kode yang menjalankan rekursif tidak langsung untuk menghitung nilai faktorial dari sebuah bilangan, yaitu hasil dari semua bilangan bulat positif yang len=bih kecil atau sama dengan bilangan tersebut. Berikut penjelasan detailnya:
- Fungsi faktorial ini dapat didefinisikan untuk menghitung nilai faktorial dari sebuah bilangan n. Fungsi ini menggunakan prinsip rekursif yang akan memanggil dirinya sendiri dengan parameter yang berbeda nantinya untuk menghitung nilai faktorial.
- Fungsi iterasi ini nantinya yang digunakan untuk melakukan iterasi perkalian dalam proses menghitung faktorial. Fungsi ini nantinya akan mengupdate hasil dnegan perkalian n terhadap nilai hasil yang sebelumnya. Jika n merupakan 1, fungsi iterasi nantinya akan berhenti dikarenakan faktorial dari 1 yaitu 1 itu sendiri.
- Pada fungsi faktoorial, nilai hasil awalnya yaitu akan diinisialisasi menjadi 1. Selanjutnya fungsi iterasi nantinya akan dipanggil melalui parameter n serta hasil. Fungsi iterasi ini nantinya yang akan melakukan iterasi perkalian hingga n akan mencapai niali 1 serta nilai hasil yang nantinya akan menjadi sebuah perkalian semua bilangan bulat positif yang lebih kecil dari atau sama dengan n.
#### Output
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/86f43107-af4c-4dd5-848b-bf54197932b3)
Pada kode di atas fungsi faktorial ini harus dipanggil dengan parameter bilangan yang nantinya bilangan akan diinputkan oleh pengguna. Pengguna sendiri menginputkan bilangan positif yaitu 5, serta kode yang dijalankan akan menghitung nilai faktorial dari 5 yaitu 120, atau dengan mencetak pesan "Faktorial dari 5 adalah: 120".



## Kesimpulan
1. Pengertian Rekursif yaitu fungsi yang memanggil dirinya sendiri, atau dapat diartikan fungsi tersebut dipanggil di dalam tubuh fungsi itu sendiri.
2. Tujuan Algoritma Rekursif yaitu Dapat digunakan untuk memecahkan suatu masalah menjadi sub masalah yang lebih sederhana, digunakan untuk dapat mengimplementasikan struktur data seperti pohon, graf, atau daftar lainnya yang terhubung, serta digunakan untuk melakukan pengulangan secara efisien.
3. Jenis Algoritma Rekursif yaitu factorial, tower of hanoi, DFS of Graph, Eksponential.
4. Jenis Rekursif ada dua yaitu Rekursif langsung dan tidak langsung.
5. Keuntungan dan kelemahan Rekursif langsung yaitu dapat dengan mudah dipahami karena kasus dasar rekursif didefinisikan dengan jelas dalam fungsi yang sama. Sedangkan kelemahan yaitu menimbulkan kesulitan yang lebih besr untuk men-debug fungsi rekursif langsung dikarenakan tumpukan panggilan biasa bisa menjadi sangat besar serta kemungkinan besar menjadi sulit untuk melacak eksekusi fungsi tersebut. 
6. Keuntungan dan kelemahan rekursif tidak langsung yaitu seringkali lebih mudah untuk dipahami dan debug sedangkan kelemahannya yaitu enulisan serta pemahamannya bisa lebih rumit dikarenakan logikanya terbagi menjadi dua fungsi.



## Referensi
[1] I. Liem, Diktat Struktur Data, ITB, 2008

[2] R. Mccauley, B. Hanks, S. Fitzgerald, and L.
Murphy, “Recursion vs . Iteration : AnEmpirical Study of Comprehension Revisited,” Proceedings of the 46th ACM technical symposium on computer science education, pp. 350–355, 2015.

[3] C. Rinderknecht, “A Survey on Teaching and
Learning Recursive Programming,” Informatics in Education-An International Journal, vol. 13, no. 1, pp. 87–119, 2014.


[4] E. Lutfina, F. L. Ramadhan, U. N. Karangturi,
and K. Semarang, “Perbandingan Kinerja Metode Iteratif dan Metode Rekursif dalam Algoritma Binary Search,” SEMINAR NASIONAL APTIKOM (SEMNASTIK) 2019,
pp. 53–60, 2019.

[5] Simplilearn, "Apa itu Algoritma Rekursif? Jenis dan Metode", 2023. Diakses pada 26 Mei 2024 dari https://www.simplilearn.com/tutorials/data-structure-tutorial/recursive-algorithm 


