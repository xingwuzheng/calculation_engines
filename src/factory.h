#ifndef CALCULATION_ENGINES_FACTORY_H
#define CALCULATION_ENGINES_FACTORY_H


#include "divider.h"
#include "multiplier.h"
#include "factory_entry.h"

template <typename T>

Factory<T> *Factory<T>::select(std::string &name) {

  if (name.compare("Multiplier") == 0) {
    return  new Multiplier<T>;
  }
  else if (name.compare("Divider") == 0) {
    return new Divider<T>;
  }
  else{
    throw "Undefined Engine!";
  }
}

#endif //CALCULATION_ENGINES_FACTORY
