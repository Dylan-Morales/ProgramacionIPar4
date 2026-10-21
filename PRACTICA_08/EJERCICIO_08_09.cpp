// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 30/09/2026

#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

string convertirMayusculas (string cad)
{
    string cadAux = "";
    for (int i = 0; i < cad.size(); i ++)
    {
        if (cad[i] >= 65 && cad[i] <=90)
        {
            cad[i] += 32;
        }
        cadAux += cad[i];
    }

    return cadAux;
}

void mostrarContactos (vector <string> contactos)
{
    for (int i = 0; i < contactos.size(); i ++)
    {
        if (i != contactos.size()-1)
            cout << contactos[i] << ", ";
        else
            cout << contactos[i] << endl;
    }
}

void buscarContactos (string &cadena, vector <string> &contactos, vector <string> &coincidencias)
{
    string cadAux = "";
    for (int i = 0; i < contactos.size(); i ++)
    {
        cadAux = "";
        for (int j = 0; j < 3; j ++)
        {   
            cadAux += contactos[i][j];
            cadAux = convertirMayusculas(cadAux);
            if (cadena == cadAux)
                coincidencias.push_back(contactos[i]);
        }
    }
}



int main ()
{
    SetConsoleOutputCP(65001);
    system("cls");
    string cadena;
    vector <string> contactos = {"Maria", "Marco", "Juan", "Marta", "Marcos", "Martian", "Soria", "Onostre", "Morales"};
    vector <string> coincidencias;
    cout << "Ingrese un prefijo de 3 letras para buscar en sus contactos: "<< endl;
    getline(cin, cadena);

    while (cadena.size() != 3)
    {
        cout << "Ingrese un prefijo de 3 letras para buscar en sus contactos: "<< endl;
        getline(cin, cadena);
    }

    cout << "Prefijo de búsqueda: " << cadena << endl;
    cadena = convertirMayusculas(cadena);
    buscarContactos (cadena, contactos, coincidencias);
    cout << "Sus contactos son: ";
    mostrarContactos(contactos);
    if (coincidencias.size() > 0)
    {
        cout << "Las coincidencias que se encontraron fueron: ";
        mostrarContactos(coincidencias);
    }
    else
        cout << "No existen coincidencias ";
}