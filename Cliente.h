#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;
class Cliente{
private:
  string identificacion;
  string nombre; 
  string telefono;
public:
 //Método constructor
  Cliente(string identificacion, string nombre, string telefono);
//GET
  string getIdentificacion();
  //Obtiene el nombre
  string getNombre();
 //Obtiene el telefono
  string getTelefono();
//SET
  //Asigna codigo
  void setIdentificacion(string codigo);
  //Asigna el nombre
  void setNombre(string nombre);
 //Asigna el telefono
  void setTelefono(string telefono);

};

#endif