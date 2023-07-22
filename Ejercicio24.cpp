/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  17-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Realiza un codigo que calcule la mitad de la tercera parte del doble de un numero. */

#include <iostream>

int main(){
	 int Numero; 
	 float Resul1 = 0, Resul2 = 0, Final = 0; 
    std::cout << "Ingresa un numero: ";
	 std::cin >> Numero;
	 Resul1 = Numero * 2;
	 Resul2 = Resul1 / 3;
	 Final = Resul2 / 2;
	 std::cout << "La mitad de la tercera parte del doble de " << Numero << " es: " << Final << std::endl;
	 return 0;

