// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 16/08/2026

/* Escribir un programa que de la entrada estándar el precio de un producto y
muestre en la salida estándar el precio del producto al aplicarle el IVA
(IVA=13%) */

#include <iostream>

using namespace std; 

int main()
{
    float precio;
    float iva = 0.13; 
    float precioConIva; 

    cout << "Ingrese el precio del producto ";
    cin >> precio;

    while (precio<=0)
    {
        cout << "Ingrese un precio positivo y mayor a 0 " << endl;
        cin >> precio;
        }

    precioConIva = precio * iva + precio; 

    cout << "El precio de su producto despues del iva es de: " << precioConIva << endl; 

    return 0;
}
