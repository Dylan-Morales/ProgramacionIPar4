// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ingeniería de sistemas
// Fecha creación: 23/08/2026

/*3. Escriba un programa que calcule el valor de: 1+2+3+...+n*/

#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    int numero;
    int total = 0;

    cout << "Ingrese un número positivo mayor a 0 " << endl;
    cin >> numero;

    while (numero < 1)
    {
        cout << "ERROR. Ingrese un número positivo mayor a 0 " << endl;
        cin >> numero;
    }

    for (int i = 1; i <= numero ; i++)
    {
        total = total + i; 
    }

    cout << "La suma de los números desde el 1 hasta el " << numero << " es: " <<endl;
    cout << total;

    return 0;
}
