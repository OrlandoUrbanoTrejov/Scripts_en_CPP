/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realizar la serie fibonacci */

#include <iostream>

int main(){
    int Numero, x = 0, y = 1, z = 1;
	 std::cout << "Ingresa un numero: ";
	 std::cin >> Numero;
	 std::cout << "1, ";
	 for(int i = 1; i <= Numero; i++){
	     z = x + y;
		  x = y;
		  y = z;
	     std::cout << z << ", ";
	 }
	 
	 return 0;
}
