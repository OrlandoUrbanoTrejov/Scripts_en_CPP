/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Calcular el descuento de un medicamento. */

#include <iostream>
#include <string>

int main() {
    char Nombre[10];
    float Precio, Total = 0;

    std::cout << "Nombre: ";
    std::cin >> Nombre;
    std::cout << "Precio del Medicamento: ";
    std::cin >> Precio;

    Total = Precio - (Precio * 0.35);

    std::cout << "Cliente: " << Nombre << " el total a pagar: " << Total << std::endl;

    return 0;
}

