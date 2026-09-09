// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 2

/*2. Crea una función llamada “ModificarValores” que reciba dos parámetros: un entero
por valor y un entero por referencia. La función debe multiplicar el valor por 2 (para el
valor pasado por valor) y cambiar el valor por referencia (sumando 10). */

#include <iostream>
#include <windows.h>

using namespace std;

int modificarValores (int entero, int &referencia) 
{   
    entero *= 2;
    referencia += 10;
    return entero;
}

int main ()
{
    int entero, referencia;

    cout << "Ingrese el valor 1: " << endl;
    cin >> entero;

    cout << "Ingrese el valor 2: " << endl; 
    cin >> referencia;

    entero = modificarValores(entero, referencia);
    cout << "Valor 1: " << entero << "\nValor 2: " << referencia << endl;
    return 0;
}