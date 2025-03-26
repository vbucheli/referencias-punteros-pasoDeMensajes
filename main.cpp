/*
  Archivo: Main.cpp
  Autor: Curso FPOO 2023-1
  Correo: victor.bucheli@correounivalle.edu.co
  Fecha creación: 2023-04-12
  Licencia: GNU-GPL
*/

/**
  CLASE: Main
  INTENCIÓN: utilizar las referencias, los punteros y el paso de mensajes.
  RELACIONES: Se relaciona con la clase banco.

*/

#include "Banco.h"
#include "Cuenta.h"
#include "Usuario.h"
#include <iostream>
using namespace std;

int main() {
  // Intaciar Objetos
  Banco bancoUnivalle("Banco Univalle");
  Cuenta miCuenta2("1307082", 200000);
  Usuario miPrimerUsuario("2886122", "Pepe Palos", "30029382");
  Usuario miSegundoUsuario("2886123", "Paco Palos", "3002222");
  
  //  Ambito en el que viven las variables {}
  for (int i = 0; i < 3; i++) {
    cout << i << endl;
  }
  //cout<<i<<endl;
  //i++;
  
  // Ambito en el que viven los objetos
  // Bajo el supuesto que estamos en la opción 3 de un menu
  int opcion = 3;
  if (opcion == 3) {
    Cuenta miCuenta("130708", 100000);
    miCuenta.retirarDinero(20000);
    cout << miCuenta.getSaldo() << endl;
  }
  //miCuenta.retirarDinero(20000);
  //cout<<miCuenta.getSaldo()<<endl;

  // Referencias
  int valor = 4;
  int &meses = valor; // meses es un nuevo nombre para valor [definir
                      // referencia]
  cout << valor << endl; // Imprime 4
  cout << meses << endl; // Imprime 4
  meses++;
  cout << meses << endl; // Imprime 5
  cout << valor << endl; // Imprime 5
  // Ambito en el que viven las referncias {} [j esta enlazado a valor]
  int &j = valor;
  for (valor = 0; valor < 3; valor++) {
    cout << valor << endl;
  }
  j++;
  cout << j << endl;
  cout<<&meses<<endl;
  cout<<&j<<endl;

    
  // Ambito en el que viven las referencias a objetos
  // Bajo el supuesto que estamos en la opción 3 de un menu
  // Cuenta miCuenta2("1307082", 200000);
  Cuenta &cuentaReferencia = miCuenta2;
  cout << cuentaReferencia.getSaldo() << endl;
  if (opcion == 3) {
    Cuenta miCuenta("130708", 100000);
    miCuenta.retirarDinero(20000);
    cout << miCuenta.getSaldo() << endl;
    cuentaReferencia = miCuenta;
  }
  cuentaReferencia.retirarDinero(20000);
  cout << cuentaReferencia.getSaldo() << endl;//60000 miCuenta 180000 miCuenta2

  // Ambito de vida de los objetos como parametros de un método
  Cuenta miCuenta4("130705", 100000);
  cout << "mi cuenta 4: 100000 - "<<miCuenta4.getSaldo() << endl;
  miPrimerUsuario.recibeValor(miCuenta4);
  cout << miCuenta4.getSaldo() << endl;
  cout << "mi cuenta 4: 80000 - "<<miCuenta4.getSaldo() << endl;
  
  miSegundoUsuario.recibeValor(miCuenta4);
  cout << miCuenta4.getSaldo() << endl;
  // Ambito de vida de las referencias como parametros de un método
  Cuenta miCuenta3("130709", 100000);
  cout << "mi cuenta 3: 100000 - "<<miCuenta3.getSaldo() << endl;
  miPrimerUsuario.recibeReferencia(miCuenta3);
  cout << "mi cuenta 3: 90000 - "<<miCuenta3.getSaldo() << endl;
  miSegundoUsuario.recibeReferencia(miCuenta3);
  cout <<"mi cuenta 3: 80000 - "<< miCuenta3.getSaldo() << endl;

  
  // Punteros
  int salario = 2500000;
  int *pagar;       // pagar es un puntero que apunta a enteros
  pagar = &salario; // hemos amarrado la piola pagar a salario
  //int *pagar = &salario;	// se puede declarar y amarrar a la vez
  cout << pagar<< endl;
  //Mover la dirección de memotia Cuidado!!
  //pagar++;
  //cout << pagar<< endl;
  cout << (*pagar)<< endl;
  //(*pagar)=(*pagar)*10;
  (*pagar)*=10;
  cout << (*pagar)<< endl;
  cout<<pagar<<endl;

  
  //Punteros a objetos
  cout<<"Punteros"<<endl;
  Cuenta miCuenta5("1307087", 10); 
  Cuenta *laCuenta= &miCuenta5;
  cout<<miCuenta5.getSaldo()<<endl; 
  laCuenta->retirarDinero(2);
  cout<<laCuenta->getSaldo()<<endl; 
  miCuenta5.retirarDinero(2);
  cout<<laCuenta->getSaldo()<<endl; 
  
  // Ambito de vida de las punteros como parametros de un método
  Cuenta miCuenta6("130705", 10000000000);
  cout << miCuenta6.getSaldo() << endl;
  miPrimerUsuario.recibePuntero(&miCuenta6);
  cout << miCuenta6.getSaldo() << endl;
  
  // Paso de Mensajes
  //Por referencia a constante
  Cuenta miCuenta7("130707", 10000000000);
  miPrimerUsuario.recibeConstanteReferencia(miCuenta7);
  //Por puntero a constante
  Cuenta miCuenta8("130708", 80000000000);
  miPrimerUsuario.recibeConstantePunteroExp(&miCuenta8);
  cout<<"aca"<<endl;
  //Salida por valor
  cout<<miPrimerUsuario.getIdentificacion()<<endl;
  //Entrada salida por referencias
  miPrimerUsuario.recibeReferencia(miCuenta3);
  cout<<miCuenta3.getSaldo()<<endl;
  //Entrada salida por Puntero
  miPrimerUsuario.recibePuntero(&miCuenta3);
  cout<<miCuenta3.getSaldo()<<endl;
  
}