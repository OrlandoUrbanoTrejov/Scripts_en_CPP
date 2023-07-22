/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Genera un programa que determine si eres mayor de edad. */ 

#include <iostream>

int main() {
    int Edad;

    std::cout << "Edad: ";
    std::cin >> Edad;

    if(Edad >= 18){
        std::cout << "Eres mayor de edad" << std::endl;
    } 
	 else{
        std::cout << "Eres menor de edad" << std::endl;
    }


    return 0;
}

