// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera del estudiante: Ing. de Sistemas
// Fecha creación: 01/09/26

/*La Universidad Católica Boliviana (UCB) requiere un programa modular para
analizar el rendimiento académico de N estudiantes..........................*/

#include <iostream>
#include <windows.h>

using namespace std;

void programaUCB(int cantidadEstudiantes)
{
    float reprobados = 0;
    float aprobados = 0;
    float promedioNotas = 0;
    int contador = 0; 
    
    for (int i = 1; i <= cantidadEstudiantes; i++)
    {    
        float parcialUno = 0;
        float parcialDos = 0;
        float parcialTres = 0; 
        float notaExamen = 0; 
        float notaFinal = 0;

        cout << "Estudiante: " << i << ". " << endl;
        
        cout << "Ingrese la nota del primer parcial: "; 
        cin >> parcialUno; 
        while (parcialUno < 0 || parcialUno > 100)
        {
            cout << "ERROR. Ingrese notas entre 0 y 100: "; 
            cin >> parcialUno;
        }
        
        cout << "Ingrese la nota del segundo parcial: "; 
        cin >> parcialDos; 
        while (parcialDos < 0 || parcialDos > 100)
        {
            cout << "ERROR. Ingrese notas entre 0 y 100: "; 
            cin >> parcialDos;
        }

        cout << "Ingrese la nota del tercer parcial: "; 
        cin >> parcialTres; 
        while (parcialTres < 0 || parcialTres > 100)
        {
            cout << "ERROR. Ingrese notas entre 0 y 100: "; 
            cin >> parcialTres;
        }

        if (parcialUno < 60 || parcialDos < 60 || parcialTres < 60)
        {
            cout << "\nPrimera nota: " << parcialUno << "\nSegunda nota: " << parcialDos << "\nTercera nota: " << parcialTres << " ------> REPROBADO" << endl;
            reprobados += 1;
        }
        else
        {
            cout << "Ingrese la nota del examen final: "; 
            cin >> notaExamen;
            while (notaExamen < 0 || notaExamen > 100)
            {
                cout << "ERROR. Ingrese notas entre 0 y 100: ";
                cin >> notaExamen;
            }

            notaFinal = (0.5 * ((parcialUno + parcialDos + parcialTres) / 3.0)) + (0.5 * notaExamen);

            if (notaFinal < 51)
            {
                cout << "\nPrimera nota: " << parcialUno << "\nSegunda nota: " << parcialDos << "\nTercera nota: " << parcialTres << "\nExamen final: " << notaExamen << "\nNota final: " << notaFinal << " ------> REPROBADO" << endl;
                reprobados += 1;
            }
            else 
            {
                cout << "\nPrimera nota: " << parcialUno << "\nSegunda nota: " << parcialDos << "\nTercera nota: " << parcialTres << "\nExamen final: " << notaExamen << "\nNota final: " << notaFinal << " -----------> APROBADO" << endl;
                aprobados += 1;
            }

            promedioNotas += notaFinal;
            contador += 1;
        }
        cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl; 
    }

    reprobados = (reprobados / cantidadEstudiantes) * 100;
    aprobados = (aprobados / cantidadEstudiantes) * 100;

    if (contador > 0)
    {
        promedioNotas = promedioNotas / contador;
    }

    cout << "El porcentaje de reprobados en la asignatura es de: " << reprobados << "% " << endl; 
    cout << "El porcentaje de aprobados en la asignatura es de: " << aprobados << "% " << endl; 
    cout << "El promedio de notas finales calculadas fue de: " << promedioNotas << endl; 
}

int main()
{
    SetConsoleOutputCP(65001);
    int estudiantes; 

    cout << "Ingrese la cantidad de estudiantes del paralelo " << endl; 
    cin >> estudiantes;

    while (estudiantes < 1)
    {
        cout << "ERROR. Ingrese la cantidad de estudiantes del paralelo " << endl; 
        cin >> estudiantes;
    }

    programaUCB(estudiantes);

    return 0;
}