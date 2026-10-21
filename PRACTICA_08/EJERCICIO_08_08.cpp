// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 30/09/2026

#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

string eliminarEspacios (string cadena) // eliminamos espacios por si acaso :VV
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

void separarPalabras (string &cadena, vector <string> &palabras)
{
    string cadAux = "";
    for (int i = 0; i < cadena.size(); i ++)
    {
        if (cadena[i] != ' ')
            cadAux += cadena[i];
        if (cadena[i] == ' ' || i == cadena.size() -1)
        {
            palabras.push_back(cadAux);
            cadAux = "";
        }
    }
}


bool compararPalabras (vector <string> &palabrasUno, vector <string> &palabrasDos, vector <string> &repetidos)
{
    bool booleano = false;
    for (int i = 0; i < palabrasUno.size(); i ++)
    {
        int contador = 0;
        for (int j = 0; j < palabrasDos.size(); j ++)
        {
            if (palabrasUno[i] == palabrasDos[j])  
            {
                for (int k = 0; k < repetidos.size(); k ++)
                {
                    if (palabrasUno[i] == repetidos[k])
                        contador += 1;
                }
                if (contador == 0)
                    repetidos.push_back(palabrasUno[i]);
            }
        }
    }
    if (repetidos.size() > 3)
        booleano = true;

    return (booleano);
}

int main ()
{
    SetConsoleOutputCP(65001);
    system("cls");
    string cadenaUno, cadenaDos;
    vector <string> palabrasUno, palabrasDos, repetidos;
    bool comparador;

    cout << "Ingrese la oración del estudiante 1: " << endl;
    getline(cin, cadenaUno);
    cout << "Ingrese la oración del estudiante 2: " << endl;
    getline(cin, cadenaDos);

    cadenaUno = eliminarEspacios(cadenaUno);
    cadenaDos = eliminarEspacios(cadenaDos);
    separarPalabras(cadenaUno, palabrasUno);
    separarPalabras(cadenaDos, palabrasDos);
    comparador = compararPalabras(palabrasUno, palabrasDos, repetidos);
    if(comparador == true)
        cout << "Los estudiantes posiblemente estén haciendo plagio " << endl;
    else
        cout << "Los estudiantes posiblemente no estén haciendo plagio " << endl;

    if(repetidos.size() > 0)
    {
        cout << "Y tienen coincidencias en las siguientes palabras: " << endl;
        for (int i = 0; i < repetidos.size(); i ++)
        {
            if (i != repetidos.size() - 1)
                cout << repetidos[i] << ", ";
            else
                cout << repetidos[i];
        }
    }
}