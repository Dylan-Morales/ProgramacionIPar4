// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ingeniería de sistemas
// Fecha creación: 23/08/2026

/*Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de
factoriales).*/

#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    int numero; 
    int total = 1;
    
    cout << "Ingrese un número positivo por encima de 0 " << endl;
    cin >> numero;

    while (numero < 1)
    {
        cout << "ERROR. Ingrese un número positivo por encima de 0 " << endl;
        cin >> numero; 
    }

    for (int i = 1; i <= numero; i ++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j ++)
        {
            factorial = factorial * j; 
        }
        total = total + factorial;
    }

    cout << "El total de la suma de factoriales desde el 1 hasta " << numero << "Es: " << endl; 
    cout << total;

    return 0; 
}