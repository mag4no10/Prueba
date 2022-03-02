// AUTOR: Jonay Faas Garcia
// FECHA: 21-02-2022
// EMAIL: alu0101470948@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t


#include <iostream>
#include <cmath>

#include "rational_t.hpp"

int main() {
  // Creamos 3 objetos de la clase rational_t
  rational_t a(1, 2), b(3), c; 

  // Imprimimos tanto el valor como el numerador y denominador de cada objeto
  std::cout << "a.value()= " << a.value() << std::endl;
  std::cout << "b.value()= " << b.value() << std::endl;
  std::cout << "c.value()= " << c.value() << std::endl;

  std::cout << "a: ";
  a.write();
  std::cout << "b: ";
  b.write();

  c.read();
  std::cout << "c: ";
  c.write();

  // FASE II
  // Creamos 2 objetos de la clase rational_t
  rational_t x(1, 3), y(2, 3);

  // Imprimimos sus numeradores y numeradores
  x.write();
  y.write();

  // Comprobamos si son iguales, menor o igual que
  std::cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << std::endl; // Son iguales
  std::cout << "x < y? " << (x.is_greater(y) ? "true" : "false") << std::endl; // x es mayor que y
  std::cout << "x > y? " << (x.is_less(y) ? "true" : "false") << std::endl; // x es menor que y

  // FASE III
  // Suma
  std::cout << "a + b: ";
  a.add(b).write();
  
  // Resta
  std::cout << "b - a: ";
  b.substract(a).write();

  // Multiplicacion
  std::cout << "a * b: ";
  a.multiply(b).write();
  
  // Division
  std::cout << "a / b: ";
  a.divide(b).write();
  
  return 0;
}