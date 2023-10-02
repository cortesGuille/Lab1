#pragma once
#include <iostream>
#include "Software.h"

using namespace std;

class Ofmatica :public Software{
    
private:

int cantidadArchivos; 

public:

Ofmatica(string _nombre,string _developer, int _clasfEdad, int _precio,
         int _cantidadArchivos);
~Ofmatica();
void agregarArchivo();
void eliminarArchivo();
int getCantidadArchivos();

};