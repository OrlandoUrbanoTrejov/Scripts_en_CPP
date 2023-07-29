/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Hacer un programa que simule un cajero automatico con un saldo inicila de 1000 */

#include <iostream>

int main(){
	 int Opcion; 
    float Depositar, Saldo = 1000, Nuevo_Saldo = 0; 
	 std::cout << "-------CAJERO AUTOMATICO-------" << std::endl;
	 std::cout << "1) Ingresar dinero" << std::endl;
	 std::cout << "2) Retirar dinero" << std::endl;
	 std::cout << "3) Salir" << std::endl;

	 std::cin >> Opcion;
    if(Opcion == 1){
	     std::cout << "¿Cuanto dinero vas a ingresar?: ";
		  std::cin >> Depositar;
		  Nuevo_Saldo = Saldo + Depositar;
		  std::cout << "Tu nuero salario es de: $" << Nuevo_Saldo << std::endl;  
	 }
	 else if(Opcion == 2){
	     std::cout << "¿Cuanto dinero vas a retirar?: ";
        std::cin >> Depositar;
		  if(Depositar > 1000){
		      std::cout << "Saldo insuficiente, Intenta otra vez" << std::endl;
		  }
		  else{
		      Nuevo_Saldo = Saldo - Depositar;
				std::cout << "Tu nuevo saldo es de: " << Nuevo_Saldo << std::endl;
		  }
    }
    else if(Opcion == 3){
	 } 
	 else{
	     std::cout << "Opcion invalida" << std::endl;
	 }
	 
}
