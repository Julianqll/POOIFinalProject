#include <iostream>
#include <unistd.h>
#include "commons.h"
using namespace std;


string generar_codigo_aleatorio()
{
    string muestra= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    srand(getpid());
    string codigo;// el +1 da es para que no saque el caracter nulo
    char codigo_temp[21] ="";
    for (int x = 0; x < 20; x++)
    {
        int indice_aleatorio=0+rand() / (RAND_MAX / ((int) muestra.size()) + 1);
        codigo_temp[x]=muestra[indice_aleatorio];
    }
    codigo=codigo_temp;
    return codigo;
}
