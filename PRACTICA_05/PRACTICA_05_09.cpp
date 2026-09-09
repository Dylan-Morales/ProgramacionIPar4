// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 9

/*9. Genere N número aleatorios entre 1 y 10000, muéstrelos en pantalla y cuente cuantos
números son primos.*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int numeroAleatorio ()
{
    int min = 1;
    int max = 10000;
    return (rand() % (max - min +1)) + min;
}

int numeroPrimo (int numeroAleatorio)
{
    int cantidadPrimos = 0; 
    int contador = 0;
    for (int i = 1; i <= numeroAleatorio / 2; i++)
    {   
        if (numeroAleatorio % i == 0)
            contador += 1;
    }

    if (contador == 1)
        cantidadPrimos = 1;
    
    return cantidadPrimos;
}

int main ()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    int cantidadN, cantidadPrimos = 0;
    cout << "Ingrese la cantidad de números aleatorios que quiere que se generen aleatoriamente (postivo)" << endl;
    cin >> cantidadN;

    while (cantidadN < 1)
    {
        cout << "ERROR. Ingrese cantidad válida " << endl;
        cin >> cantidadN;
    }

    for (int i = 1; i <= cantidadN; i ++)
    {
        int aleatorio = numeroAleatorio();
        cout << "Número aleatorio: " << aleatorio << endl;
        cantidadPrimos += numeroPrimo (aleatorio);
        cout << "\n----------------------------------------------- " << endl;
    }
    cout << "La cantidad de números primos fue de :" << cantidadPrimos << endl;
    return 0; 
}