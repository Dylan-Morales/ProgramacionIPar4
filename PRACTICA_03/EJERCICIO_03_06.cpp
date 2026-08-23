// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ingeniería de sistemas
// Fecha creación: 23/08/2026

/*6. Escriba un programa para leer dos valores enteros distintos entre sí, de tal
forma que si el primer número es mayor al segundo, genere una serie
descendente, caso contrario, muestre una serie ascendente; el factor de
incremento o decremento es la unidad.*/

#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    int numeroUno;
    int numeroDos;

    cout << "Ingrese el primer número " << endl;
    cin >> numeroUno;
    cout << "Ingrese el segundo número " << endl;
    cin >> numeroDos;

    while (numeroUno == numeroDos)
    {
        cout << "ERROR. Ingrese valores distintos " << endl;
        cin >> numeroUno;
        cin >> numeroDos;
    }

    if (numeroUno > numeroDos)
    {
        for (int i = numeroUno; i >= numeroDos; i --)
        {
            cout << i << endl;
        }
    }
    else
    {
        for (int i = numeroUno; i <= numeroDos; i ++)
        {
            cout << i << endl;
        }
    }

    return 0;
}