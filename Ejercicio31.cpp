/* Orlando Urbano Trejo (Lando)
 * Fecha: 18-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio: En la cafetería de Tesji hay una urna con pelotas de colores. verde, roja y amarilla. Cada una aplica un desucento diferente en el total de tu compra. La pelota verde ofrece un 10% de descuento, la amarilla un 5% y la roja un 15%. Con base a esos datos, imprime el monto final a pagar, ya con el descuento. */

#include <iostream>

int main(){
	 int Pelota;
	 float Compra = 0, Resultado = 0;
	 std::cout << "-----CAFETERIA TESJI-----" << std::endl;
	 std::cout << "1) Pelota Verde" << std::endl;
	 std::cout << "2) Pelota Roja" << std::endl;
	 std::cout << "3) Pelota Amarilla" << std::endl;

	 std::cout << "Elige una opcion: ";
	 std::cin >> Pelota;

	 if(Pelota == 1){
	 	  std::cout << "Descuento 10%" << std::endl;
		  std::cout << "Total de tu compra: ";
        std::cin >> Compra;
		  Resultado = Compra - (Compra * 0.10);
		  std::cout << "Monto total: $" << Resultado << std::endl;
	 }
	 else if(Pelota == 2){
        std::cout << "Descuento 5%" << std::endl;
        std::cout << "Total de tu compra: ";
        std::cin >> Compra;
        Resultado = Compra - (Compra * 0.05);
		  std::cout << "Monto total: $" << Resultado << std::endl;
    }
	 else if(Pelota == 3){
        std::cout << "Descuento 15%" << std::endl;
        std::cout << "Total de tu compra: ";
        std::cin >> Compra;
        Resultado = Compra - (Compra * 0.15);
        std::cout << "Monto total: $" << Resultado << std::endl;
	 }
	 else{
	 std::cout << "Opcion invalida" << std::endl;
	 } 
    return 0;
}
