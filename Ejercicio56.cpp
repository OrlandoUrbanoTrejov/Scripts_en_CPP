/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Ingresa un numero, calcula e imprime su raiz cuadrada, si el numero es negativo imprimir un mensaje que diga "Tiene raiz imaginaria" */

#include <iostream>
#include <math.h>

int main(){
    int Numero;
	 float Resultado = 0;
	 std::cout << "Ingresa un numero: ";
	 std::cin >> Numero;
	 if(Numero > 1){
	     Resultado = sqrt(Numero);
		  std::cout << "Raiz cuadrada: " << Resultado << std::endl;
	 }
	 else{
	     std::cout << "Tiene raiz imaginaria" << std::endl; 
	 }
    return 0;
}
