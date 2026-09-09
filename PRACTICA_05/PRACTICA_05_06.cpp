// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 6

/*6. Diseñe una función void agregarNota(double &sumaTotal, int &cantidadNotas, double
nuevaNota). La función recibe el acumulador de la suma y el contador de notas por
referencia. Cada vez que se llama, suma la nuevaNota al total e incrementa en 1 el
contador. Se debe llamar a esta función agregarNota() N veces.*/

#include <iostream>
#include <windows.h>

using namespace std;

void agregarNota (double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal += nuevaNota;
    cantidadNotas += 1;
}

int main ()
{
    SetConsoleOutputCP(65001);
    double sumaTotal = 0;
    int cantidadNotas = 0;
    double nuevaNota;
    int cantidadN;

    cout << "Ingrese la cantidad de notas que desea poner (positiva): " << endl;
    cin >> cantidadN;

    while (cantidadN < 1)
    {
        cout << "Error. ingrese cantidad positiva " << endl;
        cin >> cantidadN;
    }

    for (int i = 1; i <= cantidadN; i++)
    {  
        cout << "Ingrese la nota " << i << ":" << endl;
        cin >> nuevaNota;

        while (nuevaNota < 1)
        {
            cout << "Error. Ingrese una nota válida (positiva)";
            cin >> nuevaNota;
        }
        agregarNota (sumaTotal, cantidadNotas, nuevaNota);
    }

    cout << "La suma total de las notas fue de: " << sumaTotal << endl;
    cout << "La cantidad de notas ingresadas fue de: " << cantidadNotas << endl;
}