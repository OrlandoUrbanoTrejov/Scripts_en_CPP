/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir una palabra y ver cuantos mide la cadena */

#include <iostream>
#include <string.h>

int main(){
    char Palabra[20];
	 std::cout << "Palabra: ";
	 std::cin >> Palabra;
    std::cout << "Longitud: " << strlen(Palabra) << std::endl;
    return 0;
}
