# <h1 align="center">Laporan Praktikum Modul Graph dan Tree </h1>
<p align="center">Rosa Nur Aliana Sawafi</p>

## Dasar Teori
1. Graph 
    - A. Pengertian Graph
        Graph merupakan salah satu struktur data yang mendasar lalu digunakan dalam ilmu komputer serta untuk mempresentasikakan hubungan antar objek [1]. Dimana dalam graph ini ada beberapa kumpulan node (disebut dengan simpul) serta sisi yang menghubungkannya, node (disebut juga simpul) node ini dapat mewakili entitas, seperti orang, tempat, atau benda, sedangkan tepi mewakili hubungan antara entitas tersebut. Graph ini dapat mewakili seperti jaringan sosial, jaringan transportrasi serta jaringan komputer. 

    - B. Jenis Graph 
        1. Graph Berarah 
            graph yang memiliki tepi berarah dikenal sebagai graph berarah.
            ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/ae8aff7e-6f76-44f9-b5d1-c3294d0d6786)
        2. Graph tak berarah
            graph dengan tepi tidak berarah dikenal sebagai graph tidak berarah. Graph berarah yaiu graph yang semua sisinya berarah satu arah, sedangkan graph tidak berarah yaitu graph yang semua sisinya dua arah.
            ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/e1a8edef-6552-4f5a-81d3-e716ef85b87c)
        3. Weighted Graph
            Jenis graph yang cabangnya diberi lebel bobot berupa bilangan numerik. Pemberian ini digunakan untuk memudahlan algoritma dalam menyelesaikan masalah.
            ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/c9844861-d1dd-4cbe-b5ae-1d0390d8fdd4)
        4. Unweighted Graph
            Jenis graph yang tidak memiliki bobot pada koneksinya, namun hanya mempertimbangkan apakah dua node saling terhubung atau tidak [3].
    - C. Karakteristik Graph
        Graph memiliki karakteristik sebagai berikut.
        - Jarak maksimum dari sebuah simpul ke semua simpul lainnya dianggap sebagai eksentrisitas dari simpul tersebut.
        - Titik yang memiliki eksentrisitas minimum dianggap sebagai titik pusat dari graph.
        - Nilai eksentrisitas minimum dari semua simpul dianggap sebagai jari-jari dari graph terhubung.
    - D. Fungsi dan Kegunaan Graph 
        Fungsi dan kegunaan graph sebagai berikut.
        - Graph digunakan untuk merepresentasikan aliran komputasi.
        - Graph dipakai pada sistem operasi untuk alokasi sumber daya.
        - Digunakan dalam pemodelan grafik.
        - Di sirkuit, graph dapat digunakan untuk mewakili titik sirkuit sebagai node dan kabel sebagai edge.
        - Google maps menggunakan graph untuk menemukan rute terpendek.
    - E. Kelebihan Graph
        - Dengan menggunakan graph kita dapat dengan mudah menemukan jalur terpendek dan tetangga dari node.
        - Graph membantu dalam mengatur data.
        - Karena strukturnya yang non-linier, membantu dalam memahami masalah yang kompleks dan visualisasinya.


