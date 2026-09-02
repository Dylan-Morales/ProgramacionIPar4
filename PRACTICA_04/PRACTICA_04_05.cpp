// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sistemas
// Fecha creación: 01/09/26

/*Verificación de Paridad: Diseñe una función booleana que determine si un número
entero es par. La función debe retornar true si es par y false en caso contrario.*/

#include <iostream>
#include <windows.h>

using namespace std;

bool numeroPar (int numero)
{
    bool par = true;
    if (numero % 2 != 0)
    {
        par = false;
    }
    return par;
}

int main ()
{
    SetConsoleOutputCP(65001);
    int numero; 
    bool par; 

    cout << "Ingrese un número entero para saber si es par o no " << endl;
    cin >> numero;

    par = numeroPar(numero);

    if (par)
    cout << "Su número es par " << endl; 
    else
    cout << "Su número es impar " << endl;

    return 0;
}