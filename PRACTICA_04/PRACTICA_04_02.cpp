// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sistemas
// Fecha creación: 01/09/26

/*Determinación de Mayoría: Cree una función que reciba tres números enteros y
devuelva el mayor de ellos. El programa principal debe capturar los tres valores y
mostrar el resultado.*/

#include <iostream>
#include <windows.h>

using namespace std;

int numeroMayor (int numeroUno, int numeroDos, int numeroTres)
{
    int mayor;

    mayor = numeroUno;
    if (mayor < numeroDos)
    mayor = numeroDos;
    if (mayor < numeroTres)
    mayor = numeroTres;

    return mayor;
}

int main ()
{
    SetConsoleOutputCP(65001);
    int numeroUno, numeroDos, numeroTres;

    cout << "Ingrese el primer número" << endl; 
    cin >> numeroUno;
    cout << "Ingrese el segundo número" << endl; 
    cin >> numeroDos;
    cout << "Ingrese el tercer número" << endl; 
    cin >> numeroTres;

    cout << "El mayor número ingresado fue: " << numeroMayor(numeroUno, numeroDos, numeroTres) << endl;

    return 0;
}