2. Tree
    - A. Pengertian Tree 
    Tree atau dapat disebut dengan struktur data hierarki yang terdiri dari node-node yang dihubungkan oleh tepian. Setiap node ini dapat memiliki beberapa node anak, tetapi hanya memiliki satu node induk. Node paling atas pada pohon sendiri disebut dengan simpul akar.

    - B. Hal yang ada dalam pohon
        - Root node : node paling atas yang tak memiliki induk sehingga dikenal sebagai simpul akar.
        - Parent of a node : induk dari sebuah node.
        - Child of a node : penerus dari sebuah node.
        - Leaf node : simpul daun yang tak memiliki anak, atau simpul terluar.
        - Non-leaf node : node yang memiliki satu buah anak atau disebut simpul internal.
        - Path : urutan sisi yang berurutan dari node sumber ke node tujuan.
        - Ancestor : node yang muncul pada akar.
        - Descendent : node penerus yang ada pada jalur ke node daun.
        - Sibling : semua yang memeiliki induk yang sama.
        - Degree : jumlah node dari suatu simpul tertentu.
        - Depth of node : panajang jalur dari simpul ke akar.
        - Height of a node : jumlah tepi yang muncul dari jalur terpanjang dari node tersebut ke node daun.
        - Level of node : jumlah tepi yang ada dari simpul akar ke simpul tertentu [4] . 
    - C. Pohon jika direpresentasikan dalam memori
            ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/9df34d96-3cc1-4439-87f4-ae7358223d36)
            Setiap node akan berisi tiga bagian yaitu bagian data, alamat subpohon, serta alamat subpohon kanan. Jika ada node yang tidak memiliki anak, maka kedua bagian link akan memiliki nila NULL. 
    - D. Fungsi Tree
        -  Dalam kehidupan nyata, struktur data tree membantu dalam pengembangan game.
        - Domain Name Server juga menggunakan struktur data tree.
        - Membantu pengindeksan pada database.
    - E. Kelebihan 
        - Memungkinan subtree untuk dipindahkan dengan usaha yang minim.
        - Tree sangat baik digunakan untuk membuat hierarki data.
        - Mencerminkan hubungan data secara struktural.
        - Menawarkan operasi pencarian dan penyisipan yang efisien.
    - F. Jenis Tree
        - General Tree
            Tree yang tidak memiliki batasan jumlah node pada hierarki, jadi setiap simpul atau node bebas memiliki berapapun child node.
        -  Binary Tree  
            Tree yang simpulnya hanya dapat memiliki paling banyak 2 simpul anak (child node), biasanya kedua simpul tersebut niasa disebut simpul kiri (left node) dengan simpul kanan (right node). 
        -  Balanced Tree
            Apabila tinggi dari subtree sebelah kiri dan subtree sebelah kanan sama atau kalaupun berbeda hanya berbeda 1, maka disebut sebagai balanced tree. 
            ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/d16b6e8f-7398-4181-b799-0b2736d6682c)
        - Binary Search Tree
            Tree ini memiliki nilai pada simpul sebelah kiri lebih kecil daripada induknya, sedangkan nilai simpul sebelah kanan lebih besar dari induknya. jenis tree ini biasanya digunakan untuk algoritma pencarian dan pengurutan [2].
            ![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/84edb7dd-6f6d-4631-8db6-bc24890b51ea)


## Guided 
1. Program Graph
```C++
#include <iostream>
#include <iomanip>

using namespace std;

string simpul[7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};

int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0},
};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris] [kolom] != 0) {
                cout << " " << simpul[kolom] << " (" << busur[baris] [kolom] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```
#### Interpretasi
Kode di atas menggunakan kode dengan struktur data graph. Berikut penjelasan beberapa fungsi dari kode di atas seperti:

- #include <iostream>: Digunakan jika kita menggunakan bahasa pemograman C++
- #include <iomanip> : library untuk menentukan lebar dan layout output
- using namespace std; : deklarasi serta pengguunaan objek sstiap pemggunaan c++
- string simpul[7] = {...}; : menjelaskan simpul yang berisi 7 string yang mendefinisikan simpul dan graf.
- int busur[7][7] = {...}; : mendefinisikan busur yang berukuran 7 x 7 yang mewakili bobot busur antara simpul-simpul.
- void tampilGraph() : menampilkan graf yang diwakili oleh array simpul serta matriks dari busur
- for loop dalam tampilGraph() : iterasi setiap simpul dalam array serta menampilkan simpul beserta busur terhubungnya.
- int main() : menjalankan semu operasi pada kode
- tampilGraph() dipanggil dari main() : menampilkan semua graf yang sedang dijalankan.
- return 0; : mengembalikan 0 sebagai tanda bahwa kode yang dijalankan berhasil.
#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/300f73fd-7d2c-47bd-af76-9acaf352d70b)
Pada output di atas menamppilkan suatu grafik adjacency list yang di mana mempresentasikan jaringan kota-kota di Jawa, misalkan.
- Baris pertama menunjukkan bahwa kota Ciamis terhubung dengan kota Bandung dengan jarak 7 dan kota Bekasi dengan jarak 8.
- Lalu baris kedua berupa kota Bandung yang terhubung dengan kota Bekasi dengan jarak 5 dan kota Purwokerto dengan jarak 15.
- Kemudian baris ketiga kota Bekasi yang  terhubung dengan kota Ciamis dengan jarak 6 dan kota Cianjur dengan jarak 5.
- Begitupun seterusnya.

