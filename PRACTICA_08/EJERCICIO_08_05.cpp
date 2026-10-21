// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 30/09/2026

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void separarPartes (string direccion)
{
    int posicionProtocolo = direccion.find("://");
    if (posicionProtocolo != string::npos)
    {
        string protocolo = direccion.substr(0, posicionProtocolo);
        string sinProtocolo = direccion.substr(posicionProtocolo+3);
        int posicionRuta = sinProtocolo.find("/");
        if (posicionRuta != string::npos)
        {
            string dominio = sinProtocolo.substr(0, posicionRuta);
            string ruta = sinProtocolo.substr(posicionRuta+1);

            cout << "El protocolo de la ruta es : " << protocolo << endl;
            cout << "El dominio de la URL es: " << dominio << endl;
            cout << "La ruta de la URL es: " << ruta << endl;
        }
        else
            cout << "URL INVÁLIDA " << endl;
    }
    else
            cout << "URL INVÁLIDA " << endl;
}


int main ()
{
    SetConsoleOutputCP(65001);
    system("cls");
    string URL;
    cout << "Ingrese una URL válida ";
    getline(cin, URL);
    separarPartes(URL);
}