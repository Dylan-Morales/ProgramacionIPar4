#include<iostream>

using namespace std;

// Prototipo de la función
void tiempo(int totalSegundos, int &horas, int &minutos, int &segundos);

int main(){
    int totalSegundos, horas, minutos, segundos;
    
    // Pedir los segundos al usuario [00:01:09]
    cout << "Digite el número total de segundos: ";
    cin >> totalSegundos;
    
    // Llamada a la función [00:04:12]
    tiempo(totalSegundos, horas, minutos, segundos);
    
    // Mostrar el resultado equivalente [00:04:43]
    cout << "\nTiempo equivalente a la cantidad de segundos digitados:" << endl;
    cout << "Horas = " << horas << endl;
    cout << "Minutos = " << minutos << endl;
    cout << "Segundos = " << segundos << endl;
    
    return 0;
}

// Definición de la función [00:01:57]
void tiempo(int totalSegundos, int &horas, int &minutos, int &segundos){
    // Calcular las horas (1 hora = 3600 segundos) [00:02:32]
    horas = totalSegundos / 3600;
    
    // Descontar las horas calculadas al total de segundos [00:03:02]
    totalSegundos %= 3600;
    
    // Calcular los minutos (1 minuto = 60 segundos) [00:03:31]
    minutos = totalSegundos / 60;
    
    // Calcular los segundos restantes [00:03:49]
    segundos = totalSegundos % 60;
}