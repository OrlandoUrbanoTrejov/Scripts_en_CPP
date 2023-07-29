/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Ingresa por teclado el nombre y el signo de cualquier persona e imprima el nombre solo si la persona es signo Aries, caso contrario imprimir "No es signo Aries" */

#include <iostream>
#include <string.h>

int main() {
    char Nombre[30];
    char Signo[20];
    std::cout << "Ingresa tu nombre: ";
    std::cin >> Nombre;
    std::cout << "Ingresa tu signo: ";
    std::cin >> Signo;
    if (strcmp(Signo, "Aries") == 0) {
        std::cout << "Eres signo Aries, tu nombre es: " << Nombre << std::endl;
    }
    else {
        std::cout << "No eres signo Aries" << std::endl;
    }
    return 0;
}

