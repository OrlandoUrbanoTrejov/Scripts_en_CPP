/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  27-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribe un programa que reciba un año y nos diga si es bisiesto o no */

#include <iostream>

int main(){
	 int Numero;
    std::cout << "Ingresa un numero: ";
    std::cin >> Numero;
    if(Numero %4 == 0){
	     std::cout << "Es un año bisiesto" << std::endl;
	 }
	 else{
	     std::cout << "No es un año bisiesto" << std::endl;
	 }
    return 0;
}
