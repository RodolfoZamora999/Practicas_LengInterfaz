/*
Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Autor: Rodolfo Zamora Lopez @nickname RodolfoZamora999
Repositorio: https://github.com/RodolfoZamora999/Practicas_LengInterfaz
Fecha de revisión: 16/10/2020

Objetivo del programa:
Hacer que la computadora simule los tiros de seis monedas 1,000 veces e imprimir la distribución que resulte.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    string resul;

    int cantidad_sol = 0;
    int cantidad_aguila = 0;

    //Configuración del generador
    srand((unsigned)time(0));

    //Generación de un número pseudoaleatorio
    for(int i = 0; i < 1000; i++)
    {
        int value = rand() % 2;

        if(value == 0)
            ++cantidad_aguila;
        else
            ++cantidad_sol;
    }

    cout << "Resultado de 1000 tiros: " << endl;
    cout << "Cant.Aguila: " << cantidad_aguila << "  Cant.Sol: " << cantidad_sol << endl;

    return 0;
}
