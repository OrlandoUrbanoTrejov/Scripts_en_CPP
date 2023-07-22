/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  17-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Un vendedor de vestidos ofrece 3 diferentes tallas, con diferentes precios, la grande con un precio
de $500 por vestido, la mediana con un costo de $400 y la chica de $300. Selecciona la talla a comprar
y solicita el número de vestidos que desee, Posteriormente, calculo el monto final */

#include <iostream>

int main(){
	std::cout << "----VESTIDOS----" << std::endl;
	std::cout << "1) Grande $500" << std::endl;
	std::cout << "2) Mediana $400" << std::endl;
	std::cout << "3) Chica $300" << std::endl;
	int Vestido, Cantidad;
	float Total = 0;
	std::cout << "Elige la marca que deseas comprar (1-3):";
	std::cin >> Vestido;
	if(Vestido == 1){
		 std::cout << " Numero de vestidos que deseas comprar: ";
		 std::cin >> Cantidad;
		 Total = Cantidad * 500;
   }
	else if(Vestido == 2){
		 std::cout << " Numero de vestidos que deseas comprar: ";
       std::cin >> Cantidad; 
		 Total = Cantidad * 400;
	}
	else if(Vestido == 3){
		 std::cout << " Numero de vestidos que deseas comprar: ";
       std::cin >> Cantidad;
       Total = Cantidad * 300;
	}
	else{
	 	 std::cout << "Opcion no valida";
	}
	std::cout << "Monto total final: $" << Total << std::endl;

	return 0;
}
