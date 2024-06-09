#include <iostream>
#include "kelasExtern.cpp"

void autoClass();
void staticClass();

// membuat kelas mutable
class mutableInt{
    public :
        mutable int a; // anggota kelas dengan pemyimpanan mutable bisa digunakan untuk variabel bersifatb konstan
        int b;
        mutableInt(int a, int b)
        {
            this -> a = a;
            this -> b = b;
        }
};


int main()
{
    // kelas penyimpanan memiliki 4 tipe. auto, static, register, extern

    // memanggil kelas penyimpanan auto
    std::cout << "memanggil kelas penyimpanan auto yang pertama : " << std::endl;
    autoClass();
    std::cout << "memanggil kelas penyimpanan auto  yang kedua : " << std::endl;
    autoClass();
    std::cout << "memnaggil kelas penyimpanan auto yang ketiga : " << std::endl;
    autoClass();

    // memanggil kelas penyimpanan static
    std::cout << "memanggil kelas penyimpanan static yang pertama : " << std::endl;
    staticClass();
    std::cout << "memanggil kelas penyimpanan static yang kedua : " << std::endl;
    staticClass();
    std::cout << "memanggil kelas pemnyimpanan static yang ketiga : " << std::endl;
    staticClass();

    // memanggil kelas penyimpanan register
    // register int memanggilRegister {20}; // kelas penyimpanan register disimpan pada cpu memori
    // std::cout << "memanggil kelas penyimpanan register" << memanggilRegister << std::endl;

    // memanggil kelas penyimpanan extern, kelas penyimpanan extern yaitu memanggil fungsi kode pada file lain
    extern int varExtern;
    std::cout << "sebelum variabel extternal di tambah satu " << varExtern << std::endl;
    varExternIncrement();
    std::cout << "setelah variabel external di tambah satu " << varExtern << std::endl;

    // memanggil kels penyimpanan mutable sebelum diubah
    const mutableInt obj(20,30);
    std::cout << "sebelum diubah " << std::endl;
    std::cout << "nilai a " << obj.a << std::endl;
    std::cout << "nilai b " << obj.b << std::endl;

    // mengubah nilai a dan b
    obj.a = 99;
    // obj.b = 55; obj b tdak bisa karena kelas peanyimpanannya bukan bersifat mutable

    // memanggil kels penyimpanan mutable sesudah diubah
    std::cout << "sesudah diubah " << std::endl;
    std::cout << "nilai a " << obj.a << std::endl;
    std::cout << "nilai b " << obj.b << std::endl;


    std::cin.get();
    return 0;
}

// fungsi kelas penyimpanan auto
void autoClass()
{
    int a (0); // kelas penyimpanan bersifat auto
    a++;
    std::cout << "nilai a " << a << std::endl;
    // kelas penyimpanan auto yaitu bersifat sementara, ketika eksekusi berakhir maka akan dibuang oleh memori
}

// fungsi kelas penyimpanan static
void staticClass()
{
    static int a (0);
    a++;
    std::cout << "nilai a " << a << std::endl; 
    // kelas penyimpnan static tidak akan membuang variabel yang telah tersimpan walaupun eksekusi telah berakhir
}

