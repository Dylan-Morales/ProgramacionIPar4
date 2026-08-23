// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ingeniería de sistemas
// Fecha creación: 23/08/2026

/*1. Realice un programa que solicite de la entrada un entero del 1 al 10 y
muestre en la salida su tabla de multiplicar*/

#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    int numero;
    

    cout << "Ingrese un número del 1 al 10 (positivo)" << endl;
    cin >> numero;

    while (numero < 1 || numero > 10) 
    {
        cout << "ERROR. Ingrese un número del 1 al 10 (positivo)" << endl;
        cin >> numero;
    }

    // NO SE ESPECIFICA HASTA QUE PUNTO DEBE SER LA TABLA DE MULTIPLICAR, SE HARÁ HASTA EL NÚMERO 50

    for (int i = 0; i <= 50; i++)
    {
        cout << i << " * " << numero << " = " << i * numero << endl;
    }

    return 0;
}