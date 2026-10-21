// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 14/10/2026

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <vector>
#include <string>

using namespace std;

int numeroAleatorio (int min, int max)
{
    return (rand() % (max - min + 1) + min);
}

void rellenarNotas (int m[5][3])
{
    for (int i = 0; i < 5; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            m[i][j] = numeroAleatorio (1, 100);
        }
    }
}

void rellenarPromedios ( int m[5][3], vector <float> &promedios)
{
    float promedio = 0;
    for (int i = 0; i < 5; i ++)
    {
        promedio = 0;
        for (int j = 0; j < 3; j ++)
        {   
            promedio+= m[i][j];
            if (j == 2)
                promedios.push_back(promedio/3);
        }
    }
}

void mostrarNotas (vector <string> nombres, int m[5][3], vector <float> &promedios)
{
    cout << "Las notas de los estudiantes son: " << endl;
    for (int i = 0; i < 5; i ++)
    {
        cout << nombres [i] << ": ";
        for (int j = 0; j < 3; j ++)
        {
            if (j != 2)
                cout << m[i][j] << ", ";
            else
                cout << m[i][j] << " Y tiene un promedio de : " << promedios [i] << endl; 
        } 
    }
}

void ordenamiento (vector <string> &nombres, int m[5][3], vector <float> &promedios)
{
    int contador = 1;
    string aux;
    int auxNota[1][3];
    float auxPromedio = 0; 
    while (contador < 5)
    {   
        contador = 1;
        for (int i = 0; i < 4; i ++)
        {
            if (nombres[i][0] > nombres[i+1][0])
            {
                aux = nombres[i];
                nombres[i] = nombres[i+1];
                nombres[i+1] = aux;
                
                auxPromedio = promedios[i];
                promedios [i] = promedios [i+1];
                promedios [i+1] = auxPromedio;

                for (int j = 0; j < 3; j ++)
                {
                    auxNota [0][j] = m [0+1][j];
                    m[0+1][j] = m [0][j];
                    m [0][j] = auxNota [0][j];
                }
            }
        }
        for (int i = 0; i < 4; i ++)
        {
            if (nombres[i][0] <= nombres [i+1][0])
                contador += 1;
        }
    }
}

int main ()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    vector <string> nombres = {"Melissa", "Yurem", "Adrian", "Dylan", "Soria"};
    int matrizNotas [5][3];
    vector <float> promedios;
    rellenarNotas (matrizNotas);
    rellenarPromedios(matrizNotas, promedios);
    cout << "Antes de ordenar " << endl;
    mostrarNotas (nombres, matrizNotas, promedios);
    cout << "---------------------------------------- \nDespués de ordenar" << endl; 
    ordenamiento (nombres, matrizNotas, promedios);
    mostrarNotas (nombres, matrizNotas, promedios);
}