/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  17-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Solicita al usuario el numero de alumnos en un salon, posteriormente pida la edad de cada uno de ellos y calcula su promedio de edad */

#include <iostream>

int main(){
    int Alumno, Edad;
	 float Suma = 0, Promedio = 0;
	 std::cout << "Cuantos alumnos hay en el salon: ";
	 std::cin >> Alumno;
	 for(int i = 0; i < Alumno; i++){
	 	  std::cout << "Edad del alumno " << i+1 << ": ";
		  std::cin >> Edad;
		  Suma += Edad;
	 }
	 Promedio = Suma / Alumno;
	 std::cout << "El promedio de las edades de los alumnos es: " << Promedio << std::endl;
	 return 0;
}

