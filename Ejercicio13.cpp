/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: alcula el precio de un boleto de viaje, tomando en cuenta el numero de kilometros que se van a recorrer. El precio por kilometro es de $20.50 */

#include <iostream>

int main(){
    float Precio_Boleto = 20.50, Num_Kilometros, Precio = 0;
    std::cout << "Numero de kilometros recorridos: ";
    std::cin >> Num_Kilometros;
    Precio = Precio_Boleto * Num_Kilometros;
    std::cout << "Preio del boleto: $" << Precio << std::endl;
    return 0;

}

