#include <iostream>

// Definisi class
class Mobil {
private:
    std::string merek;
    std::string model;
    int tahun;

public:
    // Constructor
    Mobil(std::string mrk, std::string mdl, int thn) {
        merek = mrk;
        model = mdl;
        tahun = thn;
    }

    // Method untuk menampilkan informasi mobil
    void tampilkanInfo() {
        std::cout << "Mobil: " << merek << " " << model << " (" << tahun << ")" << std::endl;
    }
};

int main() {
    // Membuat objek dari class Mobil
    Mobil mobil1("Toyota", "Camry", 2020);
    
    // Memanggil method tampilkanInfo dari objek
    mobil1.tampilkanInfo();

    return 0;
}
