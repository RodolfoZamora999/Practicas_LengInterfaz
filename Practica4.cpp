/*
Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Autor: Rodolfo Zamora Lopez @nickname RodolfoZamora999
Repositorio: https://github.com/RodolfoZamora999/Practicas_LengInterfaz
Fecha de revisión: 16/10/2020

Objetivo del programa:
Simular que se arroja una moneda cinco veces sucesivamente. Repetir la secuencia de 5 tiros 100 vec es,
 contando el número de águilas que aparecen en cada secuencia de diez tiros. Cuando se termine, sacar
 el numero de veces que no aparecierón águilas; cuando aparecio una dos, tres, cuatro y cinco.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int value;
    int secuencia = 0;

    //Configuración del generador
    srand((unsigned)time(0));

    cout << "Secuencias de aguilas" << endl;

    //Generación de un número pseudoaleatorio
    for(int i = 0; i < 100; i++)
    {
        secuencia = 0;

        for(int j = 0; j < 5; j++)
        {
            value = rand() % 2;

            if(value == 0)
                ++secuencia;
        }

        cout << "Secuencia " << (i + 1) << ": " << secuencia << endl;
    }
    
    return 0;
}
