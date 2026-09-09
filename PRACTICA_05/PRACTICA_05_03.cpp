// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 3

/*3. Cree una función CalcularPrecioTotal que reciba el precio base de un producto y un
porcentaje de impuesto. Defina el impuesto con un valor predeterminado del 13%
(correspondiente al IVA boliviano). Si el usuario solo envía el precio, la función debe
aplicar automáticamente el 13%.*/

#include <iostream>
using namespace std;


// Función utilizando float en lugar de double
float calcularPrecioTotal(float precioBase, float porcentajeImpuesto = 0.13) 
{
    return precioBase + (precioBase * porcentajeImpuesto);
}

int main()
{
    float precio;
    char opcion;

    cout << "Ingrese el precio base del producto: ";
    cin >> precio;

    cout << "Desea ingresar un porcentaje de impuesto personalizado? (s/n): ";
    cin >> opcion;

    if (opcion == 's' || opcion == 'S') 
    {
        float impuestoPersonalizado;
        cout << "Ingrese el porcentaje de impuesto: ";
        cin >> impuestoPersonalizado;

        float total = calcularPrecioTotal(precio, impuestoPersonalizado);
        cout << "Precio total con " << impuestoPersonalizado << "%: " << total << endl;
    } 
    else 
    {
        float total = calcularPrecioTotal(precio);
        cout << "Precio total con el 13% por defecto: " << total << endl;
    }

    return 0;
}