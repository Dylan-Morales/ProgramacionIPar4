// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 16/08/2026

/* Realice un programa que lea un valor entero y determine si se trata de un
número par o impar  */

#include <iostream>

using namespace std; 

int main ()
{
    int numero;

    cout << "Ingrese un numero para determinar si es par o impar " << endl; 
    cin >> numero; 

    if (numero % 2 == 0)
    {
        cout << "El numero es par " << endl;
    }
    else 
    {
        cout << "El numero es impar " << endl;
    }

    return 0;
}