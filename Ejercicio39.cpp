/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza las tablas de multiplicar */

#include <iostream>

int main(){
	 int Filas, Columnas;
    std::cout << "Numero de filas: " << std::endl;
	 std::cin >> Filas; 
	 std::cout << "Numero de columnas: " << std::endl;
	 std::cin >> Columnas;
	 for(int i = 1; i <= Filas; i++){
	     std::cout << "\t\n";
		  for(int j = 1; j <= Columnas; j++){
		      std::cout << i*j << "\t";
		  }
	 }
	 return 0;
}
