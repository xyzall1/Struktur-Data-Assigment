# <h1 align="center">Laporan Praktikum Modul Hash Table</h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
1. Pengertian

    Hash Table yaitu merupakan struktur data yang mendasar secara efisien menyimpan serta mengambil data dengan cara yang memungkinkan akses cepat. Proses ini melibatkan pemetaan data ke indeks tertentu dalam hash table, hash table sendiri memungkinkan untuk melakukan proses pengambilan informasi dengan berdasarkan kuncinya. Metode ini umumnya digunakan dalam database, sistem caching, serta berbagai macam aplikasi pemograman untuk mengoptimalkan operasi pencarian serta pengambilan. [1]

    ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/a5b699f1-083a-4f88-b3a6-2deaf7bc71f2)

2. Fungsi Hash

    Fungsi hash diguankan untuk mengambil kunci serta mengembalikan indeks ke dalam tabel hash. Tujuan dari funhsi untuk mendistribusikan kunci secara merata di seluruh tabel hash, meminimalkan tabrakan atau hal ini terjadi dikarenakan ketia dua kunci ke indeks yang sama.
    Fungsi hash yang umum meliputi :
    - Metode Pembagian : % Kunci Ukuran Hash Table
    - Metode Perkalian : (Kunci * Konstanta) %Ukuran Hash Table
    - Hashing Universal : diguanakan untuk rangkaian fungsi hash yang dirancang untuk menimalkan tabrakan [2]
3. Penenrapan Hash Table 
    Hash Table digunakan dalam berbagai macam aplikasi, termausuk :
    - Basis Data : digunakan untuk menyimpan dan mengambil data berdasarkan kunci unik
    - Caching : untuk menyimpan data yang sering diakses untuk pengembalian lebih cepat
    - Tabel Simbol : berguna untuk memetakan pengidentifikasian ke nilainya dalam bahasa pemograman 
    - Perutean Jaringan : Menentukan jalur terbaik untuk paket data [3]
4. Teknik dalam Hash Table
    - Hashing : proses pergantian kunci yang diberikan atau string karakter menjadi nilai lain. Penggunaan hashing paling populer yaitu hash table, hash table ini menyimpan pasangan kunci serta nilai dalam daftar yang dapat diakses melalui indeksnya. Dikarenakan pasangan kunci serta nilai tak terbatas, maka fungsinya akan memetakan kunci ke ukuran tabel dan kemudian nilainya menjadi indeks untuk elemen tertentu.
    - Linear Probing : digunakan untuk melakukan skema dalam menyelesaikan collision pada hash table. Dalam skema ini, setiap dari hash table menyimpan satu pasangan kunci hingga nilai. Saat fungsi hash menyebabkan collision dengan memetakan kunci baru ke hash table yang sudah ditempati oleh kunci lain, maka linear probing akan mencari tabel untuk lokasi bebas terdekat serta menyisipkan kunci baru [4]. 

    


## GUIDED
### Guided 1

```C++
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;

// Fungsi hash sederhana
int hash_func(int key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value), next(nullptr) {}
};

// Class hash table
class HashTable {
private:
    Node** table;
public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }
    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Insertion
    void insert(int key, int value) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node(key, value);
        node->next = table[index];
        table[index] = node;
    }

    // Searching
    int get(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }

    // Deletion
    void remove(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Traversal
    void traverse() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << current->key << ": " << current->value << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable ht;
    // Insertion
    ht.insert(1, 10);
    ht.insert(2, 20);
    ht.insert(3, 30);

    // Searching
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;
   
    // Deletion
    ht.remove(4);
   
    // Traversal
    ht.traverse();
   
    return 0;
}
```
### Interpretasi
Kode di atas merupakan kode yang menjalankan kode Hash Table. Berikut penjelasan lebih detailnya:
- Menggunakan Header & Konstanta
    - #include <iostream> : import library input dan output yang digunakana dengan fungsi cout serta biasa digunakan saat bahasa pemograman berjenis c++.
    - using namespace std : untuk mengakses fungsi serta variabel tanpa harus menggunakan prefix atau nama lainnya yaitu imbuhan.
    - const int MAX_SIZE = 10 : untuk mrndefinisikan nilai 10 yang berfungsi untuk menjelaskan bahwasannya ukuran maksimal dari hash table yaitu 10.
- Menggunakan Fungsi Hash
    - int hash_funct(int key) { return key % MAX_SIZE; } : digunakan untuk mengambil key sebagai input serta mengembalikan nilai hash yang dihitung dengan menggnakan operasi modulo atau (sisa bagi) dengan MAX_SIZE, fungsi ini yang nantinya akan digunakan untuk menentukan indeks hash table sebagai tempat key yang akan disimpan.
