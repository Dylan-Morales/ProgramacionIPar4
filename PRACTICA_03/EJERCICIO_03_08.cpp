// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ingeniería de sistemas
// Fecha creación: 23/08/2026

/*8. La empresa comercial "La Estrella"......*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    srand(time(0));

    int cantidadN;
    int min = 10;
    int max = 10000;
    float caro = 0; 
    float barato = 10001; // USAMOS ESE NÚMERO YA QUE EL NUMERO ALEATORIO NUNCA LLEGARA A ESA CANTIDAD, SIENDO EL MAXIMO 10000
    float descuento = 0;
    float total = 0;
    float precio = 0;
    float iva; 
    float ivaAcumulada = 0;
    
    
    cout << "Ingrese la cantidad de productos que se vendieron en el día " << endl;
    cin >> cantidadN;

    while (cantidadN < 1)
    {
        cout << "ERROR. Ingrese una cantidad mayor a 0 " << endl;
        cin >> cantidadN;
    }

    cout << "Los precios de sus productos son : " << endl;
    for (int i = 1; i <= cantidadN; i ++)
    {
        int numeroAleatorio = (rand() % (max - min +1)) + min;
        cout << i << ". " << numeroAleatorio << " Bs." << endl;
        
        if (numeroAleatorio >2500)
        {
            precio = numeroAleatorio - numeroAleatorio * 0.05;
            descuento += numeroAleatorio * 0.05;
        }
        else 
        {
            precio = numeroAleatorio;
        }

        if (precio > caro)
        {
            caro = precio;
        }
        
        if (precio < barato)
        {
            barato = precio;
        }

        total += precio;
        iva = precio * 0.13;
        ivaAcumulada += iva;
    }

    cout << "El total del dinero ingresado en el día fue de: " << total << " Bs." << endl;
    cout << "El monto total del concepto IVA que debe declarar a Impuestos Nacionales es " << ivaAcumulada << " Bs." << endl;
    cout << "La cantidad de dinero descontado a los clientes por productos mayores a 2500 Bs. fue de: " << descuento << " Bs. " << endl;
    cout << "El producto más caro comprado fue de: " << caro << " Bs. " << endl; 
    cout << "El producto más barato comprado fue de: " << barato << " Bs." << endl;

    return 0;
}