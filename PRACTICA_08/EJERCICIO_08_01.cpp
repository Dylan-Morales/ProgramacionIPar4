// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 30/09/2026

#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <vector>


using namespace std;

int numeroAleatorio (int max, int min)
{
    return (rand()%(max - min +1)) + min;
}

void imprimirNombreAleatorio (vector <string> vecNombres, vector <string> vecApellidos, vector <string> vecEdad, int N)
{
    for (int i = 0; i < N; i++)
    {   
        int sacarNumeroNombre = numeroAleatorio(9, 0);
        int sacarNumeroApellido = numeroAleatorio(9, 0);
        int sacarNumeroEdad = numeroAleatorio(9, 0);
        string nombreAleatorio = vecNombres[sacarNumeroNombre];
        string apellidoAleatorio = vecApellidos[sacarNumeroApellido];
        string edadAleatoria = vecEdad[sacarNumeroEdad];
        cout << "Nombre " << i+1 << ": \n" << nombreAleatorio << endl;
        cout << "Apellido " << i+1 << ": \n" << apellidoAleatorio << endl;
        cout << "Edad " << i+1 << ": \n" << edadAleatoria << " Años" << endl;
        cout << "-------------------------------------------------" << endl;
    }
}

int main ()
{
    vector <string> nombres = {"Dylan", "Ariel", "Willy", "Adrian", "Luis", "Luna", "Yurem", "José", "Cristhian", "Fabian"};
    vector <string> apellidos = {"Morales", "Su", "Onostre", "Mendoza", "Alvarez", "Cabrera", "Callisaya", "Pardo", "Poma", "Quiroga"};
    vector <string> edad = {"18", "5", "20", "90", "19", "45", "7", "31", "55", "10" };
    SetConsoleOutputCP(65001);
    system("cls");
    srand(time(0));
    int numeroDeCiclos;
    cout << "Ingrese cuántas veces quiere que se gener un nombre aleatorio, con un apellido aleatorio y una edad aleatoria " << endl;
    cin >> numeroDeCiclos;

    while (numeroDeCiclos < 1)
    {
        cout << "ERROR. Ingrese un valor mayor a 0" << endl;
        cin >> numeroDeCiclos;
    }

    imprimirNombreAleatorio(nombres, apellidos, edad, numeroDeCiclos);
    return 0;

}