2. 
```C++
#include <iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(TNode *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder(TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    TNode *zero = new TNode(0);
    // 0
    // /\
    // NULL

    TNode *one = new TNode(1);
    TNode *five = new TNode(5);
    TNode *seven = new TNode(7);
    TNode *eight = new TNode(8);
    TNode *nine = new TNode(9);

    seven->left = one;
    // 7
    // /\
    // 1 NULL

    seven->right = nine;
    // 7
    // /\
    // 1 9

    one->left = zero;
    // 7
    // /\
    // 1 9
    // /\
    // 0 NULL

    one->right = five;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5

    nine->left = eight;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5
    // /
    // 8 NULL

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}
```
#### Interpretasi
Kode di atas menggunakan kode dengan struktur data Binary tree. Berikut penjelasan beberapa fungsi dari kode di atas seperti:

- Ada berupa deklarasi struct TNode yang merepresentasikan node dalam pohon biner. Setiap node memiliki tiga komponen yaitu seperti data untuk menyimpan nilai integer, left untuk menyimpan pointer ke node anak kiri, serta right untuk menyimpan pointer ke node anak arah kanan.
- Kemudian ada berupap konstruktor TNode yang digunakan untuk membuat node baru dengan nilai value dan menginisialisasi pointer left dan right ke NULL.
- Ada berupa fungsi preOrder yang digunakan untuk melakukan traversal pohon biner dengan urutan pre-order (root-left-right). Fungsi ini nantinya yang akan mencetak nilai node saat ini, kemudian melakukan rekursi ke node anak kiri lalu menuju ke arah kanan.
- Lalu ada fungsi inOrder yang digunakan untuk melakukan traversal pohon biner dengan urutan in-order (left-root-right). Fungsi ini anntinya yang akan melakukan rekursi ke node anak kiri, mencetak nilai node saat ini, lalu kemudian melakukan rekursi ke node anak kanan.
- Ada juga fungsi postOrder yang digunakan untuk melakukan traversal pohon biner dengan urutan post-order (left-right-root). Fungsi ini nantinya melakukan rekursi ke node anak kiri dan kanan yang next nya akan mencetak nilai node saat ini.
- Ada juga fungsi main yang tugasnya menjalankan seluruh operasi yang ada dalam kode.
- lalu yang terakhir berupa fungsi preOrder, inOrder, dan postOrder dipanggil untuk melakukan traversal pohon biner dan mencetak hasilnya.

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/30b002a7-de93-447c-a265-3539a2a9816b)
Kode di atas menampilkan tampilan output yang akan dijelaskan di bawah :
1. Pre-order traversal 
    Pada hal ini simpul saat dilewati terlebih dahulu lalu anak kiri kemudian ke anak kanan yang berupa outpunya 7 1 0 5 9 8.
2. In-order traversal :
    Pada hal ini simpul anak kiri dilewati terlebih dahulu, kemudian simpul saat ini lalu akhirnya ke anak kanan yang outputnya berupa 0 1 5 7 8 9.
3. Post-Order traversal :
    Pada hal ini anak kiri akan dilewati terlebih dahulu lalu anak kanan dan akhirnya simpul saat ini. Ooutputnya berupa 0 5 1 8 9 7.
Jadi, output yang dikeluarkan dari kode di atas akan memberikan urutan nilai simpul dalam pohon yang berbeda sesuai dengan traversal yang digunakan.


## Unguided 

### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.

```C++
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int jumlahSimpul;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    vector<string> namaSimpul(jumlahSimpul);
    vector<vector<int>> bobot(jumlahSimpul, vector<int>(jumlahSimpul));

    cout << "Silakan masukkan nama simpul" << endl;
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> namaSimpul[i];
    }

    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < jumlahSimpul; i++) {
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << namaSimpul[i] << "--> " << namaSimpul[j] << " = ";
            cin >> bobot[i][j];
        }
    }

    cout << endl;
    cout << setw(30) << "";
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << setw(10) << namaSimpul[i];
    }
    cout << endl;
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << setw(30) << namaSimpul[i];
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << setw(10) << bobot[i][j];
        }
        cout << endl;
    }

    return 0;
}
```
#### Interpretasi 
Kode di atas merupakan kode graph yang mempresentasikan hubungan antar simpul (node) dalam sebuah jaringan. Berikut penjelasannya.
- jumlahSimpul : menyimpan jumlah simpul dalam jaringan dengan deklarasi variabel.
- namaSimpul : menyimpan nama simpul di dalam jaringan dengan deklarasi vektor.
- bobot : menyimpan bobot atau nilai antar simpul di dalam jaringan.
- jumlahSimpul : meminta inputan jumlah simpul dari user lalu menyimpannya di dalam vairabel.
- namaSimpul : meminta user untuk memasukkan nama simpul lalu  meyimpan di dalam variabel.
- bobot : meminta bobot untuk memasukkan nama simpul lalu  meyimpan di dalam variabel.

