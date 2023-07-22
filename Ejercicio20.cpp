/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Concatenar 3 numeros o letras y mostrar el resultado */

#include <iostream>

int main() {
    int N1, N2, N3, Resultado = 0;

    std::cout << "Numero 1: ";
    std::cin >> N1;
    std::cout << "Numero 2: ";
    std::cin >> N2;
    std::cout << "Numero 3: ";
    std::cin >> N3;

    Resultado = N1 + N2 + N3;

    std::cout << "Concatenacion: " << Resultado << std::endl;

    return 0;
}

