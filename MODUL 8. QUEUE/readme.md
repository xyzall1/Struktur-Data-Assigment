# <h1 align="center">Laporan Praktikum Modul Queue</h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
1. Pengertian
    Queue merupakan struktur data di mana data yang pertama kali dimasukkan adalah data yang pertama kali dapat dihapus atau bisa juga disebut dengan struktru data yang menggunakan mekanisme FIFO (First In First Out) [1]. Queue dalam kehidupan sehari-hari diibaratkan seperti antrean penjualan tiket kereta api, di mana orang yang pertama datang adalah orang yang pertama kali dilayani untuk memebeli tiket, jika ada orang baru yang datang akan membeli tiket, maka posisinya berada pada ururtan paling belakang dalam antrean tersebut. Orang yang berada pada posisi terakhir dalam antrean maka adalah orang yang terakhir kali dapat dilayani serta memeperoleh tiket. 

![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/e44d8e12-9068-47cd-85e7-4977d874d3d1)
Gambar di atas merupakan sebuah ilustrasi terjakdinya stack jika kita adaptasikan pada kehidupan sehari-hari

2. Jenis-Jenis Queue

    1. Simple Queue
        Simple queue merupakan struktur data queue yang paling dasar di mana ada yang berupa penyisipan item yang dilakukan oleh simpul belakang (rear atau tail) serta adanya penghapusan yang terjadi di simpul depan (front atau head).
        ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/fb6e7859-6cd9-468a-941e-83a218396a49)


    2. Circular Queue
        Pada jenis ini circular queue, memiliki simpul terakhir terhubung ke simpul pertama. Queue jenis ini juga akan dikenal sebagai ring buffer dikarenakan semua ujungnya terhubung ke ujung yang lain. Penyisispan ini terjadi karena di akhri antrean serta penghapusan di depan antrean.
        ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/62e65cc1-0c25-4a58-b943-bb52085e5aab)


    3. Priority Queue
        Merupakan salah satu struktur data queuue yang di mana simpul akan memiliki beberapa prioritas yang telah ditentukan. Simpul dengan prioritas terbesar akan menjadi yang pertama yang akan dihapus dari antrean. Sedangkan penyisipan item terjadi sesuai urutan kedatangannya.
        ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/7bc7048e-df36-4faa-822c-332638a17b5e)

    4. Double Ended Queue (Dequeue)
        Dalam jenis ini atau Double-ended queue (dequeue), operasi penyisipan serta penghapusan dapat terjadi di ujung depan serta belakang dari queue [2].
        ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/4d88e718-8a9d-404a-bac3-39813adc43c0)

3. Karakteristik Queue
    1. Queue merupakan struktur FIFO (First in First Out).
    2. Untuk menghapus elemen terakhir dari queue, semua elemen yang akan dimasukkan sebelum elemen tersebut harus dihilangkan atu dihapus terlebih dahulu.
    3. Queue merupakan daftar yang berurutan dari elemen-elemen tipe data yang serupa atau homogen[1].

4. Operasi-operasi Utama Queue
    1. Enqueue
        operasi ini digunakan untuk menambahkan ke akhir antrean. Berikut langkahnya:
        - Periksa apakah antrean sudah penuh atu tidak.
        - Jika antrean penuh maka cetak kesalahan overflow serta keluar dari program.
        - Jika antrean tidak penuh maka naikkan pointer ke belakang untuk menunjuk ke ruang kosong berikutnya.
        - Lalu tambahkan elemen pada posisi yang ditunjuk oleh pointer belakang.
        - Kemudian status bahwa penambahan telah berhasil.
    2. Dequeue 
        Operasi ini yaitu menghapus elemen dari depan antrean. Berikut langkahnya:
        - Langkah pertama periksa antrean apakah sudah penuh atau tidak.
        - Jika antrean kosong maka cetak keslaahan underflow serta keluar dari program.
        - Selanjutnya jika antrean tidak kosong maka akses elemen data yang ditunjuk oleh pointer depan.
        - Kemudian geser pointer depan untuk menunjuk ke elemen data berikutnya yang tersedia.
        - Langkah terakhir maka kembalikan status bahwa operasi penghapusan telah berhasil [3].

5. Operasi Dasar Queue
    - IsEmpty   : Memeriksa apakah antrean kosong
    - IsFull    : Memeriksa apakah antrean sudah penuh
    - Peek      : Mendapatkan nilai bagian depan antrean tanpa menghapusnya
    - Initialize: Membuat antrean baru tanpa elemen data (kosong)

