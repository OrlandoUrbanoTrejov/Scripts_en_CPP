/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Calcular el nuevo salario de un empleado si se le descuenta el 20% de su salario actual */

#include <iostream>
#include <string>

int main() {
    char Nombre[10];
    float Salario, Total = 0;

    std::cout << "Nombre: ";
    std::cin >> Nombre;
    std::cout << "Salario: ";
    std::cin >> Salario;

    Total = Salario - (Salario * 0.20);

    std::cout << "Empleado: " << Nombre << " su salario es: " << Total << std::endl;

    return 0;
}

