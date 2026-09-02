// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sistemas
// Fecha creación: 01/09/26

/*Sumatoria de Naturales: Realice una función que reciba un número entero
positivo N y calcule la suma de todos los números desde 1 hasta N mediante un
ciclo.*/

#include <iostream>
#include <windows.h>

using namespace std;

int sumatoriaNumeros (int numero) 
{   
    int suma = 0;
    for (int i = 1; i <= numero; i ++)
    {
        suma += i;
    }
    return suma; 
}

int main ()
{
    SetConsoleOutputCP(65001);
    int numero;
    int sumatoria; 

    cout << "Ingrese un número positivo para sumar desde el 1 hasta este mismo número " << endl;
    cin >> numero;

    while (numero < 1)
    {
        cout << "Ingrese un número positivo para sumar desde el 1 hasta este mismo número " << endl;
        cin >> numero;
    }

    sumatoria = sumatoriaNumeros(numero);

    cout << "La suma de todos sus números es :" << sumatoria << endl; 

    return 0;
}