6. Fungsi & Kegunaan Queue
    - Membantu untuk mempertahankan playlist yang ada pada aplikasi media player.
    - Queue banyak digunakan untuk menangani lalu lintas (traffic) situs web.
    - Digunakan dalam transfer data asinkronus contohnya yaitu pipeline, IO file, serta socket.
    - Membantu dalam melayani permintaan pada sumber daya bersama, seperti printer, penjadwalan tugas CPU, dll [4].

7. Kelebihan Queue
    - Data berukuran jumlah besar serta dapat dikelola secara efisien.
    - Dapat digunakan dalam implementasi struktur data lainnya.
    - Dapat mempercepat untuk komunikasi antar proses data.
    - Operasi seperti penyisispan serta penghapusan dapat dilakukan dengan mudah karena mengikuti aturan masuk pertama serta keluar pertama.
    - Berguna ketika layanan tertentu digunakan oleh banyak konsumen [5].

8. Kekurangan Queue
    - Mencari elemen pada struktur data queue membutuhkan time complexity O(N).
    - Dalam queue konvensional, elemen baru hanya dapat dimasukkan ketika elemen yang ada dihapus dari antrean.
    - Operasi penyisispan serta penghapusan elemen dari tengah cenderung banyak memakan waktu.
    - Ukuran maksimum antrean harus ditentukan sebelumnya, jadi memakan tambahan waktu lagi [6].


## Guided 

```C++
#include <iostream>

using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;

string queueTeller[5];

bool isFull() {
    if (back == maksimalQueue) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian Penuh" << endl;
    } else {
        if (isEmpty()) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() {
    return back;
}

void clearQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() {
    cout << "Data antrian teller: " << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```
Kode di atas merupakan kode yang menjalankan dengan menggunakan Queue. Queue ini menggunakan prinsipp FIFO (Firs in First Out) di mana yang beratrean elemen yang pertama ditambahkan akan menjadi elemen pertama yang dihapus.
Kode ini menggunakan fungsi maksimalQueue untuk mendefinisikan konstanta menjadi integer serta menetapkan ukuran maksimum antrean menjadi 5. Lalu dalam kode di atas ada varibael front dan back yang digunakan untuk melacak posisi serta belakang antrean pada masing-masing posisi. Lalu ada berupa airray string dengan queueTeller yang dingunakan untuk menyimpan elemen dalam antrean, kemudian dilanjutkan dengan adanya fungsi isFull() unruk memeriksa antrean apakah sudah penuh lalu akan dilanjutkan dengan membandingkan variabel back untuk memeriksa maksimum antrean. Setelah proses itu sudah dikerakkan maka ada berupa isEmpty() yang merupakan fungsi untuk memeriksa antrean kososng sengan membandingkan sama dengan variabel back dengan 0. Lalu ada  berupa fungsi enqueAntrian(data) yang digunakan untuk menambahkan elemen ke belakang antrean, jika penuh makan akan mencetak pesan error namun jika kosong antreannya maka akan diatur dengan variabel front lalu menjadi 0. Selanjutnya ada berupa fungsi dequeueAntrian() yang digunakan untuk menghapus elemen di depan antrean jika antrean kosong maka kode akan mencetak pesan error, berikutnya fungsi countQueue() yang digunakan untuk mengembalikan jumlah elemen saat dalam antrean, clearQueu() yang digunakan untuk mengjapus semua elemen dari antrean serta mengatur mengatur variabel dengan front and back yang menjadikan 0 lalu ada berupa fungsi viewQueue() yang digunakan untuk mencetak keadaan saat ini lalu menampilkan elemen apakah posisinya kosong atau sebaliknya serta yang terakhir berupa fungsi main() yang akan menjalankan semua operasi antrean menambahkan atau menghapus maupun mencetak keadaan kode pada setiap langkah.

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/b2e4ef4e-79a0-41ce-8b19-fb8b4a685058)
Pada output di atas akan langsung menampilkan output kepada user tanpa melakukan input. Kode ini akan menampilkan data antrean teller yang akan diisi atau ditambahkan Andi dan Maya. Lalu yang ditampilakan antrean pertama yaitu Andi lalu dilanjutkan Maya serta antrean ketiga sampai kelima kosong berarti dengan jumlah antrean hanya dua. Lalu antrean yang pertama yaitu Andi sudah selesai maka, Maya yang antrean berikutnya akan maju ke posisi pertama lalu terjadi antrean kedua hingga kelima kosong dengan jumlah antrean satu. Jika sudah maka Maya selesai lalu keluar dari antrean maka data antrean kosong serta jumlah antrean kososng. Hal ini menunjukkan bahwasannya kode berjalan dengan benar yaitu dapat  menambah, menghaous, serta menampilkan elemen dnegan benar sesuai perintah.

## Unguided 

