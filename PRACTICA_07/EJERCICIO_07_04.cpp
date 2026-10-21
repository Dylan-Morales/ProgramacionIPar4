#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <vector>


using namespace std;

int numeroAleatorio (int min, int max)
{
    return (rand() % (max - min + 1) + min);
}

void llenarVectores (vector <int> &vectorUno, vector <int> &vectorDos, int n)
{
    int numeroAleatorioUno = 0;
    int numeroAleatorioDos = 0;
    for (int i = 0; i < n; i ++ )
    {
        numeroAleatorioUno = numeroAleatorio(1, 500); // Valor arbritario para no llenar 1 por 1 los vectores
        numeroAleatorioDos = numeroAleatorio (1, 500);
        vectorUno.push_back(numeroAleatorioUno);
        vectorDos.push_back(numeroAleatorioDos);
    }
}


void vectorResultante (vector <int> &vectorUno, vector <int> &vectorDos, vector <int> &vectorResultante)
{
    
    for (int i = 0; i < vectorUno.size(); i ++)
    {
        int resultado = 1;
        resultado *= vectorUno[i] * vectorDos [i];
        vectorResultante.push_back(resultado);
    }
}


void mostrarVectores (vector <int> vectorUno, vector <int> vectorDos, vector <int> vectorResultado)
{
    cout << "El primer vector: " << "\n";
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

    cout << "Y la multiplicación de cada pareja es de: " << endl;
    for (int i = 0; i < vectorResultado.size(); i ++)
    {
        if (i != vectorResultado.size() -1)
            cout << vectorResultado[i] << ", "; 
        else
            cout << vectorResultado[i] << endl;
    }
    
}

int main ()
{
    srand(time(0));
    SetConsoleOutputCP(65001);
    vector <int> vectorUno, vectorDos, vectorResultado;
    int n; 

    cout << "Ingrese el tamaño que tendrán dos vectores con números aleatorios de 1 a 500: " << endl;
    cin >> n;

    while (n < 1)
    {
        cout << "Ingrese un tamaño mayor a 0: " << endl;
        cin >> n;
    }

    llenarVectores(vectorUno, vectorDos, n);
    vectorResultante(vectorUno, vectorDos, vectorResultado);
    mostrarVectores (vectorUno, vectorDos, vectorResultado);
}