/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Se requiere determinar el costo que tendra que realizar una llamada telefonica con base en el tiempo que dura la llamada y el costo por minuto */

#include <iostream>
int main(){
    int Tiempo, Costo;
    float Total = 0;
    std::cout << "Tiempo de la llamada en minutos: ";
    std::cin >> Tiempo;
    std::cout << "Costo por minuto: ";
    std::cin >> Costo;
    Total = Tiempo * Costo;
    std::cout << "Costo de la llamada: $" << Total << std::endl;
    return 0;
}
