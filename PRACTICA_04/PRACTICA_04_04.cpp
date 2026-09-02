// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sistemas
// Fecha creación: 01/09/26

/* Conversión de Divisas: Escriba una función que convierta un monto dado en
bolivianos a dólares, recibiendo como parámetros la cantidad y el tipo de cambio
oficial y paralelo.*/

#include <iostream>
#include <windows.h>

using namespace std;

void cambioADolar (float cantidadBolivianos, float dolarOficial, float dolarParalelo)
{
    float cambioOficial = cantidadBolivianos / dolarOficial;
    float cambioParalelo = cantidadBolivianos / dolarParalelo;

    cout << "Monto en dólares (Oficial): $" << cambioOficial << endl;
    cout << "Monto en dólares (Paralelo): $" << cambioParalelo << endl;
}

int main ()
{
    SetConsoleOutputCP(65001);
    float cantidadBolivianos, dolarOficial, dolarParalelo;

    cout << "Ingrese la cantidad de bolivianos que quiere convertir a dólares oficiales y paralelos " << endl;
    cin >> cantidadBolivianos;

    while (cantidadBolivianos < 1)
    {
        cout << "Ingrese cantidad mayor a 0 " << endl;
        cin >> cantidadBolivianos;
    }

    cout << "Ingrese el precio del dolar oficial publicado por el bcb " << endl;
    cin >> dolarOficial;

    while (dolarOficial < 1)
    {
        cout << "Ingrese cantidad mayor a 0 " << endl;
        cin >> dolarOficial;
    }

    cout << "Ingrese el precio del dolar paralelo en plataformas como binance " << endl;
    cin >> dolarParalelo;

    while (dolarParalelo < 1)
    {
        cout << "Ingrese cantidad mayor a 0 " << endl;
        cin >> dolarParalelo;
    }

    cambioADolar(cantidadBolivianos, dolarOficial, dolarParalelo);

    return 0;
}