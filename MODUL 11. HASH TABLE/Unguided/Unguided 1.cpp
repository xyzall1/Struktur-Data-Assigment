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