#include<iostream>
#include "commons.h"
//#include "utils_algorithms.h"
using namespace std;


void registrar_cliente()
{
    cout << "Digite su nombre de usuario: ";
    cin >> nombre_usuario_cliente;
    cout << "Digite su contraseña: ";
    cin >> password_cliente;
    cout << "Digite su edad: ";
    cin >> edad_cliente;
    cout << "Digite su DNI: ";
    cin >> dni_cliente;
    //codigo_cliente = generar_codigo_aleatorio();
    cli = Cliente(nombre_usuario_cliente, password_cliente, dni_cliente,codigo_cliente, edad_cliente);
    clientes.push_back(cli);
}

bool iniciar_sesion_cliente() {
    string usuario, password;
    cout << "Nombre de usuario: ";
    getline(cin, usuario);
    cout << "Contraseña: ";
    getline(cin, password);
    // Dentro de este if se lee el archivo para validar los datos ingresados
    return true;
}