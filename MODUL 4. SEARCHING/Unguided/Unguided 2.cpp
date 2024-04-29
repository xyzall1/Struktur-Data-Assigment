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
