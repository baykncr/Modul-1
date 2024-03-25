#include <iostream>

// Fungsi untuk menjumlahkan dua bilangan bulat
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk mengalikan dua bilangan pecahan
float kali(float a, float b) {
    return a * b;
}

int main() {
    int bilangan1 = 5;
    int bilangan2 = 3;
    float bilangan3 = 2.5;
    float bilangan4 = 1.5;

    // Memanggil fungsi tambah
    int hasilTambah = tambah(bilangan1, bilangan2);
    std::cout << "Hasil penjumlahan: " << hasilTambah << std::endl;

    // Memanggil fungsi kali
    float hasilKali = kali(bilangan3, bilangan4);
    std::cout << "Hasil perkalian: " << hasilKali << std::endl;

    return 0;
}
