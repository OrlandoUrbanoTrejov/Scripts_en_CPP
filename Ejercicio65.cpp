/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  27-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Determina si un numero es priemo (Un numero es primo si es divisible entre 1 y entres si mismo */

#include <iostream>

int main() {
    int Numero, Contador = 0;

    std::cout << "Ingresa un numero: ";
    std::cin >> Numero;

    for (int i = 1; i <= Numero; i++) {
        if (Numero % i == 0) {
            Contador++;
        }
    }

    if (Contador > 2) {
        std::cout << "No es primo" << std::endl;
    }
    else {
        std::cout << "Es primo" << std::endl;
    }

    return 0;
}

