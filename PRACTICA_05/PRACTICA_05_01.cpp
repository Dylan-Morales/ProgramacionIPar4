// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 1

/*1. Crea una función llamada “IntercambiarValores” que reciba dos parámetros por
referencia y los intercambie entre sí. Imprime los valores antes y después de la llamada a
la función. */

#include <iostream>
#include <windows.h>

using namespace std;

void IntercambiarValores (int &valor1, int &valor2)
{
    int aux;
    aux = valor2;
    valor2 = valor1;
    valor1 = aux;
}

int main ()
{
    SetConsoleOutputCP(65001);
    int valor1, valor2;
    cout << "Ingrese el valor 1 para intercambiarlo por el valor 2 (entero) " << endl;
    cin >> valor1;

    cout << "Ingrese el valor 2 para intercambiarlo por el valor 1 (entero) " << endl;
    cin >> valor2;

    cout << "Antes de intercambiar: " << "\nValor 1: " << valor1 << endl;
    cout << "Valor 2: " << valor2 << endl;

    IntercambiarValores (valor1, valor2);
    cout << "Después de intercambiar " << "\nValor 1: " << valor1 << endl;
    cout << "Valor 2: " << valor2 << endl;

    return 0;
}