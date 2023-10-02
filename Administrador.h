#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class Administrador:public Usuario{
    
private:

 string correo;
 bool _log;
 

public:
 
 Administrador(string _nombre,string _contraseña,int _edad,string _correo);
 bool get_log();
 string getCorreo();

};