#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

void pedirNumeros (vector <int> &vectorNumeros)
{
    int numero = 0;
    for (int i = 0; i < 100; i ++)
    {
        cout << "Ingrese el número " << i +1 << ":";
        cin >> numero;
        if (numero >= 0)
        {
            vectorNumeros.push_back(numero);
        }

        else
        {
            cout << "Usted ingresó un número negativo " << endl;
            i += 100;
        }
    }
}

void mostrarVector (vector <int> vectorNumeros)
{

    cout << "El vector que usted construyó hasta ingresar un número negativo fue de: " << endl;
    for (int i = 0; i < vectorNumeros.size(); i ++)
    {
        if (i != vectorNumeros.size() -1)
            cout << vectorNumeros[i] << ", ";
        else
            cout << vectorNumeros[i] << endl;
    }
}

int main ()
{
    SetConsoleOutputCP(65001);
    vector <int> vectorNumeros;
    pedirNumeros(vectorNumeros);
    mostrarVector(vectorNumeros);
}
