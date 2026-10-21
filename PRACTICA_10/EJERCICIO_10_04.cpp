// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 14/10/2026

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

double numeroAleatorioDecimal(double minimo, double maximo)
{
    int minimoEntero = minimo * 100;
    int maximoEntero = maximo * 100;
    int aleatorioEntero = rand() % (maximoEntero - minimoEntero + 1) + minimoEntero;
    
    return (double)aleatorioEntero / 100.0;
}

void rellenarPrecios(vector<double> &precios, int cantidadProductos)
{
    for(int indice = 0; indice < cantidadProductos; indice++)
    {
        precios.push_back(numeroAleatorioDecimal(5.00, 150.00));
    }
}

void mostrarPrecios(vector<double> precios)
{
    for(int indice = 0; indice < precios.size(); indice++)
    {
        cout << "Producto " << indice + 1 << ": $" << precios[indice] << endl;
    }
}

void ordenarPreciosPorSeleccion(vector<double> &precios)
{
    int totalElementos = precios.size();
    
    for(int indiceActual = 0; indiceActual < totalElementos - 1; indiceActual++)
    {
        int indiceMinimo = indiceActual;
        
        for(int indiceSiguiente = indiceActual + 1; indiceSiguiente < totalElementos; indiceSiguiente++)
        {
            if(precios[indiceSiguiente] < precios[indiceMinimo])
            {
                indiceMinimo = indiceSiguiente;
            }
        }
        
        if(indiceMinimo != indiceActual)
        {
            double auxiliar = precios[indiceActual];
            precios[indiceActual] = precios[indiceMinimo];
            precios[indiceMinimo] = auxiliar;
        }
    }
}

void mostrarProductoMasBarato(vector<double> precios)
{
    double precioMasBarato = precios[0];
    int productoBarato = 1;
    
    for(int indice = 1; indice < precios.size(); indice++)
    {
        if(precios[indice] < precioMasBarato)
        {
            precioMasBarato = precios[indice];
            productoBarato = indice + 1;
        }
    }
    
    cout << "El producto más barato es el Producto " << productoBarato << " con un precio de: $" << precioMasBarato << endl;
}

void mostrarProductoMasCaro(vector<double> precios)
{
    double precioMasCaro = precios[0];
    int productoCaro = 1;
    
    for(int indice = 1; indice < precios.size(); indice++)
    {
        if(precios[indice] > precioMasCaro)
        {
            precioMasCaro = precios[indice];
            productoCaro = indice + 1;
        }
    }
    
    cout << "El producto más caro es el Producto " << productoCaro << " con un precio de: $" << precioMasCaro << endl;
}

void calcularMedianaPrecios(vector<double> precios)
{
    int totalElementos = precios.size();
    double medianaPrecios = 0;
    
    if(totalElementos % 2 != 0)
    {
        medianaPrecios = precios[totalElementos / 2];
    }
    else
    {
        medianaPrecios = (precios[(totalElementos / 2) - 1] + precios[totalElementos / 2]) / 2.0;
    }
    
    cout << "La mediana de los precios es: $" << medianaPrecios << endl;
}

int main()
{
    SetConsoleOutputCP(65001);
    srand(time(0));
    
    int cantidadProductos = 0;
    
    cout << "Ingrese la cantidad de productos básicos: " << endl;
    cin >> cantidadProductos;
    
    while(cantidadProductos < 1)
    {
        cout << "Ingrese un valor mayor a 0: " << endl;
        cin >> cantidadProductos;
    }
    
    vector<double> preciosProductos;
    
    rellenarPrecios(preciosProductos, cantidadProductos);
    
    cout << "\nPrecios originales de los productos:" << endl;
    mostrarPrecios(preciosProductos);
    
    ordenarPreciosPorSeleccion(preciosProductos);
    
    cout << "\nPrecios ordenados de forma ascendente:" << endl;
    mostrarPrecios(preciosProductos);
    
    cout << "\n--- ANÁLISIS DE PRECIOS ---" << endl;
    mostrarProductoMasBarato(preciosProductos);
    mostrarProductoMasCaro(preciosProductos);
    calcularMedianaPrecios(preciosProductos);
    
    return 0;
}