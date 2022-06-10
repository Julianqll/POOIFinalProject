#include<iostream>
#include "utils_vendedor.h"
#include "commons.h"
using namespace std;



bool iniciar_sesion_vendedor()
{
    string usuario, password;
    cout << "Nombre de usuario: ";
    getline(cin, usuario);
    cout << "Contraseña: ";
    getline(cin, password);
    // Dentro de este if se lee el archivo para validar los datos ingresados
    return true;
}
void registrar_vendedor()
{
    cout << "Digite su nombre de usuario: ";
    cin >> nombre_usuario_vendedor;
    cout << "Digite su contraseña: ";
    cin >> password_vendedor;
    cout << "Digite su edad: ";
    cin >> edad_vendedor;
    cout << "Digite su DNI: ";
    cin >> dni_vendedor;
    codigo_vendedor = generar_codigo_aleatorio();
    vend = Vendedor(nombre_usuario_vendedor, password_vendedor, dni_vendedor,codigo_vendedor, edad_vendedor);
    vendedores.push_back(vend);
}