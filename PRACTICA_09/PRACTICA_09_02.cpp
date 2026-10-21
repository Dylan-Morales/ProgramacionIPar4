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

void generarMatriz (int m[100][100], int n)
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++)
        m [i][j] = numeroAleatorio(1, 10);
    }
}

void mostrarMatriz (int m[100][100], int n)
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            cout << m[i][j] << "\t";
        }
        cout <<  endl;
    }
}

int sumaUltimaColumna (int m [100][100], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i ++)
    {
        suma += m[i][n-1];
    }
    return suma;
}

int productoUltimaFila (int m[100][100], int n)
{
    int producto = 1;
    for (int j = 0; j < n; j ++)
    {
        producto *= m[n-1][j];
    }

    return producto;
}

int mayor (int m[100][100], int n, int &posFila, int &posColumna)
{
    int mayor = 0;
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            if (m[i][j] > mayor)
            {
                mayor = m[i][j];
                posFila = i+1;
                posColumna = j+1;
            }
        }
    }
    return mayor;
}

int menor (int m[100][100], int n, int &posFila, int &posColumna)
{
    int menor = m[0][0];
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            if (m[i][j] < menor)
            {
                menor = m[i][j];
                posFila = i+1;
                posColumna = j+1;
            }

        }
    }
    return menor;
}

float promedio (int m[100][100], int n)
{
    float promedio = 0;
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            promedio += m[i][j];
        }
    }
    promedio = (promedio)/(n*n);

    return promedio;
}

int main ()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    int n;
    int matriz[100][100];
    int posFilaMayor, posColumnaMayor, posFilaMenor, posColumnaMenor;

    cout << "Ingrese cuántas filas y columnas tendrá su matriz " << endl;
    cin >> n;

    while (n < 1)
    {
        cout << "Ingrese un número mayor a 0" << endl;
        cin >> n;
    }

    generarMatriz(matriz, n);

    cout << "La matriz es :" << endl;
    mostrarMatriz(matriz, n);
    cout << "La suma de la útlima columna de su matriz es: " << sumaUltimaColumna(matriz, n) << endl;
    cout << "El producto total de la última fila de su matriz es: " << productoUltimaFila(matriz, n) << endl;
    cout << "El mayor número encontrado en su matriz es: " << mayor(matriz, n, posFilaMayor, posColumnaMayor) << ". En la fila: " << posFilaMayor << ", y en la columna: " << posColumnaMayor << endl;
    cout << "El menor número encontrado en su matriz es: " << menor(matriz, n, posFilaMenor, posColumnaMenor) << ". En la fila: " << posFilaMenor << ", y en la columna: " << posColumnaMenor << endl;
    cout << "El promedio de toda su matriz es de: " << promedio(matriz, n) << endl;
}