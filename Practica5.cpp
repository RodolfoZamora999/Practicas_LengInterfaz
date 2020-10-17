/*
Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Autor: Rodolfo Zamora Lopez @nickname RodolfoZamora999
Repositorio: https://github.com/RodolfoZamora999/Practicas_LengInterfaz
Fecha de revisión: 16/10/2020

Objetivo del programa:
Escribir un programa que simule arrojar un dado 60 veces. Contar e imprimir el número de veces que sale cada dado.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int value;
    
    int dado[6];
    for(int i = 0; i < 6; i++)
        dado[i] = 0;

    //Configuración del generador
    srand((unsigned)time(0));

    cout << "Num. veces por cara" << endl;

    //Generación de un número pseudoaleatorio
    for(int i = 0; i < 60; i++)
    {
        value = rand() % 6;

        dado[value]++;
    }

    for(int i = 0; i < 6; i++ )
        cout << "Total de cara "<< (i + 1)<<": "<< dado[i] << endl;

    return 0;
}