### 1. Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list

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
Kode di atas merupakan kode yang dapat menyimpan maksimal lima elemen. Amtrean ini akan ditampilkan dengan menggunakan linked list, di mana nantinya setiap elemen merupakan sebuah node serta memiliki dua atribut data yang digunakan untuk menyimpan nilai string serta next yang digunakan untuk menunjuk ke node berikutnya.

Kode ini menggunakan beberapa fungsi seperti isFull() yang digunakan untuk memeriksa apakah antran sudah penuh atau sebaliknya, nantinya jika elemen sudah penuh maka akan mencapai elemen maksimal yaitu 5 lalu jika sudah maksimal maka fungsi akan mengembalikan nilai ke true. Lalu ada isEmpty() yang digunakan untuk memeriksa apakah antrean kosong atau tidak jika jumlah elemen yang dijalankan yaitu 0 maka fungsi nantinya akan mengembalikan nilai ke true. Lalu ada berupa enqueuAntrian(string data) yang digunakan untuk menambahkan elemen baru ke antrean jika sudah penuh maka kode nantinya kan mencetak pesan "Antrian Penuh" namun jika tidak maka fungsi akan membuat node baru yang akan mengisi nilai data denga nilai yang diberikan serta menambahkan node tersebut ke dalam antrean. Lalu ada berupa dequeueAntrian() yang berguna untuk menghapus elemen pertama dari antrean, jika antrean kosong maka kode akan mencetak pesan "Antrian kosong" namun jika tidak maka fungsi akan menghapus node pertama dari antrean lalu megurangi jumlah elemen terhadap antrean. Berikutnya ada berupa countQueue() yang digunakan untuk mengembalikan jumlah elemen di antrean lalu clearQueue() untuk menghapus semua elemen dengan cara mengulangi fungsi dequeueAntrian() hingga antrean kososng lalu dilanjutkan denga viewQueue() untuk mencetak semua elemen antrean.

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/be5486b4-5182-4921-ba0d-069756561a8b)
Saat kode dijalankan maka kode akan menjalankan lalu menampilkan sebuah output berupadata antrean teller yang di mana terdapat dua elemen yaitu Aliana dan Sawafi. Elemen ini ditampikan dengan fungsi viewQueue() lalu fungsi countQueue() digunakan untuk menampilkan jumlah elemen dari antrean yaitu dua. Lalu pada antrean yang selanjutnya elemen Aliana akan hilang dengan fungsi dequeueAntrian() yang digunakan untuk menghapus elemen pertama lalu untuk menampilkan digunakan fungsi viewQueue(), setelah elemen pertama dihapus maka fungsi countQueue() digunaakan untuk menampilkan jumlah elemen dari antrean. Lalu pada antrean yang berikutnya fungsi clearQueue() akan menghapus semua elemen lalu viewQueue() akan menampilkan semua elemen setelah dihapus serta tidak lupa countQueue() yang akan menampilkan jumlah elemen antrean yaitu 0.

### 2. Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa


#### Input :
```C++
#include <iostream>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
};

struct Node {
    Mahasiswa data;
    Node* next;
};

Node* front = nullptr;
Node* back = nullptr;
int count = 0;

const int maksimalQueue = 5;

bool isFull() {
    return count == maksimalQueue;
}

bool isEmpty() {
    return count == 0;
}

void enqueueAntrian(Mahasiswa data) {
    if (isFull()) {
        cout << "Antrian Penuh" << endl;
    } else {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = newNode;
            back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }
        count++;
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        Node* temp = front;
        front = front->next;
        delete temp;
        count--;
        if (isEmpty()) {
            back = nullptr;
        }
    }
}

int countQueue() {
    return count;
}

void clearQueue() {
    while (!isEmpty()) {
        dequeueAntrian();
    }
}

void viewQueue() {
    Node* temp = front;
    int i = 1;
    cout << "Data antrian mahasiswa: " << endl;
    while (temp != nullptr) {
        cout << "Nama = " << temp->data.nama << ", NIM = " << temp->data.nim << endl;
        temp = temp->next;
        i++;
    }
    cout << "Jumlah antrian = " << countQueue() << endl;
}

int main() {
    Mahasiswa mahasiswa1 = {"Aliana", "2311110008"};
    Mahasiswa mahasiswa2 = {"Sawafi", "2311110009"};

    enqueueAntrian(mahasiswa1);
    enqueueAntrian(mahasiswa2);
    viewQueue();
    dequeueAntrian();
    viewQueue();
    dequeueAntrian();
    viewQueue();
    return 0;
}
```
#### Interpretasi
Kode ini akan menjalankan struktur data queue menggunakan nama mahasiswa dan nim dengan menggunakan linked list. Fungsi dari kode ini yang diguanakan seperti, isFull() yang digunakan untuk mengembalikan nilai true jika antrian penuh dan false jika antrian belum penuh, lalu ada berupa isEmpty() untuk mengembalikan nilai true jika antrian kosong dan false jika antrian tidak kosong, selanjutnya berupa enqueueAntrian(Mahasiswa data) yang berfungsi untuk menambahkan data mahasiswa ke antrian, dilanjutkan ada fungsi dequeueAntrian() yang digunakan untuk menghapus data mahasiswa dari depan antrian, berikutnya berupa countQueue() untuk mengembalikan jumlah data mahasiswa yang ada di dalam antrian, lalu clearQueue() berguna untuk menghapus semua data mahasiswa dari antrian serta yang terakhir yaitu viewQueue() yang digunakan untuk menampilkan semua data mahasiswa yang ada di antrian. Lalu tidak lupa ada fungsi main yang digunakan untuk menjalankan seluruh operasi fungsi yang sudah disebutkan.

