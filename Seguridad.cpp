#include <iostream>
#include "Seguridad.h"

Seguridad:: Seguridad(string _nombre,string _developer, int _clasfEdad, int _precio
,string _tipoMalware) :Software(_nombre,_developer,_clasfEdad,_precio){
this->tipoMalware = _tipoMalware;
};
Seguridad:: ~Seguridad(){};
string Seguridad:: getTipoMalware(){
    return this->tipoMalware;
};