#include<iostream>
#include"ListaUsuario.h"

ListaUsuario::ListaUsuario(){
this->head=NULL;
};
//destrucutor Lista de Usuarios
ListaUsuario::~ListaUsuario(){
  Nodo* actual = this->head;
  while(actual){
    Nodo* siguiente = actual->sgte;
    delete actual->usuario;
    delete actual;
    actual =siguiente;
  }
};
//Funcion para agregar Usuarios a la Lista
void ListaUsuario:: agregaUsuario(Usuario _usuario){
Nodo* nuevoNodo= new Nodo(_usuario);
if(this->head==NULL){
    this->head=nuevoNodo;
}else{
 Nodo* actual= this->head;
 while(actual->sgte != NULL){
    actual= actual->sgte;
 }
 actual->sgte=nuevoNodo;
}

};