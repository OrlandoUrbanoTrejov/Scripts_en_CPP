/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  20-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Los alumnos de primer semestre de la carrera de Ingeniería en Sistemas Computacionales tienen que organizarse para el desfile del 20 de noviembre. Cada alumno deberá ir vestido de acuerdo al taller en el que está inscrito: Presentaran un espectáculo en la Plaza Manuel Ávila Camacho de Jilotepec (El valor por esta actividades de 1 crédito). Los Alumnos que hayan participado en la carrera tendrán 1 crédito, si logro quedar en uno de los 3 primeros lugares, tendrá 1 crédito más. Imprime el total de créditos. */
#include <iostream>

int main() {
    int Carrera, Credito, Lugar;
    std::cout << "Estás inscrito a un taller (1 = Si y 2 = No): ";
    std::cin >> Credito;

    if(Credito == 1){
        std::cout << "Tienes un crédito" << std::endl;
        std::cout << "Participaste en la carrera (1 = si y 2 = NO): ";
        std::cin >> Carrera;

        if(Carrera == 1){
            std::cout << "Tienes otro crédito" << std::endl;
            std::cout << "Quedaste en uno de los 3 primeros lugares: ";
            std::cin >> Lugar;

            if(Lugar == 1){
                std::cout << "Genial, tienes tres créditos" << std::endl;
            }
				else if(Lugar == 2){
                std::cout << "Tienes dos créditos" << std::endl;
            }
        }
		  else if(Carrera == 2){
            std::cout << "Tienes solo un crédito" << std::endl;
        }
    } 
	 else if(Credito == 2){
        std::cout << "Inscríbete a un taller por favor" << std::endl;
        std::cout << "Participaste en la carrera (1 = si y 2 = NO): ";
        std::cin >> Carrera;

        if(Carrera == 1){
            std::cout << "Tienes un crédito" << std::endl;
            std::cout << "Quedaste en uno de los 3 primeros lugares: ";
            std::cin >> Lugar;

            if(Lugar == 1){
                std::cout << "Tienes dos créditos" << std::endl;
            } 
				else if(Lugar == 2){
                std::cout << "Tienes un crédito" << std::endl;
            }
        } 
		  else if(Carrera == 2){
					std::cout << "No tienes ningun credito" << std::endl;
		  }
    } 
	 else{
        std::cout << "Opción Inválida" << std::endl;
    }

    return 0;
}

