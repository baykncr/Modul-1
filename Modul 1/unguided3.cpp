#include <iostream>
#include <map>

int main() {
    // Mendeklarasikan map dengan kunci bertipe string dan nilai bertipe int
    std::map<std::string, int> umur;

    // Menambahkan pasangan kunci-nilai ke dalam map
    umur["Alice"] = 25;
    umur["Bob"] = 30;
    umur["Charlie"] = 20;

    // Mengakses nilai dengan menggunakan kunci
    std::cout << "Umur Alice: " << umur["Alice"] << std::endl;
    std::cout << "Umur Bob: " << umur["Bob"] << std::endl;
    std::cout << "Umur Charlie: " << umur["Charlie"] << std::endl;

    return 0;
}
