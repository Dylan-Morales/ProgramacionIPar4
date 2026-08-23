// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ingeniería de sistemas
// Fecha creación: 23/08/2026

/*7. Crear un algoritmo que indique si un número es perfecto o no. Se dice que
un número es perfecto si la suma de sus divisores es igual al número. Por
ejemplo, 6 tiene como divisores 1, 2, y 3, entonces 1+2+3=6; el número 6 es
perfecto. Si el número es 9, tiene como divisores 1, 3, entonces 1+3=4; no
es perfecto.*/

#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    int numero;
    int divisor;
    int suma = 0; 

    cout << "Ingrese un número positivo para saber si es un número perfecto " << endl; 
    cin >> numero;

    while (numero<0)
    {
        cout << "ERROR. Ingrese un número positivo ";
        cin >> numero;
    }

    for (int i = 1; i < numero; i ++)           // NO INICIAMOS EN 0, PORQUE "i" ES EL DIVISOR, Y SI VALE 0, ES UN ERROR MATEMÁTICO
    {
        if (numero % i == 0)
        {
            divisor = i;
            suma += divisor;
        }

    }
    if (suma == numero)
    {
        cout << "Su número es perfecto " << endl;
    }
    else 
    {
        cout << "Su número no es perfecto " << endl;
    }

    return 0;
}