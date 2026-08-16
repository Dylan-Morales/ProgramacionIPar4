// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 16/08/2026

/*Dado un número entero positivo N de cualquier cantidad de dígitos,
imprimir una cuadrícula de tamaño d x d por cada dígito d del número*/

#include <iostream>

using namespace std; 

int main ()
{
    int numero; 

    cout << "Ingrese un numero positivo " << endl; 
    cin >> numero;

    while (numero < 0)
    {
        cout << "ERROR. Ingrese un numero positivo " << endl; 
        cin >> numero;
    }

    //INVERTRIMOS EL NUMERO, PARA IR EN ORDEN DE IZQUIRDA A DERECHA

    int nuevoNumero = 0;
    
    while (numero > 0)
    {
        int contador = 0;
        int digito = numero % 10; 

        contador += 1;
        numero = numero / 10;

        nuevoNumero = nuevoNumero * 10 + digito;
    }

    while (nuevoNumero > 0)
    {
        int digitoDos = nuevoNumero % 10;

        nuevoNumero = nuevoNumero /10;
        
        for (int filas = 0; filas < digitoDos; filas++ )
        {
            for (int columnas = 0; columnas < digitoDos; columnas++)
            {
                cout << digitoDos; 
            }

            cout << endl;
        }
    }

    return 0;
}