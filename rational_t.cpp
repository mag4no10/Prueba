// AUTOR: Jonay Faas Garcia
// FECHA: 21-02-2022
// EMAIL: alu0101470948@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include "rational_t.hpp"

// constructor
rational_t::rational_t(const int numerador, const int denominador) {
  assert(denominador != 0);
  numerador_ = numerador, denominador_ = denominador;
}


// destructor
rational_t::~rational_t(){

}


// getters
int rational_t::get_num() const {
  return numerador_;
}



int rational_t::get_den() const {
  return denominador_;
}


// setters
void rational_t::set_num(const int numerador) {
  numerador_ = numerador;
}


 
void rational_t::set_den(const int denominador) {
  assert(denominador != 0);
  denominador_ = denominador;
}


// metodo numero (forma no fraccional)
double rational_t::value() const { 
  return double(get_num()) / get_den();
}


// comparaciones
bool rational_t::is_equal(const rational_t& racional1, const double precision) const { 
  if ((fabs((racional1.value() - this->value())) < precision) && (fabs(this->get_den()) != 0 || fabs(racional1.get_den()) != 0)) {
    return true;
  }else{
    return false;
  }
}



bool rational_t::is_greater(const rational_t& racional1, const double precision) const {
  if (((racional1.value() - this->value()) > precision) && (fabs(this->get_den()) != 0 || fabs(racional1.get_den()) != 0)) {
    return true;
  }else{
    return false;
  }
}



bool rational_t::is_less(const rational_t& racional1, const double precision) const {
  if (((this->value() - racional1.value()) > precision) && (fabs(this->get_den()) != 0 || fabs(racional1.get_den()) != 0)) {
    return true;
  }else{
    return false;
  }
}


// operaciones
rational_t rational_t::add(const rational_t& racional1) {
  rational_t resultado(0);
  resultado.set_num(((this)->get_num() * racional1.get_den()) + (this->get_den() * racional1.get_num()));
  resultado.set_den(this->get_den() * racional1.get_den());
  return resultado;
}



rational_t rational_t::substract(const rational_t& racional1) {
  rational_t resultado(0);
  resultado.set_num(((this)->get_den() * racional1.get_num()) - (this->get_num() * racional1.get_den()));
  resultado.set_den(this->get_den() * racional1.get_den());
  return resultado;
}



rational_t rational_t::multiply(const rational_t& racional1) {
  rational_t resultado(0);
  resultado.set_num(this->get_num() * racional1.get_num());
  resultado.set_den(this->get_den() * racional1.get_den());
  return resultado;
}



rational_t rational_t::divide(const rational_t& racional1) {
  rational_t resultado(0);
  resultado.set_num(this->get_num() * racional1.get_den());
  resultado.set_den(this->get_den() * racional1.get_num());
  return resultado;
}



// Entrada y Salida
void rational_t::write(std::ostream& os) const {
  os << get_num() << "/" << get_den() << "= " << value() << std::endl;
}



void  rational_t::read(std::istream& is) {
  std::cout << "Numerador? ";
  is >> numerador_;
  std::cout << "Denominador? ";
  is >> denominador_;
  assert(denominador_ != 0);
}
