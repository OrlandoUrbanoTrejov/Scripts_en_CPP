/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Una compania de refrescos comercializa tres productos: de cola, de naranja y de limon. Se desea realizar un programa que calcule las ventas realizadas de cada producto. Para ello, se leera la cantidad vendida (maximo 5000000) y el precio en euros de cada producto y se mostrara un informe de ventas como el que sigue: */

#include <iostream>
using namespace std;

int main() {
    float Ventas_Cola, Ventas_Naranja, Ventas_Limon;
    float Precio_Cola, Precio_Naranja, Precio_Limon;
    float Total_Cola = 0, Total_Naranja = 0, Total_Limon = 0, Total_Final = 0;

    // Ventas Cola
    cout << "Ingresa la cantidad de ventas de cola: ";
    cin >> Ventas_Cola;
    cout << "Precio del producto: ";
    cin >> Precio_Cola;
    Total_Cola = Ventas_Cola * Precio_Cola;

    // Ventas Naranja
    cout << "Ingresa la cantidad de ventas de naranja: ";
    cin >> Ventas_Naranja;
    cout << "Precio del producto: ";
    cin >> Precio_Naranja;
    Total_Naranja = Ventas_Naranja * Precio_Naranja;

    // Ventas Limon
    cout << "Ingresa la cantidad de ventas de limón: ";
    cin >> Ventas_Limon;
    cout << "Precio del producto: ";
    cin >> Precio_Limon;
    Total_Limon = Ventas_Limon * Precio_Limon;

    Total_Final = Total_Cola + Total_Naranja + Total_Limon;

    cout << "Producto   Ventas    Precio Total" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Cola       " << Ventas_Cola << "\t      " << Precio_Cola << "\t  " << Total_Cola << endl;
    cout << "Naranja    " << Ventas_Naranja << "\t      " << Precio_Naranja << "\t  " << Total_Naranja << endl;
    cout << "Limon      " << Ventas_Limon << "\t      " << Precio_Limon << "\t  " << Total_Limon << endl;
    cout << "                                 TOTAL         " << Total_Final << endl;

    return 0;
}

