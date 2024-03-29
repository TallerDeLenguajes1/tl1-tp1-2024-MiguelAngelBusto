#include <iostream>

int main(int argc, char const *argv[])
{
    printf("Hola Mundo");
    int x = 10;

    int *puntero = &x;

    std::cout << "1) Contenido del puntero: " << *puntero << std::endl;

    std::cout << "2) Dirección de memoria almacenada por el puntero: " << puntero << std::endl;

    
    return 0;
}
