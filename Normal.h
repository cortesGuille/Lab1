#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class Normal :public Usuario{
    
private:

string correo;
bool _log;

public:
    
 Normal(string _nombre,string _contraseña,string _correo,int _edad);
 bool get_log();
 string getCorreo();   
};