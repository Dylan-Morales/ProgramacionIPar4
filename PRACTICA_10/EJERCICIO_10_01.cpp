// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 14/10/2026

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

int numeroAleatorio(int minimo, int maximo)
{
    return (rand() % (maximo - minimo + 1) + minimo);
}

void generarNombresCompletos(vector<string> nombres, vector<string> apellidos, int cantidadNombres)
{
    for(int indice = 0; indice < cantidadNombres; indice++)
    {
        int indiceAleatorioNombre = numeroAleatorio(0, nombres.size() - 1);
        int indiceAleatorioApellido = numeroAleatorio(0, apellidos.size() - 1);
        
        cout << indice + 1 << ". " << nombres[indiceAleatorioNombre] << " " << apellidos[indiceAleatorioApellido] << endl;
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    
    vector<string> nombres = {"Dylan", "Melissa", "Yurem", "Adrian", "Soria", "Carlos", "Lucía", "Mateo", "Valentina", "Andrés"};
    vector<string> apellidos = {"Pérez", "Gómez", "Morales", "Su", "Mamani", "Quispe", "Flores", "Rojas", "Condori", "Vargas"};
    
    int cantidadNombres = 0;
    
    cout << "Ingrese cuántos nombres completos quiere generar: " << endl;
    cin >> cantidadNombres;
    
    while(cantidadNombres < 1)
    {
        cout << "Ingrese un valor mayor a 0: " << endl;
        cin >> cantidadNombres;
    }
    
    cout << "\nNombres completos generados:" << endl;
    generarNombresCompletos(nombres, apellidos, cantidadNombres);
    
    return 0;
}