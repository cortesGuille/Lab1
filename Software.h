#pragma once 
#include <iostream>
#include "ListaUsuario.h"

using namespace std;

class Software{
    
private:

string nombre;
string developer;
int clasfEdad;
//mirar como iniciar la lista de Usuarios
// y modificar el constructor 
ListaUsuario listaUsuario;
int precio;

public:

Software(string _nombre,string _developer, int _clasfEdad, int _precio);    
virtual ~Software();
string getNombre();
string getDeveloper();
int getClasfEdad();
int getPrecio();
    
};

