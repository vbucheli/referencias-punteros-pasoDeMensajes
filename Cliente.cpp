#include <iostream>
#include "Cliente.h"

Cliente::Cliente(string identificacion, string nombre, string telefono)
{
  this->identificacion = identificacion;
  this->nombre = nombre;
  this->telefono = telefono;
}

//Getters
string Cliente::getIdentificacion(){
  return identificacion;
}

string Cliente::getNombre(){
  return nombre;
}

string Cliente::getTelefono(){
  return telefono;
}

//Setters
void Cliente::setIdentificacion(string identificacion){
 this->identificacion = identificacion;
}
void Cliente::setNombre(string nombre){
 this->nombre = nombre;
}
void Cliente::setTelefono(string telefono){
 this->telefono = telefono;
}


