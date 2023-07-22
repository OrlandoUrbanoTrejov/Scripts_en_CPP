/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: scriba un algoritmo que dada la cantidad de monedas de 5-10-20 pesos, diga la cantidad de dinero que se tiene en total */

#include <iostream>

int main() {
    float Cajero[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 0.50};
    float Cantidad = 0;
    float C;

    for(int i = 0; i < 11; i++){
        std::cout << "Cantidad de " << Cajero[i] << " que tiene: ";
        std::cin >> C;

        Cantidad += C * Cajero[i];

        std::cout << "Total: $" << Cantidad << std::endl;
    }

    return 0;
}