- Menggunakan Struktur Data Node 
    - struct Node { int key; int value; Node* next; Node(int key, int value) : key(key), value(value), next(nullptr) {} }; : Dapat kita lihat data tersebut memiliki tiga struktur yaitu key, value, serta next yang merupakan integer yang nantinya akan disimpan dalam node, sedangkan next nantinya merupakan pointer ke node berikutnya dalam linked list serta node nantinya akan menginisialisasi atribut-atribut tersebut dengan nilai yang diberikan.
- Menggunakan Class Hash Table
    - lass HashTable { ... }; : berguna untuk mengimplementasikan hash table
- Menggunakan Konstruktor HashTable
    - HashTable() { table = new Node*[MAX_SIZE]()}; : HashTable ini yang akan menginisialisasi hash table dengan ukuran yang telah ditentukan oleh MAX_SIZE, lalu hash table akan diinisialisaikan dengan array of pointers ke node yang awlanya akan bernilai nullptr.
- Menggunakan Destructor Hash Table
    - HashTable() { ... } : digunakan untuk menjalankan ketika objek HashTable nantinya dihapus. Destructor inilah yang akan menghapus semua node dalam hash table serta menghapus array ke pointer Node.
- Menggunakan Insertion
    - void insert(int key, int value) { ... } : menggunakan fungsi insert yang nantinya akan menambahkan key-value pair ke hash table. Fungsi ini nantinya akan mencari indeks hash table yang sesuai dengan key yang menggunakan fungsi hash, kemudoan mencari node dengan key dalam linked list tersebut, jika node deitemukan, maka nantinya nilai value akan diperbarui. Namun jika tidak, maka node baru akan dibuat serta ditambahkan ke linked list.
- Menggunakan Searching
    - int get(int key) { ... } : get yang nantinya akan mencari sebuah valur sesuai dengan key dalam hash table. Fungsi ini nanrinya akan mencariindeks hash table yang sesuai dengan key dalam linked list pada indeks tersebut. Maka node ditemukakn, jadi nilai value akan dikembalikan, namun jika tidak nilai -1 akan dikembalikan.
- Menggunakan Deletion
    - void remove(int key) { ... } : digunakan untuk menghapus pair dari hash table.
-  Menggunakan Traversal
    - void traverse() { ... } : digunakan untuk mencetak semua key value pair dalam hash table.
- Menggunakan Main
    - int main() { ... } : digunakan untuk menjalankan program yang akan membuat objek HashTable serta melakukan beberapa operasi seperti insertion, searching, deletion, serta traversal.

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/fcf981b0-3f6e-4d79-8c08-390cf946950f)
Pada output di atas akan langsung menampilkan seperti pada gambar di atas.
- Get key 1 : 10 : output ini menunjukkan bahwa kita akan mencari sebuah value yang sesuai dengan key 1 dalam hash table menggunakan fungsi 'get'. Disebabkan key 1 ada dalam hash table dnegan nilai 10 maka outputnya yaitu 10.
- Get key 4: -1 : oytput ini menunjukkan bahwa kita reach value yang sesuai dengan key yaitu 4 dalam hash table menggunakan fungsi get. Karena key 4 tidak ada dalam hash table, maka outputnya yaitu -1.
- : 10 dan 3: 30 : output ini akan menunjukkan bahwa kode akan melakukan traversal pada hash table menggunakan fungsi traverse. Fungsi ini mencetak setiap key-value pair dalam hash table. Dalam case ini kode akan memiliki dua key-value, key 1 dengan nilai value 10 dengan key 3 dengan nilai value 30.
- Tak lupa juga dalam kode di atas menggunakan beberapa operasi seperti insertion, searching, deletion, serta traversal.

### Guided 2
``` C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;

    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;

    employee_map.print();

    return 0;
}
```
### Interpretasi
Kode di atas merupakan kode yang menjalankan kode Hash Table. Berikut penjelasan lebih detailnya:
- Mengggunakan Header dan Konstanta 
    - #include <iostream> : import library input dan output yang digunakana dengan fungsi cout serta biasa digunakan saat bahasa pemograman berjenis c++.
    - #include <string> : import library berupa fungsi string
    - #include <vector> : import fungsi vector 
    - using namespace std; : mengakses fungsi dan variabel tanpa harus menggunakan prefix atau dapat disebut dengan imbuhan
    - onst int TABLE_SIZE = 11; : mendefinisikan TABLE_SIZE dengan nilai 11 yang akan digunakan sebagai hash table.
- Menggunakan Class HashNode
    - class HashNode { ... }; untuk menyimpan data nama dan nomor hp karyawan
    - string name;: menyimpan nama karyawan
    - string phone_number; : menyimpan nomor hp karyawan
    - HashNode(string name, string phone_number) { ... } : menginisialisasi atribut name dan phone_number dengan nilai yang diberikan
