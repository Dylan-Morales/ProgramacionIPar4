// Materia: Programación I, Paralelo 4
// Autor: Dylan Morales Su
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 16/08/2026

//1. Escribe la siguiente expresión como expresión en C++:

#include<iostream>

using namespace std;

int main(){
	float a,b, resultado = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}