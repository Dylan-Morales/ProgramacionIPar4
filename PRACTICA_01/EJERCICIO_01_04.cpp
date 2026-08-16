// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 16/08/2026

/* La calificación final de un estudiante es el promedio de tres notas: la nota
de prácticas que cuenta un 30% del total, la nota teórica que cuenta un
60% y la nota de participación que cuenta el 10% restante. Escriba un
programa que lea las tres notas del alumno y escriba su nota final. */

#include <iostream>

using namespace std; 

int main ()
{ 
    float practicas, teorica, participacion, total; 

    cout << "Ingrese las notas de practicas del estudiante " << endl;
    cin >> practicas;

    while (practicas<0 or practicas>100)
    {
        cout << "Ingrese notas validas " << endl;
        cin >> practicas;
    }

    cout << "Ingrese las nota teorica del estudiante " << endl;
    cin >> teorica;

    while (teorica<0 or teorica>100)
    {
        cout << "Ingrese notas validas " << endl;
        cin >> teorica;
    }

    cout << "Ingrese las notas de participacion del estudiante " << endl;
    cin >> participacion; 

    while (participacion<0 or participacion>100)
    {
        cout << "Ingrese notas validas " << endl;
        cin >> participacion;
    }

    total = practicas * 0.3 + teorica * 0.6 + participacion * 0.1; 

    cout << "La nota final del estudiante es de: " << total <<endl;

    return 0; 
}