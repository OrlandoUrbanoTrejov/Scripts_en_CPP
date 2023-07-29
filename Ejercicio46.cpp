/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir un programa que lea los valores de los catetos de un triangulo rectangulo y calcule cual es la hipotenusa, area y el perimetro del triangulo mediante las siguientes expresiones */

#include <iostream>
#include <math.h>

int main(){
    float Cateto1, Cateto2, Hipotenusa = 0, Area = 0, Perimetro = 0;
	 std::cout << "Valor del cateto 1: ";
	 std::cin >> Cateto1;
	 std::cout << "Valor del cateto 2: ";
    std::cin >> Cateto2;
    Hipotenusa = sqrt(pow(Cateto1,2) + pow(Cateto2,2));
	 Area = (Cateto1 * Cateto2) / 2;
	 Perimetro = Cateto1 + Cateto2 + Hipotenusa;

	 std::cout << "Hipotenusa: " << Hipotenusa << std::endl;
	 std::cout << "Area: " << Area << std::endl;
	 std::cout << "Perimetro: " << Perimetro << std::endl;
    return 0;
}
