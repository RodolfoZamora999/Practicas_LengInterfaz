/*
Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Autor: Rodolfo Zamora Lopez @nickname RodolfoZamora999
Repositorio: https://github.com/RodolfoZamora999/Practicas_LengInterfaz
Fecha de revisión: 16/10/2020

Objetivo del programa:
Es un hecho bien conocido que cada vez que se arroja una moneda al aire, hay una probabilidad de 50-50 que caiga "sol".
Escribir un programa para imprimir una secuencia caracteristicas de 100 tiros (es decir, sol, aguila, sol, aguila, sol)
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
    for(int i = 0; i < 100; i++)
    {
        int value = rand() % 2;

        if(value == 0)
            resul = "Aguila";
        else
            resul = "Sello";

        cout <<"Tiro: " << (i + 1) << " Resultado: " << resul << endl;
    }

    return 0;
}
