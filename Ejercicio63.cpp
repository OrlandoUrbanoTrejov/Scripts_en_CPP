/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  27-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir en lenguaje C un programa que:
1) Pida por teclado una letra (dato caracter) del abecedario.
2) Muestre por pantalla:
"ES UNA VOCAL", cuando la letra introducida sea una vocal minuscula (a, e, i, o, u) o una vocal mayuscula (A, E, I, O, U).
"NO ES UNA VOCAL", cuando la letra introducida no sea una vocal minuscula (a, e, i, o, u) ni una vocal mayuscula (A, E, I, O, U). */

#include <iostream>
#include <string.h>
#include <cctype> // Incluimos esta librería para utilizar la función std::tolower

int main() {
    char Letra[5];

    std::cout << "Ingresa una letra del abecedario: ";
    std::cin >> Letra;
    char letraMin = std::tolower(Letra[0]);

    if(letraMin == 'a' || letraMin == 'e' || letraMin == 'i' || letraMin == 'o' || letraMin == 'u'){			
		  std::cout << "Es una vocal" << std::endl;
    }
    else{
        std::cout << "No es una vocal. Es una letra normal" << std::endl;
    }
    return 0;
}

