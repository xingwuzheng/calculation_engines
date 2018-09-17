#ifndef CALCULATION_ENGINES_MULTIPLIER_H
#define CALCULATION_ENGINES_MULTIPLIER_H

#include <iostream>
#include "factory_entry.h"

template <typename T>
class Multiplier: public Factory<T>{

public:
  Multiplier();
  virtual ~Multiplier();
  double compute(const vector<T>& inputs);
};

#endif //CALCULATION_ENGINES_MULTIPLIER_H
