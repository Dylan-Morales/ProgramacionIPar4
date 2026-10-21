// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 07/10/2026

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int numeroAleatorio(int minimo, int maximo)
{
    return (rand() % (maximo - minimo + 1) + minimo);
}

void generarMatriz(int temperaturas[4][7])
{
    for(int fila = 0; fila < 4; fila++)
    {
        for(int columna = 0; columna < 7; columna++)
        {
            temperaturas[fila][columna] = numeroAleatorio(5, 35);
        }
    }
}

void mostrarMatriz(int temperaturas[4][7])
{
    for(int fila = 0; fila < 4; fila++)
    {
        for(int columna = 0; columna < 7; columna++)
        {
            cout << temperaturas[fila][columna] << "\t";
        }
        cout << endl;
    }
}

void temperaturaMasAlta(int temperaturas[4][7])
{
    int temperaturaMaxima = temperaturas[0][0];
    int semanaEncontrada = 0;
    int diaEncontrado = 0;
    
    for(int fila = 0; fila < 4; fila++)
    {
        for(int columna = 0; columna < 7; columna++)
        {
            if(temperaturas[fila][columna] > temperaturaMaxima)
            {
                temperaturaMaxima = temperaturas[fila][columna];
                semanaEncontrada = fila;
                diaEncontrado = columna;
            }
        }
    }
    
    cout << "La temperatura más alta es: " << temperaturaMaxima << " en la semana " << semanaEncontrada + 1 << " y día " << diaEncontrado + 1 << endl;
}

void promedioSemanas(int temperaturas[4][7])
{
    for(int fila = 0; fila < 4; fila++)
    {
        float sumaTemperaturas = 0;
        
        for(int columna = 0; columna < 7; columna++)
        {
            sumaTemperaturas += temperaturas[fila][columna];
        }
        
        float promedioSemanal = sumaTemperaturas / 7.0;
        cout << "El promedio de temperatura de la semana " << fila + 1 << " es: " << promedioSemanal << endl;
    }
}

void contarDiasAltos(int temperaturas[4][7])
{
    int contadorDias = 0;
    
    for(int fila = 0; fila < 4; fila++)
    {
        for(int columna = 0; columna < 7; columna++)
        {
            if(temperaturas[fila][columna] > 30)
            {
                contadorDias++;
            }
        }
    }
    
    cout << "Cantidad de días que superaron los 30 grados: " << contadorDias << endl;
}

int main()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    int temperaturas[4][7];
    
    generarMatriz(temperaturas);
    
    cout << "La matriz de temperaturas es:" << endl;
    mostrarMatriz(temperaturas);
    cout << endl;
    
    temperaturaMasAlta(temperaturas);
    cout << endl;
    
    promedioSemanas(temperaturas);
    cout << endl;
    
    contarDiasAltos(temperaturas);
    
    return 0;
}