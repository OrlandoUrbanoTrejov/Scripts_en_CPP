/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: La CONAGUA requiere determinar el pago que debe de realizar a una persona por el total de metros cúbicos que consume de agua */

#include <iostream>

int main() {
    int PrecioMetros, Metros;
    float Resultado = 0;

    std::cout << "Ingresa el precio por metro: ";
    std::cin >> PrecioMetros;
    std::cout << "Metros trabajados: ";
    std::cin >> Metros;

    Resultado = PrecioMetros * Metros;

    std::cout << "Pago: $" << Resultado << std::endl;

    return 0;
}

