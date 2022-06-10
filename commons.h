#ifndef POOIFINALPROJECT_COMMONS_H
#define POOIFINALPROJECT_COMMONS_H

#include <iostream>
#include <vector>
#include "utilsAlgorithms.h"
#include "Cliente.h"
#include "Vendedor.h"
#include "Producto.h"

using namespace std;
// variables globales
//  variables del cliente (se cambiaran mas adelante)
string codigo_cliente,nombre_usuario_cliente, password_cliente, dni_cliente;
int edad_cliente;
Cliente cli;
vector<Cliente> clientes;
//  variables del vendedor (se cambiaran mas adelante)
string codigo_vendedor,nombre_usuario_vendedor, password_vendedor,
        dni_vendedor;
int edad_vendedor;
Vendedor vend;
vector<Vendedor> vendedores;
int opcion;

#endif //POOIFINALPROJECT_COMMONS_H
