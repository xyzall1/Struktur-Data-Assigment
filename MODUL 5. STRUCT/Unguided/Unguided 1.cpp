#include<iostream>

using namespace std;

struct buku{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    int harga_buku;
};buku data1[5];

int main(){

    data1[0].judul_buku = "Sebuah Seni Untuk Bersikap Bodo Amat";
    data1[1].judul_buku = "Sebuah Seni Untuk Bersikap Tidak Bodo Amat";
    data1[2].judul_buku = "1001 Cara Sukses di Usia Tua";
    data1[3].judul_buku = "3000 Cara Meningkatkan Kinerja Otak";
    data1[4].judul_buku = "Cara Menikmati Hidup Tanpa Beban";

    data1[0].pengarang = "Aurel Rowling";
    data1[1].pengarang = "Aliana Sawafi";
    data1[2].pengarang = "Rosa Nur";
    data1[3].pengarang = "Dewanti Angguna";
    data1[4].pengarang = "Laksita Ardelia";

    data1[0].penerbit = "Garam Media";
    data1[1].penerbit = "Gula Media";
    data1[2].penerbit = "Erlangga";
    data1[3].penerbit = "Garuda";
    data1[4].penerbit = "Empat Mata";

    data1[0].tebal_halaman = 233;
    data1[1].tebal_halaman = 290;
    data1[2].tebal_halaman = 157;
    data1[3].tebal_halaman = 480;
    data1[4].tebal_halaman = 670;

    data1[0].harga_buku = 600000;
    data1[1].harga_buku = 34000;
    data1[2].harga_buku = 459000;
    data1[3].harga_buku = 670000;
    data1[4].harga_buku = 870000;
    

    
    for(int i=0; i<5; i++){
    cout<<"Data Buku ke-"<<i+1<<endl;
    cout<<"Judul: "<<data1[i].judul_buku<<endl;
    cout<<"Pengarang: "<<data1[i].pengarang<<endl;
    cout<<"Penerbit: "<<data1[i].penerbit<<endl;
    cout<<"Tebal Halaman: "<<data1[i].tebal_halaman<<endl;
    cout<<"Harga: "<<data1[i].harga_buku<<endl;
    cout<<endl;
    cout<<endl;
    }
    return 0;
}