#ifndef BANCO_H
#define BANCO_H
#include <string>
#include <vector>
#include "Cuenta.h"
#include "Cliente.h"
using namespace std;
class Banco{
  private:
  string nombre;
  vector<Cliente> clientes;
  vector<Cuenta>cuentas;
  public:
  Banco(string nombre);
  //Traer el nombre del banco
  string getNombre();
  //Asignar el nombre al banco
  void setNombre(string nombre);
  //Adicionar clientes, el cliente e al vector de Clientes
  void addCliente(Cliente e);
  //Adicionar cuentas, la cuenta c al vector de Cuentas
 void  addCuenta(Cuenta c);
  //imprimir  un informe que describa cada cuenta, el saldo y el nombre de los clientes a los que pertenece.
  void  imprimirDatos();
  //Calcular el promedio del saldo de las cuentas.
  void  calcularPromedio();  
};


#endif