#include<iostream>
#include"Normal.h"



 Normal::Normal(string _nombre,string _contraseña,string _correo,int _edad) :Usuario(_nombre,_contraseña,_edad){
    this->correo=_correo;
    this->_log=false;
    };
bool Normal::get_log(){return this->_log;};
string Normal::getCorreo(){return this->correo;};   
