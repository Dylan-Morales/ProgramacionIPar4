// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sistemas
// Fecha creación: 01/09/26

/*Contador de Dígitos: Desarrolle una función que reciba un número entero positivo
y devuelva la cantidad de dígitos que lo componen (utilizando divisiones
sucesivas entre 10)*/

#include <iostream>
#include <windows.h>

using namespace std;

int contadorDeDigitos (int numero)
{
    if (numero == 0) // caso especial 
    return 1;

    int contador = 0; 
    while (numero > 0)
    {
        contador += 1;
        numero = numero / 10;
    }

    return contador;
}

int main ()
{
    SetConsoleOutputCP(65001);
    int numero, digitos;

    cout << "Ingrese un número entero positivo para saber cuántos dígitos tiene " << endl;
    cin >> numero;

    while (numero < 0)
    {
        cout << "Ingrese un número entero positivo para saber cuántos dígitos tiene " << endl;
        cin >> numero;
    }

    digitos = contadorDeDigitos (numero);

    cout << "La cantidad de dígitos de su número es igual a: " << digitos << endl;

    return 0;
}