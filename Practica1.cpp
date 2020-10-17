/*
Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Autor: Rodolfo Zamora Lopez @nickname RodolfoZamora999
Repositorio: https://github.com/RodolfoZamora999/Practicas_LengInterfaz
Fecha de revisión: 16/10/2020

Objetivo del programa:
Este programa tiene el objetivo de simular la caida de una moneda, el resultado puede ser aguila o sol.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    string resul;

    //Configuración del generador
    srand((unsigned)time(0));

    //Generación de un número pseudoaleatorio
    int value = rand() % 2;

    if(value == 0)
        resul = "Aguila";
    else
        resul = "Sello";

    cout << "Resultado: " << resul << endl;

    return 0;
}