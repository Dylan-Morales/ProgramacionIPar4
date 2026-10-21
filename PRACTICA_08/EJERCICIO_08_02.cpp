// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 30/09/2026

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

bool comprobarContrasenia (string contrasenia)
{
    int tamanio = contrasenia.size();
    int contadorMayuscula = 0, contadorMinuscula = 0, contadorNumero = 0, contadorCaracterEspecial = 0;
    if (tamanio >= 8)
    {
        for (int i = 0; i < contrasenia.size(); i ++)
        {
            if (contrasenia[i] >= 65 && contrasenia[i] <= 90)
                contadorMayuscula += 1;
            
            if (contrasenia[i] >= 97 && contrasenia[i] <= 122)
                contadorMinuscula += 1;
            if (contrasenia[i] >= 48 && contrasenia[i] <= 57)
                contadorNumero += 1;
            if ((contrasenia[i] >= 32 && contrasenia[i] <= 47) || (contrasenia[i] >= 58 && contrasenia[i] <= 64) || (contrasenia[i] >= 91 && contrasenia[i] <= 96) || (contrasenia[i] >= 123 && contrasenia[i] <= 126))
                contadorCaracterEspecial += 1;
        }
    }
    else
        return false;
    if (contadorMayuscula > 0 && contadorMinuscula > 0 && contadorNumero > 0 && contadorCaracterEspecial > 0)
        return true;
    else
        return false;
}


int main ()
{
    SetConsoleOutputCP(65001);
    string contrasenia;
    bool valorBooleano;
    cout << "Ingrese su contraseña: " << endl;
    getline(cin, contrasenia);

    valorBooleano = comprobarContrasenia(contrasenia);
    if (valorBooleano == true)
        cout << "La contraseña es válida " << endl;
    else
        cout << "La contraseña es inválida " << endl;
}