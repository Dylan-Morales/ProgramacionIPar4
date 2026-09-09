// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 10

/*10. Genere N números aleatorios entre 1 y 1000 y realice los siguientes cálculos:
a. Sumatoria de todos los números pares
b. Promedio de los numero impares
c. Mayor numero primo generado*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int numeroAleatorio ()
{
    int min = 1;
    int max = 1000;
    return (rand () % (max - min +1)) + min;
}

void simulacion (int cantidadN)
{
    int pares = 0;
    int sumatoriaImpares = 0;
    int imparesTotales = 0;
    int promedioImpares = 0; 
    int primoMayor = 0;
    int primo = 0; 
    for (int i = 1; i <= cantidadN; i ++)
    {
        int contador = 0;
        int numero = numeroAleatorio();
        cout << "Numero aleatorio: " << numero << endl; 
        if (numero % 2 == 0)
            pares += numero;
        else
        {
            sumatoriaImpares += numero;
            imparesTotales += 1;
        }
        
        for (int i = 1; i <= numero / 2; i ++)
        {
            if (numero % i == 0)
                contador += 1;
        }

        if (contador == 1)
            primo = numero;

        if (primo > primoMayor)
            primoMayor = primo;
    }

    if (imparesTotales > 0) //EVITAMOS DIVISIÓN POR 0
        promedioImpares = sumatoriaImpares / imparesTotales;

    cout << "La suma de todos los números pares es: " << pares << endl;
    cout << "El promedio de todos los números impares es: " << promedioImpares << endl;
    cout << "el mayor número primo generado fue: " << primoMayor << endl;
}

int main ()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    int cantidadN, numero; 
    
    cout << "Ingrese la cantidad de números aleatorios que quiere que se generen (positivo) " << endl;
    cin >> cantidadN;
    
    while (cantidadN < 1)
    {
        cout << "ERROR. Ingrese una cantidad válida ";
        cin >> cantidadN;
    }
    simulacion (cantidadN);
    return 0;
}