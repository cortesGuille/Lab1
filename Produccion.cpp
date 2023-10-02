#include <iostream>
#include "Produccion.h"

Produccion::Produccion(string _nombre,string _developer, int _clasfEdad, int _precio,
            string _tipoSolucion) :Software(_nombre,_developer,_clasfEdad,_precio){
                this->tipoSolucion= _tipoSolucion;
            };
Produccion::~Produccion(){};
string Produccion::getTipoSolucion(){
 return this->tipoSolucion;
};