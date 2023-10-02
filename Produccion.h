#pragma once
#include<iostream>
#include "Software.h"

using namespace std;

class Produccion :public Software{

private:

string tipoSolucion;

public:

Produccion(string _nombre,string _developer, int _clasfEdad, int _precio,
            string _tipoSolucion);
~Produccion();
string getTipoSolucion();

};
