/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir un programa que lea un caracter en minuscula e imprima por pantalla, el mismo caracter en mayuscula */


#include <iostream>

int main() {
    char Letra_Minuscula, Letra_Mayuscula;
    std::cout << "Ingresa una letra en minúscula: ";
	 std::cin >> Letra_Minuscula;
    Letra_Mayuscula = Letra_Minuscula - 'a' + 'A';
	 std::cout << "La letra " << Letra_Minuscula << " en minúscula es " << Letra_Mayuscula << " en mayúscula." << std::endl;
    return 0;
}

