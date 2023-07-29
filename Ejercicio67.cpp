/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  27-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un ejercicio que imprima una piramide de numeros */

#include <iostream>

int main() {
    int Numero, Posicion_Central, Numero_Posiciones, Posicion_Inicial, Posicion_Final;
	 std::cout << "Ingresa un numero: ";
	 std::cin >> Numero;

    Posicion_Central = Numero;
    Numero_Posiciones = Numero * 2 - 1;
    Posicion_Inicial = Numero;
    Posicion_Final = Numero;

    for(int i = 0; i < Numero; i++){
        int Contador = 1;
        for(int j = 1; j <= Numero_Posiciones; j++){
            if(j < Posicion_Inicial || j > Posicion_Final){
						  std::cout << " ";
            } 
				else{
                if(j < Numero){
								std::cout <<  Contador;
                    Contador++;
                } 
					 else{
						  std::cout << Contador;
                    Contador--;
                }
            }
        }
		  std::cout << std::endl;
        Posicion_Final++;
        Posicion_Inicial--;
    }
    return 0;
}

