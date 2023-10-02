#include<iostream>
#include "Juegos.h"

Juegos::Juegos(string _nombre,string _developer, int _clasfEdad, int _precio,string _genero, bool _mayorEdad) :Software(_nombre,_developer,_clasfEdad,_precio){
 this-> genero= _genero;
 this-> mayorEdad= _mayorEdad;
};
Juegos::~Juegos(){};
string Juegos::getGenero(){
    return this->genero;
};
bool Juegos::get_mayorEdad(){
 return this->mayorEdad;   
};