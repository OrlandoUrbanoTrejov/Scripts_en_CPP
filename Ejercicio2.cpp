/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio: Realice un algoritmo que calcule el precio total del boleto de una persona, ingresando el precio por kilometro y la cantidad de kilometros a recorrer. Represente el diagrama de flujo, el pseudocodigo correspondiente */

#include <iostream>
// Con esta biblioteca podemos controlar la salida de nuestros datos 
#include <iomanip>

int main() {
    float Precio_Kilometro, Distancia;
    float Precio_Boleto = 0;
    // Pedimos los datos
    std::cout << "Precio por kilometro: ";
    // Guardamos en uaa variable el dato que se nos a asignado
    std::cin >> Precio_Kilometro;
    std::cout << "Cantidad de kilometros a recorrer: ";
    std::cin >> Distancia;
    // Aqui realizamos las operaciones
    std::cout << "Precio del boleto: $" << std::fixed << std::setprecision(2) << (Precio_Kilometro * Distancia) << std::endl;

    return 0;
}

