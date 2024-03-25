#include <iostream>

// Definisi struct
struct Mahasiswa {
    std::string nama;
    int umur;
    float ipk;
};

int main() {
    // Mendefinisikan objek dari struct Mahasiswa
    Mahasiswa mhs1;
    mhs1.nama = "John Doe";
    mhs1.umur = 20;
    mhs1.ipk = 3.75;

    // Menampilkan informasi mahasiswa
    std::cout << "Nama: " << mhs1.nama << std::endl;
    std::cout << "Umur: " << mhs1.umur << std::endl;
    std::cout << "IPK: " << mhs1.ipk << std::endl;

    return 0;
}
