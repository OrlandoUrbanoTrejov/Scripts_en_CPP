Suma de numeros positivos y negativos/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Convertir de grados Celcius a Fahrenheit */
#include <iostream>

int main(){
    float Grados, Farenheit, Conversion = 0; 
	 std::cout << "Ingresa los grados a convertir: ";
	 std::cin >> Grados;
    Conversion = (Grados * 1.8)+ 32;
	 std::cout << "Conversion: " << Conversion << std::endl;
    return 0; 
}

