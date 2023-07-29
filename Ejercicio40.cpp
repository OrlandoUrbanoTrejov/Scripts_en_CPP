/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un codigo que imprima los numeros de 5 en 5 hasta donde el usuario digite */

#include <iostream>

int main(){
	 int Limite;
	 std::cout << "Ingresa un numero: ";
	 std::cin >> Limite;
	 for(int i = 1; i <= Limite; i++){
	     if(i % 5 == 0){
		      std::cout << i << ", ";;
		  }
	 }		
    return 0;
}
