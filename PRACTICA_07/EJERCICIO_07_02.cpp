// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sitemas
// Fecha creación: 24/09/2026

#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

void introducirDatos (vector <float> &voltios)
{
    float numero = 0;
    for (int i = 0; i < 9; i ++)
    {
        cout << "Ingrese el dato N° " << i+1 << ": ";
        cin >> numero;
        voltios.push_back(numero);
    }
}

void mostrarVector (vector <float> &voltios)
{
    for (int i = 0; i < voltios.size(); i ++)
    {
        if ((i+1) % 3 == 0)
        {
            cout <<  voltios [i] << "\t" << endl;
        }

        else
        {
            cout << voltios[i] << "\t";
        }
    }
}

int main ()
{
    SetConsoleOutputCP(65001);
    vector <float> voltios;
    introducirDatos(voltios);
    mostrarVector(voltios);
}