- Menggunakan Class HashMap 
    - class HashMap { ... }; : digunakan untuk menggunakan implementasikan hash table
    - vector<HashNode*> table[TABLE_SIZE]; : menyimpan array pada vector, di mana setiap vector akam menyimpan pointer ke HashNode
    - int hashFunc(string key) { ... } : menghitung nilai hash dari key yang diberikan.
    - void insert(string name, string phone_number) { ... } : menambahkan data karyawan ke table hash.
    - void remove(string name) { ... } : menghapus data karyawan dari table hash
    - tring searchByName(string name) { ... } : mencari nomor hp karyawan dari tablle hash.
- Menggunakan Main 
    - int main() { ... } : fungsi main untuk menjalankan kode
    - HashMap employee_map; : membuat objek yang akan digunakan untuk menyimpan data karyawan
    - employee_map.insert("Mistah", "1234"); : menambahkan data karyawan dengan nama 'Mistah' serta nomor hp 1234 ke hash table
    - employee_map.insert("Pastah", "5678") : menambahkan data karyawan dengan nama 'Pastah' serta nomor hp 5678 ke hash table
    - employee_map.insert("Ghana", "91011"); : menambahkan data karyawan dengan nama 'Ghana' serta nomor hp 91011 ke hash table
    - cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl; : mencari nomor hp karyawan dengan nama "Mistah" serta mencetak hasilnya.
    - cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl; : mencari nomor hp karyawan dengan nama "Pastahh" serta mencetak hasilnya.
    - employee_map.remove("Mistah"); : menghapus data karyawan dengan nama "Mistah" dari hash table
    - cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl; :  untuk mencari nomor hp karyawan dengan nama "Mistah" setelah dihapus dan print hasilnya
    - cout << "Hash Table : " << endl; : print header untuk hash table
    - employee_map.print(); : print isi hash table

#### Output
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/f2f321ce-c925-4a2a-9dbd-51f0c4f83cf1)
Kode di atas akan menampilkan sebuah tampilan seperti gambar di atas untuk mencetak sebuah hash table yang kemungkinan berbeda-besa tergantung pada bagaimana tabrakan diselesaikan selama penyisipan serta bagaiman node disimpan maupun dihapus. Namun, output harus mencerminkan proses yang diharapkan dari penyisipan, pencarian, serta penghapusan elemen dari hash table.

## Unguided 

### 1. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :
    a.	Setiap mahasiswa memiliki NIM dan nilai.
    b.	Program memiliki tampilan pilihan menu berisi poin C.
    c.	Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).

```C++
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Mahasiswa {
public:
    string nim;
    int nilai;

    Mahasiswa(string nim, int nilai) {
        this->nim = nim;
        this->nilai = nilai;
    }
};

class HashTable {
private:
    vector<Mahasiswa*> table[10];

public:
    int hashFunction(string nim) {
        int hash = 0;
        for (char c : nim) {
            hash += c;
        }
        return hash % 10;
    }

    void tambahData(Mahasiswa* mahasiswa) {
        int index = hashFunction(mahasiswa->nim);
        table[index].push_back(mahasiswa);
    }

    void hapusData(string nim) {
        int index = hashFunction(nim);
        for (int i = 0; i < table[index].size(); i++) {
            if (table[index][i]->nim == nim) {
                table[index].erase(table[index].begin() + i);
                break;
            }
        }
    }

    Mahasiswa* cariDataNIM(string nim) {
        int index = hashFunction(nim);
        for (Mahasiswa* mahasiswa : table[index]) {
            if (mahasiswa->nim == nim) {
                return mahasiswa;
            }
        }
        return nullptr;
    }

    vector<Mahasiswa*> cariDataNilai(int nilaiAwal, int nilaiAkhir) {
        vector<Mahasiswa*> hasil;
        for (int i = 0; i < 10; i++) {
            for (Mahasiswa* mahasiswa : table[i]) {
                if (mahasiswa->nilai >= nilaiAwal && mahasiswa->nilai <= nilaiAkhir) {
                    hasil.push_back(mahasiswa);
                }
            }
        }
        return hasil;
    }
};

void tampilanMenu() {
    cout << "=============Pilih menu:==============" << endl;
    cout << "1. Tambah data" << endl;
    cout << "2. Hapus data" << endl;
    cout << "3. Cari data berdasarkan NIM" << endl;
    cout << "4. Cari data berdasarkan rentang nilai" << endl;
}

int main() {
    HashTable hashTable;
    while (true) {
        tampilanMenu();
        int pilihan;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;
        if (pilihan == 1) {
            string nim;
            int nilai;
            cout << "Masukkan NIM: ";
            cin >> nim;
            cout << "Masukkan nilai: ";
            cin >> nilai;
            Mahasiswa* mahasiswaBaru = new Mahasiswa(nim, nilai);
            hashTable.tambahData(mahasiswaBaru);
        } else if (pilihan == 2) {
            string nim;
            cout << "Masukkan NIM yang akan dihapus: ";
            cin >> nim;
            hashTable.hapusData(nim);
        } else if (pilihan == 3) {
            string nim;
            cout << "Masukkan NIM yang akan dicari: ";
            cin >> nim;
            Mahasiswa* mahasiswaDitemukan = hashTable.cariDataNIM(nim);
            if (mahasiswaDitemukan != nullptr) {
                cout << "Mahasiswa ditemukan: " << mahasiswaDitemukan->nim << ", " << mahasiswaDitemukan->nilai << endl;
            } else {
                cout << "Mahasiswa tidak ditemukan" << endl;
            }
        } else if (pilihan == 4) {
            int nilaiAwal, nilaiAkhir;
            cout << "Masukkan nilai awal: ";
            cin >> nilaiAwal;
            cout << "Masukkan nilai akhir: ";
            cin >> nilaiAkhir;
            vector<Mahasiswa*> hasil = hashTable.cariDataNilai(nilaiAwal, nilaiAkhir);
            if (!hasil.empty()) {
                cout << "Mahasiswa dengan nilai dalam rentang " << nilaiAwal << " - " << nilaiAkhir << ":" << endl;
                for (Mahasiswa* mahasiswa : hasil) {
                    cout << mahasiswa->nim << ", " << mahasiswa->nilai << endl;
                }
            } else {
                cout << "Tidak ada mahasiswa dengan nilai dalam rentang tersebut" << endl;
            }
        }
    }
    return 0;
}
```
#### Interpretasi 
Kode di atas merupakan kode yang digunakan untuk hash table kasus tersebut :
- Menggunakan Class Mahasiswa
    - class Mahasiswa { ... }; : dugunakan untuk menyimpan data mahasiswa 
    - string nim; : digunakan untuk menyimpan nomor induk mahasiswa
    - int nilai;: Atribut nilai : berfungsi untuk menyimpan nilai mahasiswa
    - Mahasiswa(string nim, int nilai) { ... } : menginisialisasi atribut nim dan nilai dengan nilai yang diberikan
