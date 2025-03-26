#include <iostream>
#include <string>
#include "Cuenta.h"
//Constructor
Cuenta::Cuenta(string id, long saldo){
  this->id=id;
  this->saldo=saldo;
  clientesCuenta.empty();
}
string Cuenta::getNumeroCuenta(){
   return id;
 }
long Cuenta::getSaldo()const {
  return saldo;
}
void Cuenta::addCliente(Cliente e){
  clientesCuenta.push_back(e);
}
void Cuenta::setNumeroCuenta(string id){
  this->id=id;
}
void Cuenta::setSaldo(long saldo){
  this->saldo=saldo;
}
bool Cuenta::retirarDinero(long cantidad){
  if(saldo>=cantidad){
    saldo=saldo-cantidad;
    return true;
  }
  else return false;
}

void Cuenta::consignarDinero(long cantidad){
  //Imprimir para verificar errores
 // cout<<"sumando cantidad"<<cantidad<<endl;
  saldo=saldo+cantidad;
  //cout<<saldo;
}
/*
void Cuenta::imprimirClientes(){
  cout<<"imprimir clientes: "<<clientesCuenta.size()<<endl;
  for(int j=0; j<clientesCuenta.size();j++){
       cout<<clientesCuenta.at(j).getIdentificacion()<<" :"<<clientesCuenta.at(j).getNombre()<<endl;
       }
}*/
   vector <Cliente> Cuenta:: getCuentasClientes(){
    return this->clientesCuenta;
  }