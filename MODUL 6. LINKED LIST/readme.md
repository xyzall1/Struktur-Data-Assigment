# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
1. Pengertian

Linked list merupakan salah satu kumpulan elemen data yang disebut sebgai node di mana urutanyya ditentukan oleh suatu pointer [1]. Perlu kita ketahui setiap elemen atau disebut dnegan node dari suatu linked list terdiri atas dua bagian yaitu INFO yang berisikan tentang elemen data yang bersangkutah lalu ada berupa NEXT atau link field / next pointer field yang berisi alamat dari elemen (node) selanjutnya yang dituju.

Berikut ini sebuah contoh linked list yang terdiri atas 4 node :
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/8165b91e-82bd-4cff-ad18-122d6a51c207)
Pada node ke-4 field NEXT yang berisi NULL, artinya node ke-4 tersebut adalah node terakhir. Node dalam linked list tidak selalu harus digambarkan paralel seperti pada gambar di atas. Linke list pada contoh di atas dapat pula digambarkan seperti berikut ini :
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/7d27654a-4ce5-4890-8127-01431d345d9a)
Namun jika linked list disajikan dalam gambar di atas maka akan banyak ruang yang diperlukan untuk menyatakan tempat field pointer serta diperlukan waktu yang lebih banyak untuk mencari suatu node dalam linked list. Di sisi lain juga ada keuntungan berupa jenis data yang berbeda dapat di-link serta operasi Remove dan Insert hanya dilakukan untuk mengubah pointernya saja [2].

2. Jenis Linked List

    A. Single Linked List
    Single Linked List ini memiliki satu pointer untuk setiap node yang menunjuk ke node berikutnya, artinya hanya satu arah.
    ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/5ffd2d00-fee9-4921-a060-99a27037fd50)
    Dapat kita lihat bahwa setiap record mempunyai satu pointer yang menunjuk ke record berikutnya, dengan pengecualian untuk record terakhir yang menunjuk ke record yang tidak ada. Record yang tidak ada tersebut kita definisikan dengan nilai NULL yang artinya juga sebagai akhir suatu List.

    B. Double Linked List
    Double Linked List ini memiliki dua pointer yang menunjuk ke node berikutnya dan sebelumnya, artinya memiliki dua arah.
    ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/eff9df0c-5276-4062-8b49-df43c13fcec8)
    Double Linked List memiliki pointer node pertama yang tidak memiliki pendahulu, jadi pointer yang menunjuk ke elemen sebelumnya adalah elemen yang tidak ada atau disebyt dengan NULL serta analog untuk node terakhir di mana pointer yang menunjuk ke elemen berikutnya adalah elemen yang tidak ada [3].

3. Operasi Dasar Pada Linked List
Ada beberapa aturan yang diberlakukan pada linked list seperti :
    A. Jika P adalah suatu variabel pointer, maka nilainya adalah alamat atau lokasi dari variabel lain yang dituju [4].
    B. Operasi yang didefinisikan pada suatu variabel pointer yaitu :
        - Test apakah sama dengan NULL
        - Test untuk kesamaan dengan variabel pointer lain
        - Menetapkan sama dengan NULL
        - Menetapkan menuju ke node lain

4. Kegunaan Linked List 
    A. Linked List dapat digunakan untuk mengimpelmentasikan struktur data lainseperti stack, queue, graf, dll
    B. Digunakan untuk melakukan operasi aritmatika pada bilangan long integer
    C. Dipakai untuk representasi matriks rongga
    D. Digunakan untuk alokasi file yang ditautkan
    E. Membantu dalam manajemen memori [5]



## Guided 

### 1. Single Linked List

