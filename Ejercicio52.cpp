/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  28-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Regresa el restante de la cadena a partir de la primera aparicion del caracter indicado */

#include <iostream>
#include <string.h>

int main(){
    char Abecedario[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	 char Corte;
	 std::cout << "Letra donde quieres realizar el corte: ";
	 std::cin >> Corte;

	 std::cout << "Nueva Cadena" << std::endl;
    std::cout << strrchr(Abecedario, Corte) << std::endl;
    return 0;
}
