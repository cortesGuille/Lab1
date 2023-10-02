#include <iostream>
#include "Administrador.h"

Administrador::Administrador(string _nombre,string _contraseña,int _edad,string _correo) :Usuario(_nombre,_contraseña,_edad){
    this->correo=_correo;
    this->_log=true;
};
bool Administrador::get_log(){return this->_log;};
string Administrador::getCorreo(){return this->correo;};
