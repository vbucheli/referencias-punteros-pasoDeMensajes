#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include "Cuenta.h"
using namespace std;
class Usuario{
  private:
    string identificacion;
    string nombre; 
    string telefono;
  public:
   //Método constructor
    Usuario(string identificacion, string nombre, string telefono);
  //GET
  //Salida por valor
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
    //Ejemplo con valor
    void recibeValor(Cuenta auxCuenta);
    //Ejemplor con referencias
    void recibeReferencia(Cuenta &auxCuenta);
     //Ejemplo con puntero
    void recibePuntero(Cuenta *auxCuenta);
    //Ejemplor con referencia constante
    void recibeConstanteReferencia(const Cuenta &auxCuenta);
   //Ejemplo con puntero constante
    void recibeConstantePuntero(const Cuenta *auxCuenta);
    void recibeConstantePunteroExp(const Cuenta *auxCuenta);
};

#endif