#include <iostream>  
#include  <vector>
//software
#include "Software.h"
#include  "Juegos.h"
//Usuarios
#include "Usuario.h"
#include "Nino.h"
#include "Administrador.h"
#include "Normal.h"

using namespace std;


// g++ -o mi_programa main.cpp Persona.cpp Alumno.cpp Profesor.cpp

Usuario* iniciarSesion(vector<Usuario*> lista);
int main()
{
//EJEMPLO para saber como ocupar casteo  
 vector<Software*> biblotecaGeneral;
 vector<Usuario*> listaUsuarios;
//POBLAR BASE DE DATOS


//Inicio de Sesion
 Usuario* user=iniciarSesion(listaUsuarios);
// mirar si el Usuario ingresado es Admin o No
Administrador* pAdmin=dynamic_cast<Administrador*>(user);
if(pAdmin==0){
  cout<<"No es Admin"<<endl;
}else{
    //funciones de Admin;
}
//mirar las listas de los Usuarios en los Software
//funciones de usuario normal 
return 0;
};
Usuario* iniciarSesion(vector<Usuario*> lista){

string _nombre;
string _contraseña;

cout<<"Inicio de Sesion: "<<endl;
cout<<"Ingrese Nombre:  "<<endl;
cin>>_nombre;
cout<<"Ingrese Contraseña"<<endl;
cin>>_contraseña;
//mirar casteo 
for(int i =0; i<lista.size() ;i++){
    Usuario* usuario = lista[i];

     if(usuario->getContraseña() ==_contraseña && usuario->getNombre() == _nombre){
       cout<<"Iniciando Sesion.... "<<endl;
       return usuario;
     }   
        
}
 cout<<"Usuario no encontrado ,desea creas un Usuario nuevo"<<endl;
 return NULL;

};