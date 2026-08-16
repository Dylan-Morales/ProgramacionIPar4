// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 16/08/2026

/*Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y
mostrar el mes al que corresponde.*/

#include <iostream>

using namespace std;

int main ()
{
    int opcion;

    cout << "-- MENU -- \n Enero \n Febrero \n Marzo \n Abril \n Mayo \n Junio \n Julio \n Agosto \n Septiembre \n Octubre \n Noviembre \n Diciembre" << endl;
    cout << "Ingrese un numero del 1 al 12 para saber que mes es ";
    cin >> opcion;

    while (opcion < 1 or opcion >12)
    {
        cout << "Error, ingrese un número válido ";
        cin >> opcion;
    }

    cout << "El mes correspondiente es:";

    switch (opcion) 
    {
        case 1:
            cout << " Enero " << endl; 
            break;

        case 2:
            cout << " Febrero " << endl; 
            break;

        case 3:
            cout << " Marzo " << endl; 
            break;

        case 4:
            cout << " Abril " << endl; 
            break;
        
        case 5:
            cout << " Mayo" << endl; 
            break;
        
        case 6:
            cout << " Junio " << endl; 
            break;

        case 7:
            cout << " Julio " << endl; 
            break;

        case 8:
            cout << " Agosto " << endl; 
            break;

        case 9:
            cout << " Septiembre " << endl; 
            break;

        case 10:
            cout << " Octubre " << endl; 
            break;

        case 11:
            cout << " Noviembre " << endl; 
            break;

        case 12:
            cout << " Diciembre " << endl; 
            break;
    }

    return 0;

}