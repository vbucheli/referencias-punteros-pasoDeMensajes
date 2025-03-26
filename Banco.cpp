#include "Banco.h"
#include <iostream>
#include <string>
// Constructor
Banco::Banco(string nombre) {
  this->nombre = nombre;
  cuentas.empty();
}
string Banco::getNombre() { return nombre; }
void Banco::setNombre(string nombre) { this->nombre = nombre; }
void Banco::addCliente(Cliente e) { clientes.push_back(e); }
void Banco::addCuenta(Cuenta c) { cuentas.push_back(c); }
void Banco::imprimirDatos() {
  vector<Cliente> aux;
  cout << "El nombre del banco es:";
  cout << nombre << endl;
  cout << "El Banco tiene las siguientes cuentas:" << endl;
  for (int i = 0; i < cuentas.size(); i++) {
    cout << cuentas.at(i).getNumeroCuenta()
         << " tiene el saldo:" << cuentas.at(i).getSaldo() << endl;
    cout << "La cuenta tiene asociados los siguientes clientes:" << endl;
    // Imorimier vector auxiliar
    aux = cuentas.at(i).getCuentasClientes();
    for (int i = 0; i < aux.size(); i++) {
      cout << aux.at(i).getIdentificacion() << " :" << aux.at(i).getNombre()
           << endl;
    }
    cout << endl;
  }
  cout << endl;
  cout << "El Banco tiene los siguientes clientes:" << endl;
  for (int i = 0; i < clientes.size(); i++) {
    cout << clientes.at(i).getIdentificacion() << ": "
         << clientes.at(i).getNombre() << endl;
  }
  cout << endl;
}
void Banco::calcularPromedio() {
  long aux = 0;
  for (int i = 0; i < cuentas.size(); i++) {
    aux += cuentas.at(i).getSaldo();
  }
  cout<<"El promedio de las cuentas es:"<<aux/cuentas.size()<<endl;
}