/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  20-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Haz un codigo que haga la suma de los primeros diez numeros pares */

#include <iostream>

int main(){
	 int Suma = 0; 
	 for(int i = 0; i <=20; i++ ){
	    if(i % 2 == 0){
		 	Suma += i;
		 }
	 }
	 std::cout << "Suma: " << Suma << std::endl;
    return 0;
}
