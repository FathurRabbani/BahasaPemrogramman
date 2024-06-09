// lingkup variabel : global dan lokal
#include <iostream>

void test();

int main ()
{
    int a {100}; // variabel lokal fungsi main
    int b {200}; // variabel lokal fungsi main

    // menampilkan variabel lokal fungsi main()
    std::cout << "menampilkan variabel a lokal fungsi main() " << a << std::endl;
    std::cout << "menampilkan variabel b lokal fungsi main() " << b << std::endl;

    // memanggil fungsi test
    test();
    
    std::cin.get();
    return 0;
}

void test()
{
    int a (9);

    std::cout << "menampilkan variabel a lokal fungsi test() " << a << std::endl;
   // std::cout << "menampilkan variabel b lokal fungsi test() " << b << std::endl; //error
}