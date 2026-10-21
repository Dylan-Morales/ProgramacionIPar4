// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 30/09/2026

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

string eliminarEspacios (string cadena)
{
    string cadAux = "";
    for (int i = 0; i < cadena.size(); i ++)
    {
        if (cadena[i] != ' ') 
        {
            cadAux += cadena[i];
        } 
        else 
        {
            if (cadAux.size() > 0 && cadAux[cadAux.size() - 1] != ' ') 
                cadAux += cadena[i];
        }
    }
    return cadAux;
}


int main ()
{
    SetConsoleOutputCP(65001);
    string cadena;
    getline(cin, cadena);

    cadena = eliminarEspacios(cadena);
    cout << cadena;
}