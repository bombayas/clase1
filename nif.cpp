#include <iostream>
using namespace std;
int salir;
char letraDNI(unsigned int dni)
{
    return "TRWAGMYFPDXBNJZSQVHLCKE"[dni % 23];
}

int main()
{
    int dni;
    cout << "Introduce el DNI: ";
    cin >> dni;
    std::cin>>salir;
    char letra = letraDNI(dni);
    return 0;
}
