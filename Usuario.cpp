#include <iostream>
#include "Usuario.h"

Usuario::Usuario(string nombre,string contraseña,int _edad){
    this->nombre=nombre; 
    this->contraseña=contraseña;
    this->edad=_edad; };
Usuario::~Usuario(){};
void Usuario::setContraseña(string contraseña){this->contraseña=contraseña; };
string Usuario::getNombre(){return this->nombre; };
string Usuario::getContraseña(){return this->contraseña; };
int Usuario::getEdad(){return this->edad; };
