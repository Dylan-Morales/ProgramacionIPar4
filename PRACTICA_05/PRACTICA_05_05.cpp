// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 5

/*5. Cree una función void calcularTiempo(int totalSegundos, int &horas, int &minutos, int
&segundos). La función recibe un número entero de segundos y debe modificar las
variables de referencia para que contengan las horas, minutos y segundos y desplegarlos
en el main().*/

#include <iostream>
#include <windows.h>

using namespace std;


void calcularTiempo (int totalSegundos, int &horas, int &minutos, int& segundos)
{
    horas = totalSegundos / 3600;
    totalSegundos = totalSegundos % 3600;
    minutos = totalSegundos / 60;
    totalSegundos = totalSegundos % 60;
    segundos = totalSegundos;
}

int main ()
{
    int totalSegundos, horas, minutos, segundos;

    cout << "Ingrese una hora en segundos (positivo) " << endl;
    cin >> totalSegundos;
    
    while (totalSegundos < 1)
    { 
        cout << "Ingrese una hora en segundos POSITIVO" << endl;
        cin >> totalSegundos;
    }

    calcularTiempo (totalSegundos, horas, minutos, segundos);
    
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;

    return 0;
}