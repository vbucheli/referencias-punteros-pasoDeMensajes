# Manejo de Referencias, Punteros y Paso de Mensajes en C++

## Descripción
Este proyecto demuestra el uso de referencias, punteros y el paso de mensajes en C++ mediante la simulación de un sistema bancario. A través de diferentes ejemplos, se exploran los ámbitos de vida de variables, objetos, referencias y punteros, y cómo se pueden utilizar en funciones y clases.

## Estructura del Proyecto
El proyecto incluye las siguientes clases:
- **Banco**: Representa un banco con cuentas y usuarios asociados.
- **Cuenta**: Modela una cuenta bancaria con operaciones como retirar dinero.
- **Usuario**: Representa a un usuario con una cuenta bancaria y métodos para interactuar con ella.

El código principal se encuentra en `Main.cpp` y demuestra:
- Uso de **referencias** para manipulación de variables y objetos.
- Uso de **punteros** para acceder y modificar datos en memoria.
- **Paso de parámetros** por valor, referencia y puntero.

## Requisitos
Para compilar y ejecutar el proyecto, se requiere:
- Un compilador C++ compatible con el estándar C++11 o superior (g++, clang++, MSVC, etc.).
- Un entorno de desarrollo como Visual Studio Code, CLion o cualquier otro de preferencia.

## Ejecución
Para compilar y ejecutar el código en Linux o macOS:
```sh
 g++ -o main Main.cpp Banco.cpp Cuenta.cpp Usuario.cpp -std=c++11
 ./main
```
En Windows (con MinGW):
```sh
g++ -o main.exe Main.cpp Banco.cpp Cuenta.cpp Usuario.cpp -std=c++11
main.exe
```

## Ejemplos de Uso
### Uso de Referencias
```cpp
int valor = 4;
int &meses = valor;
meses++;
cout << valor; // Imprime 5
```
### Uso de Punteros
```cpp
int salario = 2500000;
int *pagar = &salario;
*pagar *= 10;
cout << *pagar; // Imprime 25000000
```

### Paso de Mensajes (Parámetros por Referencia y Punter