```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node {
    int data;
    Node *next;
};

Node *head;
Node *tail;

// Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah list kosong
bool isEmpty() {
    return (head == NULL);
}

// Tambah Data di Depan
void insertDepan(int nilai) {
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Data di Belakang
void insertBelakang(int nilai) {
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Hitung Jumlah Node
int hitungList() {
    Node *hitung = head;
    int jumlah = 0;
    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

// Tambah Data di Tengah
void insertTengah(int data, int posisi) {
    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi diluar jangkauan" << endl;
    } else if (posisi == 1) {
        cout << "Posisi bukan posisi tengah" << endl;
    } else {
        Node *baru = new Node();
        baru->data = data;
        Node *bantu = head;
        for (int nomor = 1; nomor < posisi - 1; nomor++) {
            bantu = bantu->next;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Node di Depan
void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        if (head->next != NULL) {
            head = head->next;
        } else {
            head = tail = NULL;
        }
        delete hapus;
    } else {
        cout << "List kosong!" << endl;
    }
}

// Hapus Node di Belakang
void hapusBelakang() {
    if (!isEmpty()) {
        Node *hapus = tail;
        if (head != tail) {
            Node *bantu = head;
            while (bantu->next != tail) {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        } else {
            head = tail = NULL;
        }
        delete hapus;
    } else {
        cout << "List kosong!" << endl;
    }
}

// Hapus Node di Tengah
void hapusTengah(int posisi) {
    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi di luar jangkauan" << endl;
    } else if (posisi == 1) {
        cout << "Posisi bukan posisi tengah" << endl;
    } else {
        Node *hapus;
        Node *bantu = head;
        for (int nomor = 1; nomor < posisi - 1; nomor++) {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    }
}

// Ubah Data di Depan
void ubahDepan(int data) {
    if (!isEmpty()) {
        head->data = data;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Tengah
void ubahTengah(int data, int posisi) {
    if (!isEmpty()) {
        if (posisi < 1 || posisi > hitungList()) {
            cout << "Posisi di luar jangkauan" << endl;
        } else if (posisi == 1) {
            cout << "Posisi bukan posisi tengah" << endl;
        } else {
            Node *bantu = head;
            for (int nomor = 1; nomor < posisi; nomor++) {
                bantu = bantu->next;
            }
            bantu->data = data;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Belakang
void ubahBelakang(int data) {
    if (!isEmpty()) {
        tail->data = data;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Semua Node
void clearList() {
    Node *hapus;
    while (head != NULL) {
        hapus = head;
        head = head->next;
        delete hapus;
    }
    tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan List
void tampil() {
    Node *bantu = head;
    if (!isEmpty()) {
        while (bantu != NULL) {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

int main() {
    init();
    insertDepan(3); tampil();
    insertBelakang(5); tampil();
    insertDepan(2); tampil();
    insertDepan(1); tampil();
    hapusDepan(); tampil();
    hapusBelakang(); tampil();
    insertTengah(7, 2); tampil();
    hapusTengah(2); tampil();
    ubahDepan(1); tampil();
    ubahBelakang(8); tampil();
    ubahTengah(11, 2); tampil();
    clearList();
    return 0;
}



```
#### Interpretasi
 Kode di atas merupakan kode yang menjalankan linked list non-circular menggunakan C++. Kode di atas dihubungkan sata sama lain dengan pointer lalu pada kode tersebut menggunakan data untuk menyimpan nilai serta menggunakan pointer next yang menunjuk ke simpul berikutnya dengan berurutan. Dimana dalam kondisi kode tersebut menggunakan deklarasi struct node untuk membuat struktur data Node yang menyimpan dua anggota tadi.

Beberapa fungsi yang digunakan dalam kode di atas seperti : 'init()' untuk menginisialisasi pointer, 'isEmpty()' untuk memeriksa linked list kosong atau tidak, 'insertDepan()' untuk menambahkan node baru di depan linked list, 'insertBelakang()' menambahkan node baru yang berada di belakang, 'hitungList()' untuk menghitung jumlah node, 'insertTengah()' untuk menambahkan di posisi tengah, 'hapusDepan()' untuk menghapus node pertama dari linked list, 'hapusBelakang()' untuk menghapus node terakhir dari linked list, 'hapusTengah()' untuk menghapus node tengah dari linked list, 'ubahBelakang()' untuk mengubah node terakhir, 'ubahDepan()' untuk mengubah node pertama, 'ubahTengah()' untuk mengubah node tengah, 'clearList()' untuk menghapus semua isi linked list, 'tampil()' menampilkan isi linked list dan 'main()' untuk menguji fungsi-fungsi yang telah didefinisikan
 
#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/5a2ae115-315f-4412-ad94-fa28504314d2)
kode di atas akan menjalankan output. Lalu menampilkan angka 3 untuk yang pertama lalu angka 5 dimasukkan ke belalang, setelah itu angka 2 dimasukkan bagian depan, lalu angka satu dimasukkan di bagian depan, setelah itu angka 1 dimasukan ke depan, lalu node pertama (1) dihapus serta node terakhir (5) dihapus, lalu angka 7 dimasukkan ke tengah, angka 7 dihapus, lalu ubah data node pertama menjadi 1, lalu data belakang diubah menjadi 8, serta angka 11 ditambahkan dibagian tengah. Dan 'List behasil terhapus!' artinya semua node dihapus serta daftar kosong.

