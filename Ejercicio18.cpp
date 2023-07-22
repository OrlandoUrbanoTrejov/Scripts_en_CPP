/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Escriba un algoritmo que, dado el número de horas trabajadas por un empleado y el sueldo por hora, calcule el sueldo total de ese empleado. */ 

#include <iostream>

int main() {
    float Horas, Sueldo_Hora, Sueldo_Final = 0;
    std::cout << "Horas trabajadas: ";
    std::cin >> Horas;
    std::cout << "Sueldo por hora: ";
    std::cin >> Sueldo_Hora;
    Sueldo_Final = Horas * Sueldo_Hora;
    std::cout << "Sueldo total: $" << Sueldo_Final << std::endl;
    return 0;
}

