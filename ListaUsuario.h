#include <iostream>
#include "Usuario.h"

struct Nodo
{
    Usuario* usuario;
    Nodo* sgte;

    Nodo(Usuario* usuario);
};

class ListaUsuario{

private:

Nodo* head;

public:
ListaUsuario();
~ListaUsuario();
void agregaUsuario(Usuario _usuario);
void eliminarUsuario(string _correo);


};
