/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Calcular la cantidad de euros a monedad */

#include <iostream>

int main() {
    std::cout << "-------- MENU DE CONVERSIONES --------" << std::endl;
    std::cout << "1) Euros" << std::endl;
    std::cout << "2) Dolares" << std::endl;

    int Opcion, Dinero;
    float Dolar = 16.89;
    float Euro = 0.053;
    float Resultado = 0;

    std::cout << std::endl;
    std::cout << "Elige una opción: ";
    std::cin >> Opcion;

    if(Opcion == 1){
        std::cout << "Dinero: ";
        std::cin >> Dinero;
        Resultado = Dinero / Dolar;
        std::cout << "Dinero: " << Resultado << " dólares" << std::endl;
    } 
	 else if(Opcion == 2){
        std::cout << "Dinero: ";
        std::cin >> Dinero;
        Resultado = Dinero / Euro;
        std::cout << "Dinero: " << Resultado << " euros" << std::endl;
    } 
	 else{
        std::cout << "Opción no válida" << std::endl;
    }

    return 0;
}

