// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 07/10/2026

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int numeroAleatorio (int min, int max)
{
    return (rand () % (max - min + 1) + min);
}

void generarMatriz (int m[100][100], int n, int x)
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < x; j ++)
        m [i][j] = numeroAleatorio(1, 10);
    }
}

void mostrarMatriz (int m[100][100], int n, int x)
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < x; j ++)
        {
            cout << m[i][j] << "\t";
        }
        cout <<  endl;
    }
}

void puntoSilla (int m[100][100], int n, int x)
{
    int posColumna = 0;
    int posFila = 0;
    bool encontrado = false;
    for (int i = 0; i < n; i ++)
    {
        bool mayorColumna = true;
        int menorFila = 11; 

        for (int j = 0; j < x; j ++)
        {
            if (m[i][j] < menorFila)
            {
                menorFila = m[i][j];
                posColumna = j;
            }
        }

        for (int fila = 0; fila < n; fila ++)
        {
            if(m[fila][posColumna] > menorFila)
                mayorColumna = false;
        }

        if(mayorColumna == true)
        {
            cout << "Punto de silla encontrado en la fila: " << i+1 << ", y en la columna: " << posColumna + 1 << endl;
            encontrado = true;
        }



    }
    if(encontrado == false)
        cout << "No se encontró ningún punto de silla " << endl;
}

int main () 
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    int matriz [100][100];
    int filas, columnas;

    cout << "Ingrese de cúantas filas quiere su matriz: " << endl;
    cin >> filas;
    
    while(filas < 1)
    {
       cout << "Ingrese un valor mayor a 0: " << endl;
        cin >> filas;
    }

    cout << "Ingrese de cúantas columnas quiere su matriz: " << endl;
    cin >> columnas;

    while(columnas < 1)
    {
       cout << "Ingrese un valor mayor a 0: " << endl;
        cin >> columnas;
    }

    cout << "La matriz generada es: " << endl;
    generarMatriz(matriz, filas, columnas);
    mostrarMatriz(matriz, filas, columnas);
    puntoSilla(matriz, filas, columnas);
}



