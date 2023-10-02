#pragma once
#include <iostream>
#include "Software.h"

using namespace std;

class Juegos :public Software{

private:

string genero;
bool mayorEdad;

public:
Juegos(string _nombre,string _developer, int _clasfEdad, int _precio,string _genero, bool _mayorEdad);
~Juegos();
string getGenero();
bool get_mayorEdad();
};