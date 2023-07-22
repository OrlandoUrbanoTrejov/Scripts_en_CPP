/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: En un hospital existen 3 áreas: Urgencias, Pediatría y Traumatología. El presupuesto anual del hospital se reparte de la siguiente manera: Pediatría 42% y Traumatología 21% */

#include <iostream>

int main() {
    int Presupuesto;
    float Urgencias = 0, Pediatria = 0, Traumatologia = 0;

    std::cout << "Presupuesto anual: ";
    std::cin >> Presupuesto;

    Urgencias = Presupuesto * 0.37;
    Pediatria = Presupuesto * 0.42;
    Traumatologia = Presupuesto * 0.21;

    std::cout << "Presupuesto Urgencias: $" << Urgencias << std::endl;
    std::cout << "Presupuesto Pediatria: $" << Pediatria << std::endl;
    std::cout << "Presupuesto Traumatologia: $" << Traumatologia << std::endl;

    return 0;
}

