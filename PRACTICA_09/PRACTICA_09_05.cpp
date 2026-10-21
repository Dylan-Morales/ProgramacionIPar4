// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 07/10/2026

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void generarMatriz (int m[5][5])
{
    for (int i = 0; i < 5; i ++)
    {
        for (int j = 0; j < 5; j ++)
        {
            m[i][j] = 0;
        }
    }
}

void mostrarMatriz (int m[5][5])
{
    char libre = 'L';
    char ocupado = 'O';
    for (int i = 0; i < 5; i ++)
    {
        for (int j = 0; j < 5; j ++)
        {
            if (m[i][j] == 0)
                cout << libre << "\t";
            else
                cout << ocupado << "\t";
        }
        cout << endl;
    }
}

void comprarEntrada (int m[5][5])
{
    int fila, asiento;
    mostrarMatriz(m);
    cout << "Ingrese una fila 1-5";
    cin >> fila;

    while (fila < 1 || fila > 5)
    {
        cout << "Ingrese una fila 1-5";
        cin >> fila;
    }

    cout << "Ingrese un asiento 1-5";
    cin >> asiento;

    while (asiento< 1 || asiento > 5)
    {
        cout << "Ingrese un asiento 1-5";
        cin >> asiento;
    }

    if (m[fila-1][asiento-1] == 0)
    {
        cout << "Compra exitosa " << endl;
        m[fila-1][asiento-1] = 1;
    }
    else
    {
        cout << "ERROR. El asiento está ocupado " << endl;
    }
}

void estadistica (int m[5][5])
{
    float ocupados = 0;
    float libres = 0;
    for (int i = 0; i < 5; i ++)
    {
        for (int j = 0; j < 5; j ++)
        {
            if (m[i][j] == 0)
                libres +=1;
            else
                ocupados +=1;
        }
    }

    cout << "El porcentaje de asientos libres es de: " << (libres/25)*100 << "%" << endl;
    cout << "El porcentaje de asientos ocupados es de: " << (ocupados/25)*100 << "%" << endl;
}

int main ()
{
    int matriz[5][5];
    generarMatriz(matriz);
    int contador = 0;
    int opcion = 0;
    
    while (contador == 0) 
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Mostrar sala\n";
        cout << "2. Comprar entrada\n";
        cout << "3. Ver estadística de la sala\n";
        cout << "4. Cerrar menú \n";
        cout << "Escoja una opcion entre 1 y 4\n" << endl;
        cin >> opcion;
        while (opcion < 1 || opcion > 4)
        {
            cout << "Escoja una opcion entre 1 y 4\n" << endl;
            cin >> opcion;
        }

        switch (opcion) 
        {
            case 1:
                mostrarMatriz(matriz);
                break;
            case 2:
                comprarEntrada(matriz);
                break;
            case 3:
                estadistica(matriz);
                break;
            case 4:
                cout << "----Cerrando programa--- " << endl;
                contador = 1;
                break;
        }
    }
}