### 2. Double Linked List
```C++
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
#### Interpretasi
Kode di atas merupakan kode yang menjalankan Double Linked List, pada deklarasi node di kode ini kita menggunakan tiga definisi kelas yaitu 'data' untuk menyimpan nilai data, 'prev' untuk menunjuk node sebelumnya serta 'next' untuk menunjukkan ke node berikutnya.
Saat mendeklarasikan DoublyLinkedList() kode tersebut memiliki dua pointer 'head' dan 'tail' untuk menjadi penanda awal dan akhir dari daftar. Kemudian kode akan menginisialisasi 'head' dan 'tail' menjadi 'nullptr' ketika objek 'DoublyLinkedList'. Kemudian kita menggunakan beberapa kode sepert 'push()' untuk menambahkan data, 'pop()' untuk menghaous data dari depan daftar, 'update()' untuk memperbarui data, 'deleteAll()' untuk menghapus semua data dari daftar, 'display()' untuk menampilkan data dalam daftar, lalu kode ini menggunakan main funcotion 'main()'. Kode ini nantinya akan menampilkan output yang interaktif untuk mengelola Doubly Linked List, yang terdiri dari menambah, menghapus, memperbarui, menampilkan serta menghapus semua data. Sesuai inputan dari pengguna. 


#### Output
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/53f10b93-6877-4795-a220-6fc7628456bd)
Tampilan dari kode di atas yaitu akan ada output interaktif yang dapat dijalankan oleh pengguna, beberapa pilihan seperti menambahkan data, menghapus data, mempebarui data, membersihkan data, menampilkan data, lalu keluar dari laman interaktif tersebut. Kode akan menjalankan sesuai inputan dari pengguna.

### 3. Single Linked List Cicular
```C++
#include <iostream> 
using namespace std; 

/// PROGRAM SINGLE LINKED LIST CIRCULAR 

// Deklarasi Struct Node 
struct Node { 
    string data; 
    Node *next; 
}; 

Node *head, *tail, *baru, *bantu, *hapus; 

void init() { 
    head = NULL; 
    tail = head; 
} 

// Pengecekan 
int isEmpty() { 
    if (head == NULL) 
        return 1; // true 
    else 
        return 0; // false
} 

// Buat Node Baru 
void buatNode(string data) { 
    baru = new Node; 
    baru->data = data; 
    baru->next = NULL; 
} 

// Hitung List 
int hitungList() { 
    bantu = head; 
    int jumlah = 0; 

    while (bantu != NULL) { 
        jumlah++; 
        bantu = bantu->next; 
    } 

    return jumlah; 
} 

// Tambah Depan 
void insertDepan(string data) { 
    // Buat Node baru 
    buatNode(data); 

    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        while (tail->next != head) { 
            tail = tail->next; 
        } 

        baru->next = head; 
        head = baru; 
        tail->next = head; 
    } 
} 

// Tambah Belakang 
void insertBelakang(string data) { 
    // Buat Node baru 
    buatNode(data); 

    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        while (tail->next != head) { 
            tail = tail->next; 
        } 

        tail->next = baru; 
        baru->next = head; 
    } 
} 

// Tambah Tengah 
void insertTengah(string data, int posisi) { 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        baru->data = data; 

        // transversing 
        int nomor = 1; 
        bantu = head; 

        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 

        baru->next = bantu->next; 
        bantu->next = baru; 
    } 
} 

