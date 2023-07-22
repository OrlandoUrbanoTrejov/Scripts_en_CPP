/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Realice un algoritmo que, con base en una calificacion proporcionada (0-10), inidique con letra la calificacion que le corresponde: 10 es "A", 9 es "B", 8 es "C", 7 y 6 son "D", y de 5 a 0 son "F". */

#include <iostream>

int main() {
    int Calificacion;
    std::cout << "Ingresa la calificacion obtenida: (0-10)" << std::endl;
    std::cin >> Calificacion;

    switch (Calificacion) {
        case 0:
	    		std::cout << "Tu calificacion es: F" << std::endl;
        case 1:
	    		std::cout << "Tu calificacion es: F" << std::endl;
        case 2:
	    		std::cout << "Tu calificacion es: F" << std::endl;
        case 3:
	    		std::cout << "Tu calificacion es: F" << std::endl;
        case 4:
	    		std::cout << "Tu calificacion es: F" << std::endl;
        case 5:
            std::cout << "Tu calificacion es: F" << std::endl;
            break;
        case 6:
        case 7:
            std::cout << "Tu calificacion es: D" << std::endl;
            break;
        case 8:
            std::cout << "Tu calificacion es: C" << std::endl;
            break;
        case 9:
            std::cout << "Tu calificacion es: B" << std::endl;
            break;
        case 10:
            std::cout << "Tu calificacion es: A" << std::endl;
            break;
        default:
            std::cout << "Calificacion invalida" << std::endl;
            break;
    }

    return 0;
}

