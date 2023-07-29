/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  27-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un programa que clasifique un triangulo tras recibir el tamano de sus lados. Se debe clasificar como: triangulo rectangulo, isosceles, equilatero o escaleno.*/

#include <iostream>
#include <math.h>

int main() {
    int Lado_1, Lado_2, Lado_3;
    std::cout << "Ingresa el tamaño del lado 1: ";
    std::cin >> Lado_1;
    std::cout << "Ingresa el tamaño del lado 2: ";
    std::cin >> Lado_2;
    std::cout << "Ingresa el tamaño del lado 3: ";
    std::cin >> Lado_3;

    if (Lado_1 > Lado_2 && Lado_1 > Lado_3) {
        if (pow(Lado_1, 2) == pow(Lado_2, 2) + pow(Lado_3, 2)) {
            std::cout << "ES UN TRIÁNGULO RECTÁNGULO" << std::endl;
        }
    }
    else if (Lado_2 > Lado_1 && Lado_2 > Lado_3) {
        if (pow(Lado_2, 2) == pow(Lado_1, 2) + pow(Lado_3, 2)) {
            std::cout << "ES UN TRIÁNGULO RECTÁNGULO" << std::endl;
        }
    }
    else if(Lado_3 > Lado_1 && Lado_3 > Lado_2){
        if(pow(Lado_3, 2) == pow(Lado_1, 2) + pow(Lado_2, 2)){
            std::cout << "ES UN TRIÁNGULO RECTÁNGULO" << std::endl;
        }
    }
    else if(Lado_1 == Lado_2 && Lado_1 != Lado_3 || Lado_1 == Lado_3 && Lado_1 != Lado_2 || Lado_2 == Lado_3 && Lado_2 != Lado_1){
	 	  std::cout << "ES UN TRIÁNGULO ISÓSCELES" << std::endl;
    }
    else if(Lado_1 == Lado_2 && Lado_3 == Lado_2){
        std::cout << "ES UN TRIÁNGULO EQUILÁTERO" << std::endl;
    }
    else{
        std::cout << "ES UN TRIÁNGULO ESCALENO" << std::endl;
    }

    return 0;
}

