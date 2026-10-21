// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 30/09/2026

#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

string convertirMayusculas (string mensaje)
{
    string mensajeAux = "";
    for (int i = 0; i < mensaje.size(); i ++)
    {
        if (mensaje[i] >= 65 && mensaje[i] <=90)
        {
            mensaje[i] += 32;
        }
        mensajeAux += mensaje[i];
    }

    return mensajeAux;
}

void censurarMensaje(string &mensaje, const vector<string> &prohibidas)
{
    for (int i = 0; i < prohibidas.size(); i ++)
    {
        int posicion = mensaje.find(prohibidas[i]);

        while (posicion != string::npos)
        {
            mensaje.replace(posicion, prohibidas[i].length(), "***");
            
            posicion = mensaje.find(prohibidas[i], posicion + 3);
        }
    }
}

int main ()
{
    SetConsoleOutputCP(65001);
    string mensaje;
    vector <string> prohibidas = {"noob", "manco", "gay", "inutil", "rata"};
    cout << "Ingrese el mensaje del jugador: " << endl;
    getline(cin, mensaje);

    cout << "Antes de verificar palabras prohibidas: " << mensaje << endl;;

    mensaje = convertirMayusculas (mensaje);
    censurarMensaje(mensaje, prohibidas);

    cout << "Después de verificar palabras prohibidas: " << mensaje << endl;
}