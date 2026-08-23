// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ingeniería de sistemas
// Fecha creación: 23/08/2026

/*Realice un programa que solicite al usuario que piense un número entero
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese
mismo rango [1-100], e indicarle al usuario si el número que digito es menor
o mayor al número aleatorio, así hasta que lo adivine. Y por ultimo
mostrarle el número de intentos que le llevo.*/

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    int numero;
    int max = 100;
    int min = 1;
    int numeroAleatorio = (rand() % (max - min + 1)) + min;
    int intentos = 1; 

    cout << "Adivine el número generado aleatoriamente del 1 al 100: ";
    cin >> numero;
    while (numero < 1 || numero > 100)
    {
        cout << "ERROR. Adivine el número generado aleatoriamente del 1 al 100: ";
        cin >> numero;
    }
    
    while (numero != numeroAleatorio)
    {
        if (numero > numeroAleatorio)
        {
            cout << "El número aleatorio es menor al número que ingresó" << endl;
            cin >> numero;
        }
        if (numero < numeroAleatorio)
        {
            cout << "El número aleatorio es mayor al número que ingresó" << endl;
            cin >> numero;
        }
        intentos += 1;
    }
    cout << "FELICIDADES, adivinó el número correcto " << endl;
    cout << "Le tomo: " << intentos << " Intentos ";

    return 0;
}