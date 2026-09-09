// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 8

/*8. Genera un número aleatorio entre 1 y 10 y calcula su factorial.
*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int numeroAleatorio ()
{
    int min = 1;
    int max = 10;
    return (rand () % (max - min + 1)) + min; 
}

void factorial (int numeroAleatorio)
{
    int factorial = 1;
    cout << "El factorial de su número :" << endl;
    for (int i = 1; i <= numeroAleatorio; i ++)
    {
        if (i == numeroAleatorio)
            cout <<  i;
        else
            cout <<  i << "x";
        factorial = factorial * i;
    }

    cout <<" = ";
    cout << factorial;
}

int main ()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    int numeroAleatorioo = numeroAleatorio ();
    cout << "Su número aleatorio es: " << numeroAleatorioo << endl; 
    factorial (numeroAleatorioo);
}
