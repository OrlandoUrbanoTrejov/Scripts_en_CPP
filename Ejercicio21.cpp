/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Obtener la edad de una persona en meses, si se ingresa su edaden años y meses.Ejemplo: Ingresado 3 años 4 meses debe mostrar 40 meses */

#include <iostream>

int main() {
    int Edad, Meses, Resultado = 0;

    std::cout << "Edad en años: ";
    std::cin >> Edad;
    std::cout << "Cuantos meses: ";
    std::cin >> Meses;

    Resultado = (Edad * 12) + Meses;

    std::cout << "Edad: " << Resultado << " meses" << std::endl;

    return 0;
}

