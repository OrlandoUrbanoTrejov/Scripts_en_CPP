/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  18-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Haciendo uso de 2 arreglos, almacena 5 números en cada arreglo, po   steriormente vas a multiplicar los arreglos. */

#include <iostream>

int main(){
    int Primero[5], Segundo[5], Multiplicacion[5], Suma = 0;

	 for(int i = 0; i < 5; i++){
	 	  std::cout << "Valor " << (i+1) << ": ";
	     std::cin >> Primero[i];	  
	 }
	 for(int i=4; i >= 0; i--){
	 	 Suma = i + 2;
		 std::cout << "Valor " << (Suma - 1) << std::endl;
	    std::cin >> Segundo[i];
	 }
	 
	 for(int i = 0; i < 5; i++){
	     Multiplicacion[i] = Primero[i] * Segundo[i];
	 }

	 for(int i = 0; i < 5; i++){
	 	std::cout << "Resultado:" <<  Multiplicacion[i] << " ";
	 }
	 return 0;
}
