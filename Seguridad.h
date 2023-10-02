#pragma once
#include <iostream>
#include "Software.h"

using namespace std;

class Seguridad :public Software{

private:

string tipoMalware;

public:

Seguridad(string _nombre,string _developer, int _clasfEdad, int _precio
,string _tipoMalware);
~Seguridad();
string getTipoMalware();


};