// Hapus Depan 
void hapusDepan() { 
    if (isEmpty() == 0) { 
        hapus = head; 
        tail = head; 

        if (hapus->next == head) { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } else { 
            while (tail->next != hapus) { 
                tail = tail->next; 
            } 

            head = head->next; 
            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Belakang 
void hapusBelakang() { 
    if (isEmpty() == 0) { 
        hapus = head; 
        tail = head; 

        if (hapus->next == head) { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } else { 
            while (hapus->next != head) { 
                hapus = hapus->next; 
            } 

            while (tail->next != hapus) { 
                tail = tail->next; 
            } 

            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
    } else { 
        cout << "List masih kosong!" << endl;
    } 
} 

// Hapus Tengah 
void hapusTengah(int posisi) { 
    if (isEmpty() == 0) { 
        // transversing 
        int nomor = 1; 
        bantu = head; 

        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 

        hapus = bantu->next; 
        bantu->next = hapus->next; 
        delete hapus; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus List 
void clearList() { 
    if (head != NULL) { 
        hapus = head->next; 

        while (hapus != head) { 
            bantu = hapus->next; 
            delete hapus; 
            hapus = bantu; 
        } 

        delete head; 
        head = NULL; 
    } 

    cout << "List berhasil terhapus!" << endl; 
} 

// Tampilkan List 
void tampil() { 
    if (isEmpty() == 0) { 
        tail = head; 

        do { 
            cout << tail->data << ends; 
            tail = tail->next; 
        } while (tail != head); 

        cout << endl; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

int main() { 
    init(); 
    insertDepan("Ayam"); 
    tampil(); 
    insertDepan("Bebek"); 
    tampil(); 
    insertBelakang("Cicak"); 
    tampil(); 
    insertBelakang("Domba"); 
    tampil(); 
    hapusBelakang(); 
    tampil(); 
    hapusDepan(); 
    tampil(); 
    insertTengah("Sapi", 2); 
    tampil(); 
    hapusTengah(2); 
    tampil(); 
    return 0; 
}

```
#### Interpretasi
Kode di atas merupakan kode untuk menampilkan single linked list circular, pada kode ini kita menggunakan dua node yang yaitu 'data' untuk menyimpan string dan 'next' untuk menunjuk ke node berikutnya dalam linked list, lalu kita membuat variabel yaitu seperti 'head', 'tail', 'baru', 'bantu', dan 'hapus' yang digunakan untuk mengoperasikan linked list. Kemudian kita menggunakan init() untuk menginisialisasi 'head' dan 'tail' yang akan menjadi 'NULL' saat program dimulai lalu saat isEmpty() digunakan memeriksa linked list kosong atau tidak, lalu ada buatNode() untuk membuat node baru dengan data yang diberikan, 'hitungList()' untuk menghitung jumlah node dalam linked list, 'inserDepan()' untuk menambahkan node baru di depan linked list serta 'insertBelakang()' menambahkan node baru di belakang linked list serta 'insertTengah()' menambahkan node baru di tengah linked list pada node ke (posisi-1), lalu 'hapusDepan()' untuk menghapus node pertama, 'hapusBelakang()' untuk menghapus node terkahir dari linked list, lalu 'hapusTengah()' untuk menghapus node di tengah linked list, 'clearList()' untuk menghapus semua node dalam linked list, tampil() untuk menampilkan isi dari linked list, serta tak lupa untuk menggunakan main function 'main()' untuk mengoperasikan semua function tadi. Dengan begit, kode akan menjalankan beberapa operasi dasar dari single linked list cicular seperti insert, hapus ,serta tampilkan.


#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/7d36d62e-393e-42a1-9fbb-fe5a971f9d68)
Setelah kode dijalankan kode akan menampikan berupa 'Ayam', lalu menambahkan 'Bebek' di depan, lalu menambahkan 'Cicak' dan 'Domba' di akhir, lalu menghapus 'Domba' dalam node terakhir dan 'Bebek' pada node pertama serta menambahkan 'Sapi' pada tengah-tengah node.


## Unguided 

### 1. Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan NIM mahasiswa.

```C++
#include <iostream>
using namespace std;

// Struktur Node
struct Node {
    string nama;
    string nim;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    // Konstruktor
    LinkedList() {
        head = nullptr;
    }

    // Fungsi untuk menambahkan node di depan
    void tambahDepan(string nama, string nim) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = head;
        head = newNode;
    }

    // Fungsi untuk menambahkan node di belakang
    void tambahBelakang(string nama, string nim) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Fungsi untuk menambahkan node di tengah setelah node tertentu
    void tambahTengah(string nama, string nim, int posisi) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;

        if (posisi <= 0) {
            cout << "Posisinya gak valid nih!" << endl;
            return;
        }

        if (posisi == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        for (int i = 1; i < posisi - 1; i++) {
            if (current == nullptr) {
                cout << "Posisi gak valid nih!" << endl;
                return;
            }
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Posisinya gak valid nih" << endl;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    // Fungsi untuk mengubah data pada node pertama
    void ubahDepan(string nama, string nim) {
        if (head == nullptr) {
            cout << "Linked list kosong cuy!" << endl;
            return;
        }
        head->nama = nama;
        head->nim = nim;
    }

    // Fungsi untuk mengubah data pada node terakhir
    void ubahBelakang(string nama, string nim) {
        if (head == nullptr) {
            cout << "Linked list kosong cuy!" << endl;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->nama = nama;
        current->nim = nim;
    }

    // Fungsi untuk mengubah data pada node di tengah
    void ubahTengah(string nama, string nim, int posisi) {
        if (posisi <= 0) {
            cout << "Posisinya gak valid nih!" << endl;
            return;
        }

        Node* current = head;
        for (int i = 1; i < posisi; i++) {
            if (current == nullptr) {
                cout << "Posisinya gak valid nih!" << endl;
                return;
            }
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Posisinya gak valid nih!" << endl;
            return;
        }

        current->nama = nama;
        current->nim = nim;
    }

    // Fungsi untuk menghapus node pertama
    void hapusDepan() {
        if (head == nullptr) {
            cout << "Linked list kosong cuy" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node pertama udah dihapus nih." << endl;
    }

    // Fungsi untuk menghapus node terakhir
    void hapusBelakang() {
        if (head == nullptr) {
            cout << "Linked list kosong cuy!" << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            cout << "Node terakhir udah dihapus nih." << endl;
            return;
        }
        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
        cout << "Node terakhir udah dihapus nih." << endl;
    }

    // Fungsi untuk menghapus node di tengah
    void hapusTengah(int posisi) {
        if (posisi <= 0) {
            cout << "Posisinya gak valid nih!" << endl;
            return;
        }
        if (posisi == 1) {
            hapusDepan();
            return;
        }
        Node* current = head;
        Node* prev = nullptr;
        for (int i = 1; i < posisi; i++) {
            if (current == nullptr) {
                cout << "Posisinya gak valid nih!" << endl;
                return;
            }
            prev = current;
            current = current->next;
        }
        if (current == nullptr) {
            cout << "Posisinya gak valid nih!" << endl;
            return;
        }
        prev->next = current->next;
        delete current;
        cout << "Node di posisi " << posisi << " udah dihapus nih." << endl;
        cout << "============================================" << endl;
    }

    // Fungsi untuk menghapus seluruh node
    void hapusList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
        cout << "Semua node udah dihapus nih." << endl;
        cout << "============================" << endl;
    }

    // Fungsi untuk menampilkan isi linked list
    void tampilkan() {
        Node* current = head;
        if (current == nullptr) {
            cout << "Posisinya gak valid nih" << endl;
            cout << "=======================" << endl;
            return;
        }
        cout << "Daftar Semua Data nya nih!" << endl;
        cout << "==========================" << endl;
        while (current != nullptr) {
            cout << "Nama : " << current->nama << ", NIM : " << current->nim << endl;
            current = current->next;
        }
    }

    // Destruktor
    ~LinkedList() {
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

int main() {
    LinkedList linkedList;
    int pilihan, posisi;
    string nama, nim;

    cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
    cout << "=======================================" << endl;
    do {
        cout << "\nMenu: " << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampilkan" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi berapa nih : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                linkedList.tambahDepan(nama, nim);
                cout << "Data berhasil ditambahin nih!" << endl;
                cout << "=============================" << endl;
                break;
            case 2:
                cout << "Masukkan nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                linkedList.tambahBelakang(nama, nim);
                cout << "Data berhasil ditambahin nih!" << endl;
                cout << "=============================" << endl;
                break;
            case 3:
                cout << "Masukkan nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan posisi: ";
                cin >> posisi;
                linkedList.tambahTengah(nama, nim, posisi);
                cout << "Data berhasil ditambahin nih!" << endl;
                cout << "=============================" << endl;
                break;
            case 4:
                cout << "Masukkan nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                linkedList.ubahDepan(nama, nim);
                cout << "Data berhasil diubah nih!" << endl;
                cout << "=========================" << endl;
                break;
            case 5:
                cout << "Masukkan nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                linkedList.ubahBelakang(nama, nim);
                cout << "Data berhasil diubah nih!" << endl;
                cout << "=========================" << endl;
                break;
            case 6:
                cout << "Masukkan nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan posisi : ";
                cin >> posisi;
                linkedList.ubahTengah(nama, nim, posisi);
                cout << "Data berhasil diubah nih!" << endl;
                cout << "=========================" << endl;
                break;
            case 7:
                linkedList.hapusDepan();
                break;
            case 8:
                linkedList.hapusBelakang();
                break;
            case 9:
                cout << "Masukkan posisi: ";
                cin >> posisi;
                linkedList.hapusTengah(posisi);
                break;
            case 10:
                linkedList.hapusList();
                break;
            case 11:
                linkedList.tampilkan();
                break;
            case 0:
                cout << "Keluar dari program yach terima kaxie :D" << endl;
                cout << "========================================" << endl;
                break;
            default:
                cout << "Sedih Pilihannya tidak valid nih!" << endl;
                cout << "===============================:(" << endl;
        }
    } while (pilihan != 0);

    return 0;
}
```
#### Interpretasi
Kode ini menampilkan kode yang menjalankan single list non-circular. Kita menggunakan struktur Node untuk menyimpan nama dan NIM lalu pointer 'next' untuk menunjukkan ke node berikutnya dalam linked list. Kode ini juga memiliki beberapa kelas LinkedList seperti konsturktor untuk inisialisasi 'head' menjadi 'nullptr' serta 'tambahDepan,Belakang,Tengah()' untuk menambahkan node sesuai dengan posisi, 'ubahDepan,Tengah,Belakang()' untuk mengubah data dalam node, lalu ada 'hapusDepan,Belakang,Tengah()' untuk menghapus node sesuai dengan posisi, tampilan() untuk menampilkan isi dari linked list, lalu ada destruktor untuk menghapus seluruh node dari linked list.

Tidak lupa ada fungsi 'main()' untuk menjalankan operasi-operasi pada linked list yang dipilih oleh pengguna, prosesnya melalui loop 'do-while' yang berakhir ketika pengguna memilih untuk keluar dari program yang dijalankan ketika memasukkan pilihan '0'.

#### Output:
1. Tampilan Menu :
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/470f2dc3-573a-49da-98fa-7078479a7d22)
output di atas akan menampilkan menu interaktif yang dapat diakses oleh user berupa tambah depan, tambah belakang, tambah tengah, lalu ubah (depan, belakang, dan tengah), lalu hapus (depan, belakang, tengah List), Tampilkan dan keluar sesuai dengan nomer yang akan dimasukkan oleh user.
2. Tampilan Operasi Tambah
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/6a463be6-ad20-4109-b5a9-666678a66a93)
Pada opsi tambah kita dapat menambahkan pada posisi depan, belakang, serta tengah. Jika kita menambahkan pada bagian tengah maka akan ada pilihan untuk memasukkan posisi data yang diinputkan oleh user tadi
3.  Tampilan Operasi Hapus
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/7b1e72e7-77ca-4fba-8136-737f97f7382b)
Ketika tampilan menghapus kita dapat memilih tiga pilihan yaitu hapus (depan, belakang, dan tengah) jika kita ingin menghapus tengah maka kita harus memasukkan posisi mana yang akan kita hapus.
4. Tampilan Operasi Ubah
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/80223771-5780-4ac5-a818-d3b608bb0e7f)
Saat user hendak mengubah, mereka dapat mengubah dan diberi beberapa pilihan seperti ubah depan, belakang, dan tengah.
5. Tampilan Operasi Tampilan Data & Keluar 
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/776fa1bb-f2f2-4c4e-8bd7-932cb1b60ee0)
Saat pengguna memilih untuk menampilkan data, maka kode akan menampilkan semua data yang sudah diinputkan tadi, lalu kli '0' untuk keluar dari operasi kode.


## Kesimpulan
Linked list merupakan salah satu kumpulan elemen data yang disebut sebgai node di mana urutanyya ditentukan oleh suatu pointer [1]. Perlu kita ketahui setiap elemen atau disebut dnegan node dari suatu linked list terdiri atas dua bagian yaitu INFO yang berisikan tentang elemen data yang bersangkutah lalu ada berupa NEXT atau link field / next pointer field yang berisi alamat dari elemen (node) selanjutnya yang dituju. Linked List mempunyai dua macam yaitu Single Linked List dan Double Linked List, lalu operasi dasar pada Linked List terdiri dari variabel pointer dan operasi yang ada pada satu variabel pointer. Lalu untuk kegunaan Linked List seperti (membantu dalam manajemen memori, mengalokasikan file yang ditautkan, digunakan dalam operasi bilangan long integer).



## Referensi
[1] A. S, Putra, "Artikel Struktur Data, dan Jaringan Komputer, 2018.

[2] H. Wijaya, W.S. Wardhono, I. Arwani, "Jurnal Pengembangan Teknologi Informasi dan Ilmu Komputer", vol. 2, no. 9, 2018.

[3] S. Dwi, "Asyiknya Belajar Struktur Data di planet C++", Elex media, Koputindo.

[4] Indrajit, E. Richardus, "Manajemen sistem informasi dan Teknologi Informasi", 2002. 

[5] P.S, Desphande, O.G. Kakde, "C dan Data structures", Charles River Media, Inc, Massachusetts.