#### Output
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/dbdd5c6f-1ecc-4f1a-80db-3a49f37c6623)
Pada kode di atas akan menampilkan sebuah output dengan nama dan nim dari setiap elemen antrian. Pada langkah pertama ada dua berupa nama dan nim lalu akan dipanggil dengan fungsi enqueuAntrian() lalu akan dipanggil dua kali untuk menambahkan dua elemen mahasiswa ke antrean lalu ditampilkan dengan fungsi viewQueue(). Kemudian pada langkah kedua fungsi akan menghapus elemen pertama dengan dequeueAntrian() lalu menggunakan viewQueue() untuk menampilkan semua elemen di antrian setelah elemen pertama dihapus serta pada langkah ketiga fungsi dequeueAntrian() akan menghapus seluruh elemen sera akan ditampilkan sera countQueue() untuk menghitung jumlah elemen yang terakhir yaitu 0.


## Kesimpulan
1. Queue merupakan struktur data di mana data yang pertama kali dimasukkan adalah data yang pertama kali dapat dihapus atau bisa juga disebut dengan struktru data yang menggunakan mekanisme FIFO (First In First Out) [1]

2. Jenis- Jenis queue : simple queue, Circular queue, Priority Queue, Double Ended Queue.

3. Karakteristik Queue : Merupakan struktur FIFO, dapat menghapus elemen terakhir dari queue dengan cara semua elemen yang akan dimasukkan sebelum elemen tersebut harus dihilangkan atu dihapus terlebih dahulu, Queue memiliki daftar yang berurutan.

4. Operasi utama dari queue yaitu Enqueue & Dequeue

5. Operasi dasar queue yaitu : IsEmpty, IsFull, Peek, dan Initialize

6. Fungsi & Kegunaan Queue : Membantu untuk mempertahankan playlist, menangani traffic situs web, transfer data asinkronus, serta membantu dalam melyani permintaan pada sumber daya bersama.

7. Kelebihan Queue : Dapat dikelola secara efisien walaupun dengan jumlah yang besar, dapat diimplementasikan struktur data lainnya, mempercepat untuk komunikasi antar proses data, operasi penyisipan yang tergolong mudah, Berguna ketika layanan tertentu digunakan oleh banyak konsumen.

8. Kekurangan Queue : Dalam mencari struktur membutuhkan membutuhkan time complexity O(N), elemen baru hanya dapat dimasukkan ketika elemen yang ada dihapus, Operasi penyisispan serta penghapusan elemen dari tengah cenderung banyak memakan waktu, serta ukuran maksimum antrean harus ditentukan sebelumnya.


## Referensi
[1] K., Roby, 2018 "Artikel Struktur Data", Universitas Mitra Indonesia, Sistem Informasi


[2] Sihombing, J. 2019. "Penerapan Stack Dan Queue
Pada Array Dan Linked List Dalam Java", Jurnal
Ilmiah Infokom, 7(2), 15–24.

[3] Sjukani, Moh,2012,Struktur Data "Algoritma dan Struktur Data dengan C",C++,Jakarta:Mitra
Wacana Media

[4] A. Aliyanto, "Sistem Pembelajaran Algoritma stack dam queue dengan pendekatan problem based learning untuk mendukung pembelajaran struktur data," Seminar nasional Aplikasi Teknologi Informasi, pp. E29-E33, 2013. 

[5] Trivusi, "Struktur Data Queue: Pengertian, Jenis, dan Kegunaannya", 2023. Diakses pada 12 Mei 2024. https://www.trivusi.web.id/2022/07/struktur-data-queue.html

[6] A. S. Putra, “2018 Artikel Struktur Data, Audit Dan Jaringan Komputer,” 2018

