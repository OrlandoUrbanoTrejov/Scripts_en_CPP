/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Hacer un menu que considere las siguientes opciones:
 * 1) Cubo de un numero, 2) Numero par o impar, 3) Salir, */

#include <iostream>
#include <math.h>

int main(){
	 int Opcion, Numero;
    float Cuadrado = 0, Cubo = 0;
	 std::cout << "-----MENU DE OPCIONES-----" << std::endl;
	 std::cout << "1) Cubo de un numero " << std::endl;
    std::cout << "2) Numero par o impar " << std::endl;
    std::cout << "3) Salir" << std::endl;	 
    std::cout << "Elige una opcion: ";
	 std::cin >> Opcion;

	 if(Opcion == 1){
	     std::cout << "Numero: ";
		  std::cin >> Numero;
		  Cubo = pow(Numero,3);
		  std::cout << "El cubo de " << Numero << " es " << Cubo << std::endl;
	 }
    else if(Opcion == 2){
		  std::cout << "Numero: ";
		  std::cin >> Numero;
	     if(Numero %2 == 0){
		      std::cout << "Numero par" << std::endl;
		  }
		  else{
		      std::cout << "Numero impar" << std::endl;
		  }
	 }
    else if(Opcion == 3){
	     std::cout << "Fin del programa" << std::endl;
	 }
	 else{
	     std::cout << "Opción invalida" << std::endl;
	 }
    return 0;
}
