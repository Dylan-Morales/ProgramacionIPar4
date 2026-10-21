// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 30/09/2026

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

string eliminarEspacios (string tarjetaDeCredito) // FUNCION POR SI EL USUARIO PONE ESPACIOS EN EL STRING
{
    string tarjetaAux = "";
    for (int i = 0; i < tarjetaDeCredito.size(); i ++)
    {
        if (tarjetaDeCredito[i] != ' ')
            tarjetaAux += tarjetaDeCredito[i];
    }
    return tarjetaAux;
}

void verificarTarjeta (string tarjetaDeCredito)
{
    int tamanio_Tarjeta = tarjetaDeCredito.size();
    int numAux;
    int suma = 0;
    bool duplicar = false;
    if (tamanio_Tarjeta == 16)
    {
        for (int i = tarjetaDeCredito.size() - 1 ; i >= 0; i --)
        {
            numAux = tarjetaDeCredito[i] - '0';
            if (duplicar == true)
            {
                numAux *= 2;

                if (numAux > 9)
                    numAux -= 9;
            }
        
            suma += numAux;
            duplicar = !duplicar;
        }
    }
    else
        cout << "La tarjeta de crédito es inválida " << endl;

    if (suma % 10 == 0)
        cout << "La tarjeta de crédito es válida " << endl; 
    else   
        cout << "La tarjeta de crédito es inválida " << endl;
}

int main ()
{
    SetConsoleOutputCP(65001);
    string tarjetaDeCredito;

    cout << "Ingrese una tarjeta de credito de 16 dígitos: " << endl;
    getline(cin, tarjetaDeCredito);

    tarjetaDeCredito = eliminarEspacios(tarjetaDeCredito);
    verificarTarjeta (tarjetaDeCredito);
}