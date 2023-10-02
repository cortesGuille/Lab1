#include<iostream>
#include "Ofmatica.h"

Ofmatica::Ofmatica(string _nombre,string _developer, int _clasfEdad, int _precio,
         int _cantidadArchivos) :Software(_nombre,_developer,_clasfEdad,_precio){

         this->cantidadArchivos=_cantidadArchivos;       
         };
Ofmatica::~Ofmatica(){};
void Ofmatica:: agregarArchivo(){
    this->cantidadArchivos += 1;
};
void  Ofmatica::eliminarArchivo(){
    this->cantidadArchivos -= 1;
};

int Ofmatica::getCantidadArchivos(){
    return this->cantidadArchivos;
};