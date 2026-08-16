// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 16/08/2026

/*Escriba un programa que pida un número entero positivo N al usuario y
mediante un bucle while, determine e imprima cuántos dígitos tiene dicho
número y la suma de estos*/

#include <iostream>

using namespace std; 

int main ()
{
    int numero; 

    cout << "Ingrese un numero positivo " << endl; 
    cin >> numero; 
    
    while (numero < 0)
    { 
        cout << "Ingrese un numero positivo " << endl; 
        cin >> numero; 
    }


    int suma = 0;
    int contador = 0;
    while (numero > 0)
    {
        int ultimoDigito = numero % 10;
        suma = suma + ultimoDigito; 
        numero = numero / 10;
        contador += 1;
    }

     cout << "Su digito tiene: " << contador << " Digitos. \nY la suma de los digitos de su numero da: " << suma << endl;

     return 0;
}