#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/da53b593-222b-4e5c-a936-07e5be5c18e5)
Kode di akan menjalankan hubungan antar simpul dalam sebuah jaringan, yang kode ini akan menjalankan output interaktif. Nantinya user diperintah untuk memasukkan sebuah jumlah simpul, nama simpul, lalu bobot antar simpul dan nantinya kode ini akan menampilkan sebual tabel yang nantinya tabel tersebut mempresentasikan sebuah simpul serta setiap kolom mempresentasikan bobot antar simpul dengan simpul lainnya. Nilai 0 menunjukkan bahwa tidak ada bobot antar simpul.

#### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!

```C++
#include <iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *node) {
    if (node!= NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(TNode *node) {
    if (node!= NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder(TNode *node) {
    if (node!= NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

void displayChild(TNode *node, int target) {
    if (node!= NULL) {
        if (node->data == target) {
            if (node->left!= NULL) {
                cout << "Child: " << node->left->data << endl;
            }
            if (node->right!= NULL) {
                cout << "Child: " << node->right->data << endl;
            }
        } else {
            displayChild(node->left, target);
            displayChild(node->right, target);
        }
    }
}

void displayDescendant(TNode *node, int target) {
    if (node!= NULL) {
        if (node->data == target) {
            preOrder(node);
        } else {
            displayDescendant(node->left, target);
            displayDescendant(node->right, target);
        }
    }
}

int main() {
    TNode *root = NULL;

    int choice;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Input data tree" << endl;
        cout << "2. Tampilkan pre-order" << endl;
        cout << "3. Tampilkan in-order" << endl;
        cout << "4. Tampilkan post-order" << endl;
        cout << "5. Tampilkan child node" << endl;
        cout << "6. Tampilkan descendant node" << endl;
        cout << "7. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;
                cout << "Input data tree: ";
                cin >> data;
                if (root == NULL) {
                    root = new TNode(data);
                } else {
                    TNode *temp = root;
                    while (true) {
                        if (data < temp->data) {
                            if (temp->left == NULL) {
                                temp->left = new TNode(data);
                                break;
                            } else {
                                temp = temp->left;
                            }
                        } else {
                            if (temp->right == NULL) {
                                temp->right = new TNode(data);
                                break;
                            } else {
                                temp = temp->right;
                            }
                        }
                    }
                }
                break;
            }
            case 2:
                preOrder(root);
                cout << endl;
                break;
            case 3:
                inOrder(root);
                cout << endl;
                break;
            case 4:
                postOrder(root);
                cout << endl;
                break;
            case 5: {
                int target;
                cout << "Input node target: ";
                cin >> target;
                displayChild(root, target);
                break;
            }
            case 6: {
                int target;
                cout << "Input node target: ";
                cin >> target;
                displayDescendant(root, target);
                cout << endl;
                break;
            }
            case 7:
                return 0;
            default:
                cout << "Pilihan tidak valid" << endl;
        }
    }

    return 0;
}
```
#### Interpretasi 
Kode di atas menjelaskan sebuah kode yang terdiri dari tree dan data structure. Berikut penjelasannya :
- Struct TNode 
    - TNode : menjelaskan sebuan node dalam tree.
    - data : sebuah integer yang menyimpan node tersebut.
    - left dan right : pointer yang menjalankan ke node lain yang menjelaskan anak dari node tersebut.
- Constructor TNode 
    - Constructor TNode : inisialisasi nilai dari node dengan nilai yang diberikan sebagai parameter.
    - Nilai left dan right : inisialisasi dengan NULL yang berarti bahwa node tersebut tidak memiliki anak.
- Fungsi preOrder, imOrder, dan postOrder
    - preOrder : menampilkan node sebelum anak-anaknya
    - inOrder : menampilkan node setelah anak-anaknya
    - postOrder : sama denga in order
- Fungsi displayChild
    - Berguna untuk menampilkan anak dari node yang diberikan sebagai parameter.
    - Mencari node yang memiliki nilai yang sama dengan nilai yang diberikan sebagai parameter, serta kemudian menampilkan anak-anak dari node tersebut.
- Fungsi displayDescendant
    - Digunakan untuk menampilkan descendant dari node yang diberikan sebagai parameter.
    - Berguna untuk mencari node yang memiliki nilai yang sama diberikan sebagai parameter, kemudian menampilkan semua descendant dari node tersebut menggunakan traversal order pre-order.
