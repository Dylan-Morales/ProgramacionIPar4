// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sistemas
// Fecha creación: 01/09/26

/*Cálculo de Física (MRU): Cree una función para calcular la distancia recorrida por
un objeto, recibiendo como parámetros la velocidad constante y el tiempo (d=v *
t).*/

#include <iostream>
#include <windows.h>

using namespace std;

float distanciaRecorrida (float velocidad, float tiempo)
{
    float distancia; 
    
    distancia = velocidad * tiempo; 
    
    return distancia; 
}

int main ()
{
    SetConsoleOutputCP(65001);
    float velocidad, tiempo, distancia;

    cout << "Ingrese la velocidad del objeto" << endl; 
    cin >> velocidad;

    cout << "Ingrese el tiempo que recorrió el objeto " << endl;
    cin >> tiempo;

    while (tiempo < 1)
    {
        cout << "El tiempo no puede ser negativo para este ejemplo " << endl;
        cin >> tiempo;
    }

    distancia = distanciaRecorrida (velocidad, tiempo);

    cout << "La distancia recorrida por el objeto fue de: " << distancia << endl;

    return 0;

}