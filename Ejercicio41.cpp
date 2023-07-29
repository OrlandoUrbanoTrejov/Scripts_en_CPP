/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un codigo que calcule la siguiente suma (1-2+3-4+5-6 hasta n) donde n sea ingresada por el usuario */ 

#include <iostream>

int main(){
	 int Numero, Suma = 0, Negativos = 0, Pares = 0, Impares = 0;
    std::cout << "Ingresa un numero: ";
    std::cin >> Numero;
    for(int i = 1; i <= Numero; i++){
	     if(i % 2 == 0){
		      Negativos = i * (-1);
				Pares += Negativos;
		  }
		  else{
		      Impares += i;
		  }
	 }
	 Suma = Pares + Impares;
	 std::cout << "Suma: " << Suma << std::endl;  
    return 0;
}
