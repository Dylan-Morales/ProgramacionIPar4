// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 16/08/2026

/* Escriba un programa que lea un año (un número entero de 4 dígitos) e
indique mediante una condición if si el año introducido es bisiesto. */

#include <iostream>

using namespace std;

int main()
{
    int anio;

    cout << "Ingrese el anio que desea saber si es bisiesto o no " << endl;
    cin >> anio;

    if ((anio%4 == 0 and anio % 100 != 0) or (anio%400 == 0))
    {
        cout << "Su anio es bisiesto " << endl;
    }
    
    else
    {
        cout << "Su anio no es bisiesto " << endl;
    }

    return 0;
}