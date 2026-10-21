// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 07/10/2026

#include <iostream>
#include <windows.h>

using namespace std;

void generarMatriz (int m[100][100], int n)
{
    int contador = 0;
    for (int i = 0; i < n; i ++)
    {
        int contadorDos = contador;
        for (int j = 0; j < n; j ++)
        {
            contadorDos += 1;
            m[i][j] = contadorDos;
        }
        contador += 2;
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

    generarMatriz(matriz, n);
    cout << "La matriz generada es de: " << endl;
    mostrarMatriz(matriz, n);
}