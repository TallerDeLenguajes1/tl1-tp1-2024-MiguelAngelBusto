#include <iostream>

int main(int argc, char const *argv[])
{
    printf("Hola Mundo");
    int x = 10;

    int *puntero = &x;

    std::cout << "1) Contenido del puntero: " << *puntero << std::endl;

    std::cout << "2) Dirección de memoria almacenada por el puntero: " << puntero << std::endl;

    std::cout << "3) Dirección de memoria de la variable: " << &variable << std::endl;

    std::cout << "4) Dirección de memoria del puntero: " << &puntero << std::endl;

    std::cout << "5) Tamaño de memoria utilizado por la variable: " << sizeof(variable) << " bytes" << std::endl;
    
    return 0;
}
