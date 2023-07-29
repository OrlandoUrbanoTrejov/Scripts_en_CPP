/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un programa que lea una cadena por teclado y compruebe si es una letra mayuscula */

#include <iostream>
#include <string.h>

int main(){
    char letra[5];
    std::cout << "Ingresa una letra: ";
    std::cin >> letra;

    if(strcmp(letra, "A") >= 0 && strcmp(letra, "Z") <= 0){
        std::cout << "La letra " << letra << " es mayuscula" << std::endl;
    }
    else{
        std::cout << "La letra " << letra << " es minuscula" << std::endl;
    }
    return 0;
}

