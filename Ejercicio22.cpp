/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Un vendedor recibe un sueldo base más un 10% por comision de sus ventas el vendedor desea saber cuanto dinero obtendra por concepto de comisiones por las 3 ventas que realiza en el mes y el total que recibira en el mes tomando en cunta su base y comisiones .*/

#include <iostream>

int main() {
    float Comision = 0, Sueldo, Precio_Venta, Total;
    int Ventas;

    std::cout << "Sueldo fijo: ";
    std::cin >> Sueldo;
    std::cout << "Ventas realizadas: ";
    std::cin >> Ventas;

    for(int i = 0; i < Ventas; i++){
        std::cout << "Precio de la venta " << i + 1 << ": ";
        std::cin >> Precio_Venta;
        Comision += Precio_Venta * 0.10;
    }

    Total = Comision + Sueldo;
    std::cout << "Comisión: $" << Comision << std::endl;
    std::cout << "Sueldo: $" << Total << std::endl;

    return 0;
}

