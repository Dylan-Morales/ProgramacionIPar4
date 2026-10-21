// Materia: Programación I, Paralelo 4
// Autor: Dylan Ariel Morales Su
// Fecha creación: 30/09/2026

#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

void extraerPalabras (string tweet, vector <string> &hashtag)
{
    int contador = 0;
    string cadAux = "";
    for (int i =  0; i < tweet.size(); i ++)
    {
        if (tweet[i] == '#' && contador == 0)
            contador = 1;
        if (contador == 1)
        {
            if (tweet[i] != ' ')
            {
                cadAux += tweet[i];
            }
            if(tweet[i] == ' ' || i == tweet.size()-1)
            {
                contador = 0;
                hashtag.push_back(cadAux);
                cadAux = "";
            }
        }
    }
}
int main ()
{
    string tweet;
    vector <string> hashtags;
    cout << "Ingrese un tweet que contenga hashtags: " << endl;;
    getline(cin, tweet);
    extraerPalabras(tweet, hashtags);
    cout << "Sus hashtagas son: " << endl;

    for (int i = 0; i < hashtags.size () ; i ++)
    {
        if (i != hashtags.size() -1)
            cout << hashtags[i] << ", ";
        else
            cout << hashtags [i] << endl;
    }
}