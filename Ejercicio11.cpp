/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Multiplicar dos numeros. */
#include <iostream>

int main() {
    float Num1, Num2;
    float Resultado = 0;

    std::cout << "Numero 1: ";
    std::cin >> Num1;
    std::cout << "Numero 2: ";
    std::cin >> Num2;
    Resultado = Num1 * Num2;

    std::cout << "Resultado: " << Resultado << std::endl;
    return 0;
}

