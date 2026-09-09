// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 08/09/2026
// Número de ejercicio: 11

/*11. En una guardería hay N niños de 1, 2 y 3 años:
- Los niños de 1 año consumen 6 pañales al día
- Los niños de 2 años consumen 3 pañales diarios
- Los niños de 3 años consumen 2 pañales diarios
Se desea conocer cuántos pañales por día se consumen.
La cantidad de niños de 1, 2 y 3 años, debe ser generada en forma aleatorio y la suma no
debe sobrepasar los N niños.
Por ejemplo, si el usuario ingresar N = 30, el programa debe generar en forma aleatoria 5
niños de 1 año, 20 niños de 2 años y 3 niños de 3 años.
De acuerdo con esto el consumo de pañales seria (5 x 6) + (18 x 3) + (3 x 2) = 90 PAÑALES*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int numeroAleatorio ()
{
    int min = 1;
    int max = 3;
    return (rand() % (max - min + 1)) + min;
}

void simulacion (int cantidadN)
{
    int ninoUno = 0;
    int ninoDos = 0;
    int ninoTres = 0; 

    for (int i = 1; i <= cantidadN; i ++)
    {
        int numero = numeroAleatorio();

        if (numero == 1)
            ninoUno += 1;
        if (numero == 2)
            ninoDos += 1;
        if (numero == 3)
            ninoTres += 1; 
    }

    cout << "Niños de 1 año: " << ninoUno << endl;
    cout << "Niños de 2 años: " << ninoDos << endl;
    cout << "Niños de 3 años: " << ninoTres << endl;

    cout << "El consumo de pañales es de: " << ninoUno << " x 6" << " + " << ninoDos << " x 3" << " + " << ninoTres << " x 2 = " << ninoUno*6 + ninoDos * 3 + ninoTres * 2 << endl;
}

int main () 
{   
    SetConsoleOutputCP(65001);
    srand(time(0));
    int cantidadN; 
    
    cout << "Ingrese la cantidad de niños que hay " << endl;
    cin >> cantidadN;

    while (cantidadN < 1)
    {
        cout << "ERROR. Ingrese una cantidad válida " << endl;
        cin >> cantidadN;
    }

    simulacion(cantidadN);
    return 0;
}