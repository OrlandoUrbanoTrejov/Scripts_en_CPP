/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Se requiere determinar el tiempo en que tarda una persona en llegar de una ciudad a otra en bicicleta, considerando que lleva una velocidad constante. */

#include <iostream>

int main(){
    float KM, Distancia, Total = 0;
    std::cout << "Velocidad en (Km/h): ";
    std::cin >> KM;
    std::cout << "Distancia recorrida: ";
    std::cin >> Distancia;
    Total = (KM * Distancia) / 60;
    std::cout << "Tiempo: " << Total << " horas" << std::endl;
    return 0;
	    
}
