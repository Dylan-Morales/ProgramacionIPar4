// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 14/10/2026

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

char convertirAMinuscula(char caracter)
{
    if(caracter >= 'A' && caracter <= 'Z')
    {
        return caracter + 32;
    }
    return caracter;
}

void ordenarCaracteresPalabra(string &palabraIngresada)
{
    int totalCaracteres = palabraIngresada.length();
    
    for(int indiceActual = 0; indiceActual < totalCaracteres - 1; indiceActual++)
    {
        for(int indiceSiguiente = 0; indiceSiguiente < totalCaracteres - indiceActual - 1; indiceSiguiente++)
        {
            char caracterActual = convertirAMinuscula(palabraIngresada[indiceSiguiente]);
            char caracterSiguiente = convertirAMinuscula(palabraIngresada[indiceSiguiente + 1]);
            
            if(caracterActual > caracterSiguiente)
            {
                char caracterTemporal = palabraIngresada[indiceSiguiente];
                palabraIngresada[indiceSiguiente] = palabraIngresada[indiceSiguiente + 1];
                palabraIngresada[indiceSiguiente + 1] = caracterTemporal;
            }
        }
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    
    string palabraUsuario;
    
    cout << "Ingrese una sola palabra: " << endl;
    cin >> palabraUsuario;
    
    cout << "\nPalabra original: " << palabraUsuario << endl;
    
    ordenarCaracteresPalabra(palabraUsuario);
    
    cout << "Palabra ordenada alfabéticamente: " << palabraUsuario << endl;
    
    return 0;
}