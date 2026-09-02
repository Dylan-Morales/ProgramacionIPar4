// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sistemas
// Fecha creación: 01/09/26

/*Cálculo de Área Geométrica: Desarrolle una función que reciba la base y la altura
de un triángulo y devuelva su área (Area= (base x altura) / 2).*/

#include <iostream>
#include <windows.h>

using namespace std;

float areaTriangulo (float base, float altura)
{
    float area = base * altura / 2;
    return area;
}

int main ()
{
    SetConsoleOutputCP(65001);
    float area, base, altura;

    cout << "Ingrese la base del triángulo " << endl;
    cin >> base;
    while (base < 1)
    {
        cout << "Ingrese una base mayor a 0" << endl;
        cin >> base;
    }

    cout << "Ingrese la altura del triángulo " << endl;
    cin >> altura;

    while (altura < 1)
    {
        cout << "Ingrese una altura mayor a 0" << endl;
        cin >> altura;
    }

    cout << "El área de su tríangulo es: " << areaTriangulo(base, altura) << endl;

    return 0;
}