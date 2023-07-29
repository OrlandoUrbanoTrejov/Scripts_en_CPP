/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  27-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Calcular el mayor de dos numeros leidos del teclado y visualizarlos en pantalla. */

#include <iostream>
// Metodo principal
int main(){
    int Numero1, Numero2;
	 std::cout << "Ingresa el numero 1: ";
	 std::cin >> Numero1;
	 std::cout << "Ingresa el numero 2: ";
	 std::cin >> Numero2;
    if(Numero1 > Numero2){
		  std::cout << "El numero mayor es: " << Numero1 << std::endl;
    }
	 else if(Numero1 == Numero2){
		  std::cout << "Los numeros son iguales" << std::endl;
    }  
    else{
		  std::cout << "El numero mayor es: " << Numero2 << std::endl;
    }  
}

