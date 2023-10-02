#include <iostream>
#include "Software.h"

Software::Software(string _nombre,string _developer, int _clasfEdad, int _precio){
    this->nombre=_nombre;
    this->developer= _developer;
    this->clasfEdad=_clasfEdad;
    this->precio=_precio;
};    
Software ::~Software(){};
string Software:: getNombre(){
 return this->nombre;
};
string Software:: getDeveloper(){
 return this->developer;
};
int Software:: getClasfEdad(){
return this->clasfEdad;
};

int Software:: getPrecio(){
return this->precio;
};