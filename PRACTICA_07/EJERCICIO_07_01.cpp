#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <vector>

using namespace std;

int numeroAleatorio (int min, int max)
{
    return (rand () % (max - min + 1) + min);
}

void voltajesPrecisionDoble (vector <double> &voltajeDoble)
{
    for (int i = 0; i < 100; i ++)
    {   
        double voltajeAleatorio = numeroAleatorio(2000, 22000);
        voltajeAleatorio = voltajeAleatorio / 100;
        voltajeDoble.push_back(voltajeAleatorio);
    }
}

void temperaturasPrecisionDoble (vector <double> &temperaturaDoble)
{
    for (int i = 0; i < 50; i ++)
    {
        double temperaturaAleatoria = numeroAleatorio(0, 10000);
        temperaturaAleatoria = temperaturaAleatoria / 100;
        temperaturaDoble.push_back(temperaturaAleatoria);    
    }
}

void caracteresAlfanumericos (vector <char> &caractereAlfanumerico)
{
    for (int i = 0; i < 30; i ++)
    {   
        int seleccionarAlfaNumerico = numeroAleatorio(0, 2);
        int alfaNumerico; 
        if (seleccionarAlfaNumerico == 0)
            alfaNumerico = numeroAleatorio (48, 57);
        if (seleccionarAlfaNumerico == 1)
            alfaNumerico = numeroAleatorio (65, 90);
        if (seleccionarAlfaNumerico == 2)
            alfaNumerico = numeroAleatorio (97, 122);
        
        caractereAlfanumerico.push_back(alfaNumerico);
    }
}

void listaAnios (vector <int> &listaDeAnios)
{
    for (int i = 0; i < 100; i ++)
    {
        int anio = numeroAleatorio (1990, 2025);
        listaDeAnios.push_back(anio);
    }
}

void listaVelocidades (vector <double> &listaDeVelocidades)
{
    for (int i = 0; i < 32; i ++)
    {
        double velocidad = numeroAleatorio (1000, 30000);
        velocidad = velocidad / 100;
        listaDeVelocidades.push_back(velocidad);
    }
}

void distanciasDePrecisionDoble (vector <double> &distanciaDoble)
{
    for (int i = 0; i < 1000; i ++)
    {
        double distancia = numeroAleatorio (100, 1000);
        distancia = distancia / 100;
        distanciaDoble.push_back(distancia);
    }
}

void mostrarVectordouble (vector <double> vectordouble)
{
    for (int i = 0; i < vectordouble.size(); i ++)
    {
        cout << vectordouble[i] << "\t";
    }
}

void mostrarVectorChar (vector <char> vectorChar)
{
    for (int i = 0; i < vectorChar.size(); i ++)
    {
        cout << vectorChar[i] << "\t";
    }
}

void mostrarVectorInt (vector <int> vectorInt)
{
    for (int i = 0; i < vectorInt.size(); i ++)
    {
        cout << vectorInt[i] << "\t";
    }
}


int main ()
{
    srand(time(0));
    SetConsoleOutputCP(65001);
    vector <double> voltajeDoble, temperaturaDoble, velocidadDoble, distanciaDoble;
    vector <char> caracterAlfanumerico;
    vector <int> anios;
    system("cls");

    voltajesPrecisionDoble(voltajeDoble);
    temperaturasPrecisionDoble(temperaturaDoble);
    caracteresAlfanumericos(caracterAlfanumerico);
    listaAnios(anios);
    listaVelocidades(velocidadDoble);
    distanciasDePrecisionDoble(distanciaDoble);

    cout << "Lista de voltajes de precisión doble: " << endl;
    mostrarVectordouble(voltajeDoble);
    cout << "\n Lista de temperaturas de precisión doble: " << endl;
    mostrarVectordouble(temperaturaDoble);
    cout << "\n Lista de caracteres alfanuméricos: " << endl;
    mostrarVectorChar(caracterAlfanumerico);
    cout << "\n Lista de años: " << endl;
    mostrarVectorInt(anios);
    cout << "\n Lista de velocidades de precisión doble: " << endl;
    mostrarVectordouble(velocidadDoble);
    cout << "\n Lista de distancias de precisión doble: " << endl;
    mostrarVectordouble(distanciaDoble);
}