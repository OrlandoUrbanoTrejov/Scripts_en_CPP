/* Autor:  Orlando Urbano Trejo (Lando) 
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Una persona recibe un prestamo de 10,000 de un banco y desea saber cuanto pagara de interes, si el banco le cobrara una tasa de 27% anual. */ 

#include <iostream>

int main() {
    int Tiempo, Tiempo_Transcurrido;
    float Prestamo = 10000, Interes = 0.27;

    std::cout << "¿Anio en que solicitó el préstamo?: ";
    std::cin >> Tiempo;
    std::cout << "Anio actual: ";
    std::cin >> Tiempo_Transcurrido;

    for(int i = Tiempo; i <= Tiempo_Transcurrido; i++){
        Prestamo = Prestamo + (Prestamo * Interes);
        std::cout << "El interés de " << i << " es de: $" << Prestamo << std::endl;
    }

    return 0;
}

