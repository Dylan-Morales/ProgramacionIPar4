// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sitemas
// Fecha creación: 24/09/2026

#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;


void rellenarVectores (vector <int> &vectorUno, vector <int> &vectorDos)
{
    int numeroUno, numeroDos;
    for (int i = 0; i < 5; i ++)
    {
        cout << "Ingrese el elemento " << i+1 << " del primer vector: " << endl;
        cin >> numeroUno;

        cout << "Ingrese el elemento " << i+1 << " del segundo vector: " << endl;
        cin >> numeroDos;

        vectorUno.push_back(numeroUno);
        vectorDos.push_back(numeroDos);
    }
} 

void vectorResultante (vector <int> &vectorUno, vector <int> &vectorDos, vector <int> &vectorResultado)
{
    
    for (int i = 0; i < vectorUno.size(); i ++)
    {
        int resultado = 0;    
        resultado += vectorUno[i] + vectorDos [i];
        vectorResultado.push_back(resultado);
    }
}

void mostrarVectores (vector <int> vectorUno, vector <int> vectorDos, vector <int> vectorResultante)
{
    cout << "El primer vector es: " << endl;
    for (int i = 0; i < vectorUno.size(); i ++)
    {
        if (i != vectorUno.size() -1 )
            cout << vectorUno[i] << ", ";
        else
            cout << vectorUno [i] << endl;
    }

    cout << "El segundo vector: " << "\n";
    for (int i = 0; i < vectorDos.size(); i ++)
    {
        if (i != vectorDos.size() -1)
            cout << vectorDos[i] << ", "; 
        else
            cout << vectorDos[i] << endl;
    }

    cout << "Y la suma de sus vectores es :" << endl;
    for (int i = 0; i < vectorResultante.size(); i ++)
    {
        if (i != vectorResultante.size() -1)
            cout << vectorResultante[i] << ", "; 
        else
            cout << vectorResultante[i] << endl;
    }
}

int main ()
{
    vector <int> vectorUno, vectorDos, vectorTres;
    rellenarVectores(vectorUno, vectorDos);
    vectorResultante(vectorUno, vectorDos, vectorTres);
    mostrarVectores (vectorUno, vectorDos, vectorTres);
}