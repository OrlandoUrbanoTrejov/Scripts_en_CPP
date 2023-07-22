/* Orlando Urbano Trejo (Lando)
 * Fecha: 18-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio: Haciendo uso de arreglos bidimensionales, solicita la calificación de las siguientes materias:
→ Cálculo Diferencial.
→ Fundamentos de programación.
→ Química.
→ Fundamentos de investigación.
→ Matemáticas Discretas.
→ Desarrollo Sustentable.
Recuerda que cada materia tiene 5 unidades, una vez obtenida cada calificación por unidad, calcula el promedio de cada materia. */ 

#include <iostream>

int main(){
	 char Materia[6][40] = {
		  "Calculo Diferencial",
	     "Fundamentos de Programación",
	     "Quimica",
	     "Fundamentos de Investigación",
	     "Matemáticas Discretas",
	     "Desarrollo Sustentable" };
    float Calificaciones[6][5], Promedio_Materias[6] = {0}, Promedio_Final = 0;
    for(int  i = 0; i < 6; i++){
		  std::cout << "Calificacion " << Materia[i] << ": " << std::endl;
	     for(int j = 0; j < 5; j++){
    	      std::cout << "Unidad " << (j+1) << ": ";
				std::cin >> Calificaciones[i][j];
				Promedio_Materias[i]	+= Calificaciones[i][j]; 
		  }
		  Promedio_Materias[i] /= 5;
		  Promedio_Final += Promedio_Materias[i];
		  std::cout  << std::endl;
	 }
	 Promedio_Final /=6;
	 std::cout << "Unidad 1\tUnidad 2\tUnidad 3\tUnidad 4\tUnidad 5\tPromedio\n" << std::endl;
	 for(int i = 0; i < 6; i++){

	 	  for(int j = 0; j < 5; j++){
		  	   std::cout << Calificaciones[i][j] << "\t\t";
		  }
		  std::cout << Promedio_Materias[i] << "\n";
	 }
	 std::cout << "\nPromedio General:" << Promedio_Final << "\n" << std::endl;
	 return 0;
}
