/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Realice un algoritmo para leer calificaciones de N alumnos y determine el numero de alumnos aprobados y reprobados */

#include <iostream>

int main() {
    int Alumnos;
    float Calificacion;

    std::cout << "Cantidad de alumnos: ";
    std::cin >> Alumnos;

    for(int i = 0; i < Alumnos; i++){
        std::cout << "Calificación del alumno " << i + 1 << " (1-100): ";
        std::cin >> Calificacion;

        if(Calificacion > 70){
            std::cout << "APROBADO" << std::endl;
        } 
		  else{
            std::cout << "REPROBADO" << std::endl;
        }
    }

    return 0;
}



