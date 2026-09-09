// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 4

/*4. Implemente una función llamada calcularArea. Debe sobrecargarla para tres casos
distintos:
• Un parámetro (double): Calcula el área de un cuadrado.
• Dos parámetros (double, double): Calcula el área de un rectángulo.
• Un parámetro (float, float PI): Calcula el área de un círculo.*/

#include <iostream>
#include <windows.h>

using namespace std;

double calcularArea(double lado)
{
    return lado * lado;
}

double calcularArea(double base, double altura)
{
    return base * altura;
}

float calcularArea(float radio, float PI)
{
    return PI * (radio * radio);
}

int main()
{
    int opcion;
    cout << "Elija la figura para calcular el area:" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Circulo" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    if (opcion == 1)
    {
        double lado;
        cout << "Ingrese el lado del cuadrado: ";
        cin >> lado;
        cout << "El area del cuadrado es: " << calcularArea(lado) << endl;
    }

    if (opcion == 2)
    {
        double base, altura;
        cout << "Ingrese la base del rectangulo: ";
        cin >> base;
        cout << "Ingrese la altura del rectangulo: ";
        cin >> altura;
        cout << "El area del rectangulo es: " << calcularArea(base, altura) << endl;
    }

    if (opcion == 3)
    {
        float radio, pi;
        cout << "Ingrese el radio del circulo: ";
        cin >> radio;
        cout << "Ingrese el valor de PI: ";
        cin >> pi;
        cout << "El area del circulo es: " << calcularArea(radio, pi) << endl;
    }

    if (opcion != 1)
    {
        if (opcion != 2)
        {
            if (opcion != 3)
            {
                cout << "Opcion no valida." << endl;
            }
        }
    }

    return 0;
}