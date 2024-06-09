#include <iostream>
#include <typeinfo>


int main()
{
    
    int a; // mendeklarsikan variabel dengan tipe int
    double b; // mendeklarasikan variabel dengan tipe double
    std::string nama; // mendeklarasikan variabel nama dengan tipe string
    int x, y, z;// mendeklariskan variabel dengan penulisan sebaris, namun harus dengan tipe data yang sama

    a = 9; // menginialisasi variabel dengan tipe int
    b = 22.24; // menginilisasi variabel dengan tipe double
    nama = "Fathur Rabbani"; // menginialisasi variabel dengan tipe string
    int panjang = 5, lebar = 4; // membuat variabel panjang x lebar untuk di hitung mencari luas
    int luas = panjang * lebar; // inisialisasi dinamis

    // contoh
    int Panjang = 10, Lebar = 5;
    int Luas = Panjang * Lebar;
    std::cout << "hasil menghitung : " << Luas << std::endl;

    // cara lain deklarasikan variabel dengan menggunakan ()
    int xy (20); // variabel int
    double xx (44.7); // variael double
    std::string Nama ("Fathur Rabbani"); // variabel string

    // cara lain deklarasikan variabel dengan menggunakan {}
    int yx {15}; // vaariabel int
    double yy {0.5}; // variabel double
    std::string NamaPanjang {"Fathur Rabbani"}; // variabel string

    // kata kunci auto :: kata kunci auto digunakan untuk menentukan tipe data dari isi sebuah variabel
    auto nilaiInt (2);
    auto nilaiDoub (4.5);
    auto nilaiStr ("string");
    std::cout << "tipe data : " << typeid(nilaiInt).name() << std::endl;
    std::cout << "tipe data : " << typeid(nilaiDoub).name() << std::endl;
    std::cout << "tipe data : " << typeid(nilaiStr).name() << std::endl;

    
    std::cin.get();
    return 0;
}