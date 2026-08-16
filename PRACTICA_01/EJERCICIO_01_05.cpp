// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 16/08/2026

/*Realice un programa que pida al usuario un número entero entre el 1 y el 7.
Mediante una estructura switch, muestre el día de la semana
correspondiente (1 para Lunes, 2 para Martes, etc.). Si el número está fuera
del rango, debe mostrar un mensaje de error. */

#include <iostream>

using namespace std; 

int main ()
{
    int opcion; 

    cout << "-- PROGRAMA -- \n1. \n2. \n3. \n4. \n5. \n6. \n7. \nIngrese una de las opciones " <<endl; 
    cin >> opcion; 

    while (opcion < 1 or opcion > 7)
    {
        cout << "ERROR. Ingrese una opcion valida " <<endl;
        cin >> opcion;
    }

    switch (opcion)
    { 
        case 1:
            cout << "Lunes " << endl; 
            break;

        case 2:
            cout << "Martes " << endl; 
            break;

        case 3: 
            cout << "Miercoles " << endl;
            break; 

        case 4:
            cout << "Jueves " << endl;
            break; 

        case 5:
            cout << "Viernes " << endl;
            break; 

        case 6:
            cout << "Sabado " << endl;
            break; 

        case 7: 
            cout << "Domingo " << endl;
            break; 

        // NO ES NECESARIO EL CASO "DEFAULT", PORQUE YA SE VALIDA ANTES EN EL WHILE DE LA LINEA 22
        
    }

    cout << "-- CERRANDO PROGRAMA --" << endl; 

    return 0;
}