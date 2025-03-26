#ifndef CUENTA_H
#define CUENTA_H
#include <string>
#include <vector>
#include "Cliente.h"
using namespace std;
class Cuenta {

private:
  string id;
  long saldo;
  vector <Cliente> clientesCuenta;
public:
  // Constructor
  Cuenta(string id, long saldo);
  // Get
  string getNumeroCuenta();
  long getSaldo() const;
  vector <Cliente> getCuentasClientes();
  // Adicionar clientes
  void addCliente(Cliente e);
  // Set
  void setNumeroCuenta(string id);
  void setSaldo(long saldo);
  // Retiros y consignaciones
  //bool retirarDinero(long cantidad) const;
  bool retirarDinero(long cantidad);
  void consignarDinero(long cantidad);
  
};

#endif