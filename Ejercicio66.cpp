/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  27-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Sumar numeros pares desde n hasta m. */

#include <iostream>
int main(){
    int Num_Inicio,Num_Final, Contador = 1, Suma = 0; 
	 std::cout << "Ingresa un numero para el inicio de la suma: ";
	 std::cin >> Num_Inicio;
	 std::cout << "Ingresa un numero para el limite de la suma: ";
	 std::cin >> Num_Final;
    for(int i = 1; i >= Num_Inicio && i <= Num_Final; i++){
            if(i % 2 == 0){
            Suma += i; 
            }
    }  
	 std::cout << "Suma: " << Suma << std::endl;
    return 0; 
}// Fin del metodo
