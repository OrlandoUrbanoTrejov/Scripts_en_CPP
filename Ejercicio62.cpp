/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Ejercicio:Realiza un programa que pida por teclado el resultado (dato entero) obtenido al lanzar un dado de seis caras y muestre por pantalla el numero en letras (dato cadena) de la cara opuesta al resultado obtenido.
Nota 1: En las caras opuestas de un dado de seis caras estan los numeros: 1-6, 2-5 y 3-4.
Nota 2: Si el numero del dado introducido es menor que 1 o mayor que 6, se mostrara el mensaje: ERROR: numero incorrecto.*/

#include <iostream>

int main() {
    int Cara;
	 std::cout << "Ingresa la cara del dado: ";
    std::cin >> Cara;

    switch (Cara) {
        case 1:
            std::cout << "El valor contrario de la cara es: SEIS" << std::endl;
            break;
        case 2:
            std::cout << "El valor contrario de la cara es: CINCO" << std::endl;
            break;
        case 3:
            std::cout << "El valor contrario de la cara es: CUATRO" << std::endl;
            break;
        case 4:
            std::cout << "El valor contrario de la cara es: TRES" << std::endl;
            break;
        case 5:
            std::cout << "El valor contrario de la cara es: DOS" << std::endl;
            break;
        case 6:
            std::cout << "El valor contrario de la cara es: UNO" << std::endl;
            break;
        default:
            std::cout << "ERROR: Número incorrecto" << std::endl;
    }
    return 0;
}

