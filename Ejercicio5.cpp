/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Un vendedor a realizado N ventas y desea saber cuantas fueron por 10,000 o menos, cuantas fueron por mas de 10,000 pero por menos de 20,000 y cuanto fue el monto de las ventas de cada una, y el monto global, realice el algoritmo para determinar los totales.*/

#include <iostream>

int main() {
    int Ventas;
    int Cantidad[40];
    float TotalFinal = 0;
    float Total = 0;

    std::cout << "Número de ventas: ";
    std::cin >> Ventas;
    
    for(int i = 0; i < Ventas; i++){
        std::cout << "Precio de la venta " << i + 1 << ": ";
        std::cin >> Cantidad[i];
        TotalFinal += Cantidad[i];

        if(Cantidad[i] < 1000){
            Total += Cantidad[i];
        } 
		  else if(Cantidad[i] >= 1000 && Cantidad[i] < 2000) {
            Total += Cantidad[i];
        }
    }

    std::cout << "Total final: " << TotalFinal << std::endl;
    return 0;
}

