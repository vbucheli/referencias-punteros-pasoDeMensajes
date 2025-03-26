#include <iostream>
#include "Usuario.h"

Usuario::Usuario(string identificacion, string nombre, string telefono)
{
  this->identificacion = identificacion;
  this->nombre = nombre;
  this->telefono = telefono;
}

//Getters
string Usuario::getIdentificacion(){
  return identificacion;
}

string Usuario::getNombre(){
  return nombre;
}

string Usuario::getTelefono(){
  return telefono;
}

//Setters
void Usuario::setIdentificacion(string identificacion){
 this->identificacion = identificacion;
}
void Usuario::setNombre(string nombre){
 this->nombre = nombre;
}
void Usuario::setTelefono(string telefono){
 this->telefono = telefono;
}

void Usuario::recibeReferencia(Cuenta &auxCuenta){
  auxCuenta.retirarDinero(10000);
}

void Usuario::recibeValor(Cuenta auxCuenta){
  auxCuenta.retirarDinero(20000);
}

void Usuario::recibePuntero(Cuenta *auxCuenta){
  cout<<auxCuenta<<endl;
  auxCuenta->retirarDinero(40000);
}
 void Usuario::recibeConstanteReferencia(const Cuenta &auxCuenta){
  // auxCuenta.retirarDinero(200000);
   cout << "El saldo de la cuenta es: " << auxCuenta.getSaldo() << endl;
}

 
 void Usuario::recibeConstantePuntero(const Cuenta *auxCuenta){
   cout<<auxCuenta<<endl;
   cout << "El saldo de la cuenta es: " << auxCuenta->getSaldo() << endl;
} 
 void Usuario::recibeConstantePunteroExp(const Cuenta *auxCuenta){
   auxCuenta++;
   cout<<auxCuenta<<endl;
   cout << "El saldo de la cuenta es: " << auxCuenta->getSaldo() << endl;
}