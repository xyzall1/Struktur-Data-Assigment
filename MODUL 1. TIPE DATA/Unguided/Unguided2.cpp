#include <iostream>

struct Person {
    std::string name;
    int age;
    double height;

    // Membuat instances dari struct person
    void printDetails() {
        std::cout << "Name: " << name << ", Age: " << age << ", Height: " << height << std::endl;
    }
};

int main() {
    // Memberi nilai ke anggota struct
    Person alin;
    alin.name = "alin omagaa";
    alin.age = 18;
    alin.height = 45;

    Person orel;
    orel.name = "orel omaga";
    orel.age = 75;
    orel.height = 32,5;

    // Menampilkan nilai anggota struct
    alin.printDetails();
    orel.printDetails();

    return 0;
}