// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sistemas
// Fecha creación: 01/09/26

/*Volumen de un Cilindro: Implemente una función que reciba el radio y la altura de
un cilindro y retorne su volumen (V=π * r * r * h). Utilice una constante para el valor
de π.*/

#include <iostream>
#include <windows.h>

using namespace std;

float volumenCilindro (float radio, float altura)
{
    float volumen; 
    const float pi = 3.1416;

    volumen = pi * radio * radio *  altura;
    return volumen; 
}

int main ()
{   
    SetConsoleOutputCP(65001);
    float radio, altura;
    cout << "Ingrese el radio del cilindro " << endl;
    cin >> radio;
    while (radio < 1)
    {
        cout << "Ingrese un radio mayor a 0" << endl;
        cin >> radio;
    }

    cout << "Ingrese la altura del cilindro " << endl;
    cin >> altura;

    while (altura < 1)
    {
        cout << "Ingrese una altura mayor a 0" << endl;
        cin >> altura;
    }

    cout << "El volúmen de su cilindro es de: " << volumenCilindro(radio, altura) << endl;

    return 0;
}