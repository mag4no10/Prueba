// AUTOR: Jonay Faas Garcia
// FECHA: 21-02-2022
// EMAIL: alu0101470948@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

const double kEpsilon{0.000001}; 

class rational_t {
 public:
  rational_t(const int = 0, const int = 1);
  ~rational_t();
  
  // getters
  int get_num() const;
  int get_den() const;
  
  // setters
  void set_num(const int);
  void set_den(const int);

  double value() const;

  // FASE II
  bool is_equal(const rational_t&, const double precision = kEpsilon) const;
  bool is_greater(const rational_t&, const double precision = kEpsilon) const;
  bool is_less(const rational_t&, const double precision = kEpsilon) const;
  
  // FASE III
  rational_t add(const rational_t&);
  rational_t substract(const rational_t&);
  rational_t multiply(const rational_t&);
  rational_t divide(const rational_t&);
  
  void write(std::ostream& = std::cout) const;
  void read(std::istream& = std::cin);
  
 private:
  int numerador_, denominador_;
};
