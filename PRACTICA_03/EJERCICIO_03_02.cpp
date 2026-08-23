// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ingeniería de sistemas
// Fecha creación: 23/08/2026

/*2. Realice un programa que genere N número aleatorios entre 1 y 100.
Luego el programa debe mostrar la siguiente salida:
• Suma todos los números ingresados.
• Suma de todos los números pares.
• Suma de todos los números impares.
• Suma de todos los números primos.*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    srand(time(0));
    SetConsoleOutputCP(65001);
    int numeros; 
    int max = 100;
    int min = 1;
    

    cout << "Ingrese la cantidad de números que quiere que se generen de forma aleatoria " << endl;
    cin >> numeros;

    while (numeros < 1)
    {
        cout << "ERROR. Ingrese una cantidad mayor a 0 " << endl;
        cin >> numeros;
    }

    int total = 0;
    int pares = 0;
    int impares = 0;
    int primos = 0; 

    cout << "Los números aleatorios generados son: " << endl;
    for (int i = 1; i <= numeros; i++)
    {
        int divisor = 1;
        int contador = 0;
        int numerosAleatorios = (rand() % (max - min + 1)) + min; 
        
        if (i != numeros)
        {
            cout << numerosAleatorios << ", ";
        }
        else 
        {
            cout << numerosAleatorios;    // USAMOS ESTE IF PARA EVITAR QUE SALGA UNA COMA EN EL NÚMERO FINAL 
        }
        total = total + numerosAleatorios;

        if (numerosAleatorios % 2 == 0)
        {
            pares = pares + numerosAleatorios; 
        }
        else
        {
            impares = impares + numerosAleatorios; 
        }

        while (divisor <= numerosAleatorios) 
        {
            if (numerosAleatorios % divisor == 0)
            {
                contador += 1;
            }
            
            divisor += 1;
        }
        if (contador == 2)
        {
            primos = primos + numerosAleatorios;
        }
    }

    cout << "\n\nLa suma de todos los números es: " << total << endl;
    cout << "La suma de todos los números pares es: " << pares << endl;
    cout << "La suma de todos los números impares es: " << impares << endl;
    cout << "La suma de todos los números primos es: " << primos << endl;

    return 0; 
}
