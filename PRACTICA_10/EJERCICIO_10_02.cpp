// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 14/10/2026

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int numeroAleatorio(int minimo, int maximo)
{
    return (rand() % (maximo - minimo + 1) + minimo);
}

void rellenarPuntuaciones(vector<int> &puntuaciones, int cantidadJugadores)
{
    for(int indice = 0; indice < cantidadJugadores; indice++)
    {
        puntuaciones.push_back(numeroAleatorio(1, 100));
    }
}

void mostrarPuntuaciones(vector<int> puntuaciones)
{
    for(int indice = 0; indice < puntuaciones.size(); indice++)
    {
        cout << "Jugador " << indice + 1 << ": " << puntuaciones[indice] << " puntos" << endl;
    }
}

void ordenarPuntuacionesBurbuja(vector<int> &puntuaciones)
{
    int totalElementos = puntuaciones.size();
    
    for(int pasada = 0; pasada < totalElementos - 1; pasada++)
    {
        for(int indice = 0; indice < totalElementos - pasada - 1; indice++)
        {
            if(puntuaciones[indice] < puntuaciones[indice + 1])
            {
                int auxiliar = puntuaciones[indice];
                puntuaciones[indice] = puntuaciones[indice + 1];
                puntuaciones[indice + 1] = auxiliar;
            }
        }
    }
}

void mostrarPodio(vector<int> puntuaciones)
{
    cout << "\n--- PODIO DE GANADORES ---" << endl;
    
    int limitePodio = 3;
    
    if(puntuaciones.size() < 3)
    {
        limitePodio = puntuaciones.size();
    }
    
    for(int indice = 0; indice < limitePodio; indice++)
    {
        cout << "Puesto " << indice + 1 << ": " << puntuaciones[indice] << " puntos" << endl;
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    
    int cantidadJugadores = 0;
    
    cout << "Ingrese la cantidad de jugadores en el torneo: " << endl;
    cin >> cantidadJugadores;
    
    while(cantidadJugadores < 1)
    {
        cout << "Ingrese un valor mayor a 0: " << endl;
        cin >> cantidadJugadores;
    }
    
    vector<int> puntuaciones;
    
    rellenarPuntuaciones(puntuaciones, cantidadJugadores);
    
    cout << "\nPuntuaciones registradas:" << endl;
    mostrarPuntuaciones(puntuaciones);
    
    ordenarPuntuacionesBurbuja(puntuaciones);
    
    mostrarPodio(puntuaciones);
    
    return 0;
}