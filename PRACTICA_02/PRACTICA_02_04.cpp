// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Carrera: Ingeniería de sistemas
// Fecha de Creación: 24/08/2026

//Escriba un programa que calcule el valor de: 1+2+3+...+n

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int n, suma = 0;
    
    cout<<"Digite el numero de elementos: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        suma += i;
    }
    
    cout<<"\nLa suma es: "<<suma<<endl;
    
    getch();
    return 0;
}