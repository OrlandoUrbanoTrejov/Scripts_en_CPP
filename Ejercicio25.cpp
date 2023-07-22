/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  17-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Solicita un numero al usuario y calcula su factorial. */

#include <iostream>

int main(){
   int Numero, Resultado = 1;
	std::cout << "Ingresa un numero: ";
	std::cin >> Numero;
	for(int i=1; i<=Numero; i++){
	    Resultado *= i;
	}
	std::cout << "El factorial de " << Numero << " es: " << Resultado << std::endl;
	return 0;
}
