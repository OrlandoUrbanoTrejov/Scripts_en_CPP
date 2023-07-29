 /* Autor:  Orlando Urbano Trejo (Lando)
 *  Fecha:  27-07-2023 
 *  Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un programa que calcule la aceptacion de una solicitud en base a los siguientes parametros: edad, nota y sexo.
* Minimo: Nota (5), edad (18), sexo M -> POSIBLE
* Minimo: Nota (5), edad (18), sexo F -> ACEPTADA
* Otros casos -> NO ACEPTADA */

#include <iostream>
#include <string.h>

int main() {
    char Nota[5];
    char Edad[5];
    char Sexo[5];

    std::cout << "Ingresa tu calificación obtenida: ";
    std::cin >> Nota;
    std::cout << "Ingresa tu edad: ";
    std::cin >> Edad;
    std::cout << "Ingresa sexo: ";
    std::cin >> Sexo;

    if(strcmp(Nota, "5") == 0 && strcmp(Edad, "18") == 0 && strcmp(Sexo, "M") == 0){
        std::cout << "Solicitud (" << Nota << "), Edad (" << Edad << "), sexo (" << Sexo << ") ---> SOLICITUD POSIBLE" << std::endl;
    }
    else if(strcmp(Nota, "5") == 0 && strcmp(Edad, "18") == 0 && strcmp(Sexo, "F") == 0){
        std::cout << "Solicitud (" << Nota << "), Edad (" << Edad << "), sexo (" << Sexo << ") ---> SOLICITUD ACEPTADA" << std::endl;
    }
    else {
        std::cout << "SOLICITUD NO ACEPTADA" << std::endl;
    }
    return 0;
}