- Fumgsi main yang juga berguna untuk menajalankan seluruh operasi yang ada di dalam program.
#### Output:
![image](https://github.com/xyzall1/Struktur-Data-Assigment/assets/161272189/67aeb41d-f728-433b-b30a-274d46d12cc4)
Kode di akan menjalankan output interaktif di mana ada berupa pilihan input data tree, tampilkan pre-order, Tampilkan in-order, Tampilkan post-order,Tampilkan child node, Tampilkan descendant node, dan Keluar. Di mana nantinya user diperintahkan untuk memasukkan pilihan lalu input tree yang dimasukkan lalu diberikan pilihan untuk menampilkan tampilan tree jenis yang apa. Jika jenis child node dan descendent node maka user diperintahkan untuk memasukkan node target. Jika kode dirasa sudah cukup kode memiliki pilihan untuk keluar dari program untuk menyelesaikan program.


## Kesimpulan
1. Graph merupakan beberapa kumpulan node (disebut dengan simpul) serta sisi yang menghubungkannya, node (disebut juga simpul) node ini dapat mewakili entitas, seperti orang, tempat, atau benda, sedangkan tepi mewakili hubungan antara entitas tersebut.
2. Jenis Graph yaitu Graph berarah, Tidak berarah, Weighted Graph, dan Unweighted Graph.
3. Karakteristi graph seperti :
    - Jarak maksimum dari sebuah simpul ke semua simpul lainnya dianggap sebagai eksentrisitas dari simpul tersebut.
    - Titik yang memiliki eksentrisitas minimum dianggap sebagai titik pusat dari graph.
    - Nilai eksentrisitas minimum dari semua simpul dianggap sebagai jari-jari dari graph terhubung.
4. Fungsi dan kegunaan Graph 
    - Graph digunakan untuk merepresentasikan aliran komputasi.
    - Di sirkuit, graph dapat digunakan untuk mewakili titik sirkuit sebagai node dan kabel sebagai edge.
    - Google maps menggunakan graph untuk menemukan rute terpendek.
5. Kelebihan Graph 
    - Dengan menggunakan graph kita dapat dengan mudah menemukan jalur terpendek dan tetangga dari node.
    - Graph membantu dalam mengatur data.
    - Karena strukturnya yang non-linier, membantu dalam memahami masalah yang kompleks dan visualisasinya.
6. Tree atau dapat disebut dengan struktur data hierarki yang terdiri dari node-node yang dihubungkan oleh tepian.
7. Hal yang ada dalam pohon seperti Root node, Parent of a node, Child of a node, Leaf node, Non-leaf node, Path, Ancestor, Sibling, Degree, Depth of node, Height of a node, dan Level of node.
8. Fungsi Tree
    -  Dalam kehidupan nyata, struktur data tree membantu dalam pengembangan game.
    - Domain Name Server juga menggunakan struktur data tree.
    - Membantu pengindeksan pada database.
9. Kelebihan Tree
    - Memungkinan subtree untuk dipindahkan dengan usaha yang minim.
    - Tree sangat baik digunakan untuk membuat hierarki data.
    - Mencerminkan hubungan data secara struktural.
    - Menawarkan operasi pencarian dan penyisipan yang efisien.
10. Jenis Tree
    General Tree, Binary Tree, Balanced Tree, dan Binary Search Tree.

## Referensi
[1] R. A. Fauzi., "IMPLEMENTASI ALGORITMA A* MENGGUNAKAN GRAPH PADA APLIKASI ROUTE AT LOCATION BERBASIS WEB," eProsiding Sistem Informasi (POTENSI), Vol. 2 No.1 Juni 2021.

[2] Trivusi, "Struktur Data Tree: Pengertian, Jenis, dan Kegunaannya," 2022. Diakses pada 10 Juni 2024 dari https://www.trivusi.web.id/2022/07/struktur-data-tree.html

[3]  Trivusi, "Struktur Data Graph: Pengertian, Jenis, dan Kegunaannya," 2022. Diakses pada 10 Juni 2024 dari https://www.trivusi.web.id/2022/07/struktur-data-graph.html

[4] Geeksforgeeks, "Perbedaan Antara Grafik dan Pohon," 2024. Diakses pada 10 Juni 2024 dari https://www.geeksforgeeks.org/difference-between-graph-and-tree/