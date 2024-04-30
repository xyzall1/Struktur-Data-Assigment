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