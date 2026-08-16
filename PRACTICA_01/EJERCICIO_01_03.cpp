// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 16/08/2026

/*Realice un programa que lea de la entrada estándar los siguientes datos de
una persona:
a. Edad: dato de tipo entero.
b. Sexo: dato de tipo carácter.
c. Altura en metros: dato de tipo real. */

#include <iostream>

using namespace  std; 

int main ()
{
    int edad; 
    char sexo [10];
    float altura; 

    cout << "Ingrese su edad " << endl; 
    cin >> edad;

    while (edad<0)
    {
        cout << "Ingrese una edad valida " << endl; 
        cin >> edad; 
    }

    cout << "Ingrese su sexo " << endl; 
    cin >> sexo;

    cout << "Ingrese su altura (Metros) " << endl; 
    cin >> altura;

    while (altura<=0)
    {
        cout << "Ingrese una altura valida " << endl; 
        cin >> altura; 
    }

    cout << "Su edad es de: " << edad << " Anios " << endl; 
    cout << "Su sexo es: " << sexo << endl; 
    cout << "Su altura es de: " << altura << " Metros " << endl; 

    return 0;
}