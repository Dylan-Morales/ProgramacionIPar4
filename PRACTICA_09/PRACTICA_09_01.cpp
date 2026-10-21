// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 07/10/2026

#include <iostream>
#include <windows.h>

using namespace std;

void rellenarMatriz(int  m[100][100], int n)
{
    int numero;
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            cout << "Ingrese el elemento de la fila: " << i + 1 << " y de la columna: " << j + 1 << endl;
            cin >> numero;
            m[i][j] = numero;
        }
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

void cambioFilas (int m[100][100], int n)
{
    int filaAux [1][100]; 
    for (int i = 0; i < n; i ++)
    {
        if (i == n - 1)
        {
            for (int j = 0; j < n; j ++)
            {
                filaAux[0][j] = m[i][j];
                m[i][j] = m[0][j];
                m[0][j] = filaAux[0][j];
            }
        }
    }
}

int main () 
{
    SetConsoleOutputCP(65001);
    system("cls");
    int n;
    int matriz[100][100];


    cout << "Ingrese cuántas filas y columnas tendrá su matriz " << endl;
    cin >> n;

    while (n < 1)
    {
        cout << "Ingrese un número mayor a 0" << endl;
        cin >> n;
    }

    rellenarMatriz(matriz, n);
    cout << "La matriz antes de intercambiar la fila 1 por la última fila: " << endl;
    mostrarMatriz(matriz, n);
    cambioFilas(matriz, n);
    cout << "La matriz después de intercambiar la fila 1 por la última fila: " << endl;
    mostrarMatriz(matriz, n);
}