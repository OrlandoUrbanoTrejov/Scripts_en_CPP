/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Define un array de 10 numeros enteros con nombre Num y asigna 5 valores.Muestra el contenido de todos los elementos del array */
#include <iostream>

int main(){
    int Num[12];
	 Num[1] = 2, Num[3] = 4, Num[6] = -2, Num[7] = 6;
	 for(int i = 1; i <= 10; i++){
	     std::cout << "Posiicion " << i << ": " << Num[i] << std::endl;
	 }
    return 0;
}

