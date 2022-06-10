#ifndef POOIFINALPROJECT_CLIENTE_H
#define POOIFINALPROJECT_CLIENTE_H

#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

class Cliente {
protected:
    string nombre_usuario, password, codigo,dni;
    int edad;
public:
    Cliente()
    {

    }
    ~Cliente() {

    }
    Cliente(string nombre_usuario, string password,string dni, string codigo, int edad)
    {
        this->nombre_usuario = nombre_usuario;
        this->password = password;
        this->dni=dni;
        this->codigo=codigo;
        this->edad = edad;
    }
    // metodos
    // set
    void setNombre_usuario(string valor){
        nombre_usuario=valor;
    }
    void setpassword(string valor){
        password=valor;
    }
    void setDni(string valor){
        dni=valor;
    }
    void setcodigo(string valor){
        codigo=valor;
    }
    void setedad(int valor){
        edad=valor;
    }
// get
    string getNombre_usuario(){
        return nombre_usuario;
    }
    string getpassword(){
        return password;
    }
    string getDni(){
        return dni;
    }
    string getcodigo(){
        return codigo;
    }
    int getedad(){
        return edad;
    }
};



#endif //POOIFINALPROJECT_CLIENTE_H
