#pragma once
#include<iostream>
#include"Software.h"

using namespace std;

class Social : public Software{

private:
// solo maneja lista de Usuarios
public:

Social(string _nombre,string _developer, int _clasfEdad, int _precio);
~Social();
//mirar la lista de Usuarios;

};

