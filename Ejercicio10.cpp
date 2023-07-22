/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: urbanorlando79@gmail.com */

/* Ejercicio:  El banco bandido de peluche desea calcular para cada uno de sus N clientes su saldo actual, su pago minimo y su pago para no generar intereses. Ademas quiere calcular el monto de lo que gano por concepto intereses con los clientes morosos. los datos que se conocen de cada clientes son: Saldo anterior, monto de las compras que realizo y pago que deposito en el corte anterior. Para calcular el pago minimo se considera 15% del saldo actual, y el pago para no generar intereses corresponde al 85% del pago actual, considerando que el saldo actual debe incluir 12% de los intereses causados por no realizar el pago minimo y $200 de multa por el mismo motivo. Realice el algoritmo correspondiente. */

#include <iostream>
#include <string>

int main() {
    float Saldo_Actual = 0, Pago_Actual = 0, Saldo_Anterior = 0, Saldo_Minimo = 0, Pago_Interes = 0, Monto_Compras = 0, Deposito = 0;
    int Clientes;

    std::string Nombre;
    std::cout << "Número de clientes: ";
    std::cin >> Clientes;

    for(int i = 0; i < Clientes; i++){
        std::cout << "Nombre cliente: ";
        std::cin >> Nombre;
        std::cout << "Saldo anterior: ";
        std::cin >> Saldo_Anterior;
        std::cout << "Último depósito: ";
        std::cin >> Deposito;
        std::cout << "Monto por ventas: ";
        std::cin >> Monto_Compras;
        std::cout << "Saldo Actual: ";
        std::cin >> Saldo_Actual;

        Pago_Actual = (Saldo_Actual * 0.12) + 200;
        Saldo_Minimo = Saldo_Actual * 0.15;
        Pago_Interes = Saldo_Actual * 0.85;

        std::cout << "Tu saldo actual, " << Nombre << ", es de " << Pago_Actual << " pesos" << std::endl;
        std::cout << "Tu pago mínimo, " << Nombre << ", es de " << Saldo_Minimo << " pesos" << std::endl;
        std::cout << "El pago para no generar intereses, " << Nombre << ", es de " << Pago_Interes << " pesos" << std::endl;
    }

    return 0;
}

