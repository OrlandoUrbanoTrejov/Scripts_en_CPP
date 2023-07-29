/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  27-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Visualizar la tarifa de luz segun el gasto de corriente electrica, para un gasto menor de: 1000 Kw, la tarifa es de 1.2 entre 1000, 1850 Kw la tarifa es 1.0 y mayor de 1850 la tarifa es de 0.9 */

#include <iostream>

int main(){
    int Tarifa;
	 std::cout << "Ingresa la tarifa de luz electrica: ";
	 std::cin >> Tarifa;
	 if(Tarifa < 1000){
		  std::cout << "Tu tarifa es de 1.2" << std::endl;
	 }
	 else if(Tarifa > 1000 && Tarifa < 1850){
	     std::cout << "Tu tarifa es de 1.0" << std::endl;
	 }
	 else{
	     std::cout << "Tu tarifa es de 0.9" << std::endl;
	 }
    return 0;
}
