/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Se desea saber el total de una caja registradora de un almacén, se conoce el numero de billetes y monedas asi como su valor */

#include <iostream>

int main() {
    int Convertidor = 0;
    int Resultado = 0;
    float Dinero[] = {1000, 500, 200, 100, 50, 20, 5, 2, 1, 0.50, 0.20, 0.10};

    for(int i = 0; i < 12; i++){
        std::cout << "Cantidad de dinero que tiene: " << Dinero[i] << " pesos" << std::endl;
        std::cin >> Convertidor;
        Resultado = Resultado + (Convertidor * Dinero[i]);
        std::cout << "Total almacenado: $" << Resultado << " pesos" << std::endl;
    }

    return 0;
}


