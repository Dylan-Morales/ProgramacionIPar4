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

void rellenarVectores (vector <int> &vectorUno, vector <int> &vectorDos, int n)
{
    for (int i = 0; i < n; i ++)
    {
        int numeroAleatorioUno = numeroAleatorio(1, 10); // Valores arbritarios para no llenar 1 por 1
        int numeroAleatorioDos = numeroAleatorio(1, 10); 
        vectorUno.push_back(numeroAleatorioUno);
        vectorDos.push_back(numeroAleatorioDos);    
    }
}

void nuevoVector (vector <int> &vectorUno, vector <int> &vectorDos, vector <int> &vectorResultante)
{ 
    // EL EJERCICIO NO ESPECIFICA COMO SE DEBEN COMBINAR, EN ESTE CASO SE COMBINA CADA ELEMENTO DE LOS DOS VECTORES EN ORDEN 1X1
    for (int i = 0; i < vectorUno.size(); i ++)
    {
        vectorResultante.push_back(vectorUno[i]);
        vectorResultante.push_back(vectorDos[i]);
    }
}

void mostrarVectores (vector <int> vectorUno, vector <int> vectorDos, vector <int> vectorResultante)
{
    cout << "El primer vector es: " << endl;
    for (int i = 0; i < vectorUno.size(); i ++)
    {
        if (i != vectorUno.size() -1 )
            cout << vectorUno[i] << ", ";
        else
            cout << vectorUno [i] << endl;
    }

    cout << "El segundo vector: " << "\n";
    for (int i = 0; i < vectorDos.size(); i ++)
    {
        if (i != vectorDos.size() -1)
            cout << vectorDos[i] << ", "; 
        else
            cout << vectorDos[i] << endl;
    }

    cout << "Y los vectores combinados son: " << endl;
    for (int i = 0; i < vectorResultante.size(); i ++)
    {
        if (i != vectorResultante.size() -1)
            cout << vectorResultante[i] << ", "; 
        else
            cout << vectorResultante[i] << endl;
    }
}

int main ()
{
    srand(time(0));
    SetConsoleOutputCP(65001);
    vector <int> vectorUno, vectorDos, vectorResultante;
    int n; 

    cout << "Ingrese el tamaño de vectores que tendrán números aleatorios de 1 a 10: " << endl;
    cin >> n;

    while (n < 1)
    {
        cout << "Ingrese un número mayor a 0 " << endl;
        cin >> n;
    }

    rellenarVectores(vectorUno, vectorDos, n);
    nuevoVector(vectorUno, vectorDos, vectorResultante);
    mostrarVectores(vectorUno, vectorDos, vectorResultante);
}
