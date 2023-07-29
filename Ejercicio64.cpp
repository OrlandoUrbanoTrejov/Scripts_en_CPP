/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  27-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir en lenguaje C un programa que:
1) Pida por teclado una hora en tres variables: horas, minutos y segundos (datos enteros).
2) Muestre por pantalla:
"HORA CORRECTA", en el caso de que la hora sea valida.
"HORA INCORRECTA", en el caso de que la hora no sea valida.
Nota: para que una hora sea valida, se tiene que cumplir que:
    Las horas deben ser mayor o igual que 0 y menor o igual que 23.
    Los minutos deben ser mayor o igual que 0 y menor o igual que 59.
    Los segundos deben ser mayor o igual que 0 y menor o igual que 59. */

#include <iostream>

int main() {
    int Horas, Minutos, Segundos;

    std::cout << "Ingresa las horas: ";
    std::cin >> Horas;
    std::cout << "Ingresa los minutos: ";
    std::cin >> Minutos;
    std::cout << "Ingresa los segundos: ";
    std::cin >> Segundos;

    if(Horas >= 0 && Horas <= 23 && Minutos >= 0 && Minutos <= 59 && Segundos >= 0 && Segundos <= 59){
		  std::cout << "HORA CORRECTA" << std::endl;
    }
    else{
        std::cout << "HORA INCORRECTA" << std::endl;
    }

    return 0;
}

