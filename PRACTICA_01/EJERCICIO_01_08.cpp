// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 16/08/2026

/*Realice un programa que solicite al usuario ingresar una nota numérica en
el rango de [0 a 100]. El programa debe repetir la solicitud mediante un
bucle while mientras el usuario ingrese un valor inválido (menor a 0 o mayor
a 100). Una vez ingresada una nota válida, debe mostrar el mensaje: "Nota
registrada correctamente"*/

#include <iostream>

using namespace std; 

int main ()
{
    int nota; 

    cout << "Ingrese una nota entre 0 y 100 " << endl; 
    cin >> nota; 
    
    while (nota < 0 or nota > 100)
    {
        cout << "ERROR. Ingrese una nota entre 0 y 100 " << endl; 
        cin >> nota; 
    }

    cout << "Nota registrada correctamente " << endl; 

    return 0;
}