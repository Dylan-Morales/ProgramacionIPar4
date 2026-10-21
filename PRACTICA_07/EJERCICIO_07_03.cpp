// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sitemas
// Fecha creación: 24/09/2026

#include <iostream>
#include <windows.h>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int numeroAleatorio (int min, int max)
{
    return (rand () % (max - min + 1) + min);
}



void introducirCalificaciones (vector <int> &calificaciones, int n)
{
    for (int i = 0; i < n; i ++)
    {
        int numAleatorio = numeroAleatorio (1, 100); // Valor arbritario para no llenar las notas 1 por 1
        calificaciones.push_back(numAleatorio);
    }
}

int sumaTotal (vector <int> calificaciones)
{
    int suma = 0;
    for (int i = 0; i < calificaciones.size() ; i ++)
    {
        suma += calificaciones[i];
    }
    return suma;
}

float promedio (vector <int> &calificaciones)
{
    float suma = sumaTotal (calificaciones);
    float promedio = 0;
    

    promedio = suma / calificaciones.size();
    return promedio;
}

void desviacion (vector <int> &calificaciones, vector <float> &desviaciones)
{
    float prom = promedio (calificaciones);
    float desviacion; 
    for (int i = 0; i < calificaciones.size(); i ++)
    {
        desviacion = calificaciones[i] - prom;
        desviaciones.push_back(desviacion);
    }
}

void mostrarVectores (vector <int> calificaciones, vector <float> desviaciones)
{
    for (int i = 0; i < calificaciones.size(); i ++)
    {
        cout << "La nota " << i + 1 << ": " << calificaciones[i] << ", con una desviación de: " << desviaciones [i] << endl;
    }


}

float varianza (vector <float> desviaciones)
{
    float varianza = 0;
    for (int i = 0; i < desviaciones.size(); i ++)
    {
        varianza += desviaciones[i] * desviaciones[i];
    }

    varianza = varianza / desviaciones.size();
    return varianza;
}

int main () 
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    int n;
    vector <int> calificaciones;
    vector <float> desviaciones;

    cout << "Ingrese cuántas notas aleatorias de entre 1 y 100 quiere que se generen: " << endl;
    cin >> n;

    while (n < 1)
    {
        cout << "Ingrese un número mayor a 0: " << endl;
        cin >> n;
    }

    introducirCalificaciones(calificaciones, n);
    cout << "La suma de todas las calificaciones creadas es: " << sumaTotal(calificaciones) << endl;
    cout << "El promedio de todas las notas es: " << promedio (calificaciones) << endl;
    desviacion (calificaciones, desviaciones);
    mostrarVectores (calificaciones, desviaciones);
    cout << "La varianza total de todas las notas es de: " << varianza (desviaciones);
}
