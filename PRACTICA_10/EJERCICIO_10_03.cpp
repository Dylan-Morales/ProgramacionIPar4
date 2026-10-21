// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 14/10/2026

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

float numeroAleatorioDecimal(float minimo, float maximo)
{
    int minimoEntero = minimo * 100;
    int maximoEntero = maximo * 100;
    int aleatorioEntero = rand() % (maximoEntero - minimoEntero + 1) + minimoEntero;
    
    return (float)aleatorioEntero / 100.0;
}

void rellenarTiempos(vector<float> &tiempos, int cantidadCorredores)
{
    for(int indice = 0; indice < cantidadCorredores; indice++)
    {
        tiempos.push_back(numeroAleatorioDecimal(10.00, 20.00));
    }
}

void mostrarTiempos(vector<float> tiempos)
{
    for(int indice = 0; indice < tiempos.size(); indice++)
    {
        cout << "Corredor " << indice + 1 << ": " << tiempos[indice] << " segundos" << endl;
    }
}

void ordenarTiemposPorInsercion(vector<float> &tiempos)
{
    int totalElementos = tiempos.size();
    
    for(int indice = 1; indice < totalElementos; indice++)
    {
        float valorActual = tiempos[indice];
        int indicePrevio = indice - 1;
        
        while(indicePrevio >= 0 && tiempos[indicePrevio] > valorActual)
        {
            tiempos[indicePrevio + 1] = tiempos[indicePrevio];
            indicePrevio--;
        }
        
        tiempos[indicePrevio + 1] = valorActual;
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    
    int cantidadCorredores = 0;
    
    cout << "Ingrese la cantidad de corredores: " << endl;
    cin >> cantidadCorredores;
    
    while(cantidadCorredores < 1)
    {
        cout << "Ingrese un valor mayor a 0: " << endl;
        cin >> cantidadCorredores;
    }
    
    vector<float> tiempos;
    
    rellenarTiempos(tiempos, cantidadCorredores);
    
    cout << "\nTiempos registrados antes de ordenar:" << endl;
    mostrarTiempos(tiempos);
    
    ordenarTiemposPorInsercion(tiempos);
    
    cout << "\nTiempos ordenados de menor a mayor (por inserción):" << endl;
    mostrarTiempos(tiempos);
    
    return 0;
}