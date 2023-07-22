/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  18-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Haciendo uso de arreglos, almacena la calificación de una materia (Recuerda que son 5 unidades). Posteriormente, calcula el promedio final e imprime los resultados */

#include <iostream>
#include <iomanip>

int main(){
	int Calificacion[5];
	char Materia;
	float Suma = 0, Promedio = 0;
	std::cout << "Materia: ";
	std::cin >> Materia;
	
	for(int i = 0; i < 5; i++){
		 std::cout << "Calificacion en la Unidad "<< (i+1) << ": ";
		 std::cin >> Calificacion[i];
		 Suma += Calificacion[i];
	}
	std::cout << "Asignatura: " << Materia << std::endl;
	std::cout << "Unidad 1\tUnidad 2\tUnidad 3\tUnidad 4\tUnidad 5\t Promedio" << std::endl;

	for(int i = 0; i < 5; i++){
		 std::cout << std::setw(8) << Calificacion[i] << "\t";
	}
	Promedio = Suma / 5;
	std::cout << Promedio << std::endl;	
	return 0;
}
