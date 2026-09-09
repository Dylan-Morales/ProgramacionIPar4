// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 7

/*7. Simular el lanzamiento de una moneda n veces y determinar el porcentaje de caras y el
porcentaje de cruz.
*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int lanzamiento ()
{
    int min = 1;
    int max = 2;
    return (rand () % (max - min +1)) + min;
}

int main ()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    int caraCruz = 0;
    float cara = 0;
    float cruz = 0;
    int cantidadN;

    cout << "Ingrese la cantidad de veces que lanzará la moneda: " << endl;
    cin >> cantidadN;

    while (cantidadN<1)
    {
        cout << "Error. Ingrese una cantidad positiva " << endl;
        cin >> cantidadN;
    }

    for (int i = 1; i <= cantidadN; i ++)
    {
        cout << "Lanzamiento " << i << ":" << endl; 
        caraCruz = lanzamiento();
        if (caraCruz == 1)
        {
            cara +=1;
            cout << "Cara " << endl; 
        }
        else 
        {
            cruz +=1; 
            cout << "Cruz " << endl;
        }
        cout << "----------------------------------------------------------------------------------------------" << endl;
    }

    cara = cara / cantidadN * 100;
    cruz = cruz / cantidadN * 100;

    cout << "Cara = " << cara << "%" << endl;
    cout << "Cruz = " << cruz << "%" << endl;

    return 0;
}