- Menggunakan Class Hash Table 
    - class HashTable { ... }; : berfungsi untuk mengimplementasikan hash table
    - vector<Mahasiswa*> table[10]; : menyimpan array pada vector, di mana setiap vector akan menyimpan pointer ke mahasiswa
    - int hashFunction(string nim) { ... } : menghitung nilai hash dari NIM.
    - void tambahData(Mahasiswa* mahasiswa) { ... } : menambahkan data mahasiwa ke hash table.
    - void hapusData(string nim) { ... } : menghapus data mahasiswa dari hash table.
    - Mahasiswa* cariDataNIM(string nim) { ... } : mencari data mahasiswa berdasarkan NIM
    - vector<Mahasiswa*> cariDataNilai(int nilaiAwal, int nilaiAkhir) { ... } : mencari data mahasiswa berdasarkan rentang nilai.
- Menggunakan Tampilan Menu
    - void tampilanMenu() { ... } : digunakan untuk menampilkan menu pilihan kepada user
- Menggunakan Fungsi Main
    - Fungsi main ini digunakan untuk menjalankan seluruh operasi yang ada di kode.

#### Output
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/16063332-b674-4cfe-8217-a3ee87ff5618)
Pada kode di atas akan menampilkan sebuah output berupa tampialan output interaktif dengan empat menu pilihan yaitu Tambah data, hapus data, cari data berdasarkan NIM, serta cari data berdasarkan rentang nilai. Output ini bisa dipilih dengan interaktif sesuai input oleh user.


## Kesimpulan
1. Hash Table yaitu merupakan struktur data yang mendasar secara efisien menyimpan serta mengambil data dengan cara yang memungkinkan akses cepat.
2. Fungsi hash diguankan untuk mengambil kunci serta mengembalikan indeks ke dalam tabel hash. Seperti metode pembagian, metode perkalian, serta hashing universal
3. Penerapan Hash table seperti pada basis data, caching, tabel simbol, serat perutean jaringan
4. Teknik dalam hash tabel yaitu ada hashing dan linear probing


## Referensi
[1] Barnes & Noble, Hash Tables, Sparknotes, https://www.sparknotes.com/cs/searching/hashtables/section.html


[2] Santosa, I.P., Struktur Data dan Algoritma, Andi
Offset, Yogyakarta, 2004.

[3] B. M. Rao and S. Aguru, “A Hash Based Frequent Itemset Mining using Rehashing,” International
Journal on Recent and Innovation Trends in Computing and Communication, vol. 2, no. 12, 2014.

[4] geeks for geeks, "Hashing in Data Structure", Diakses online pada 03/06/2024 : https://www.geeksforgeeks.org/hashing-data-structure/ 
