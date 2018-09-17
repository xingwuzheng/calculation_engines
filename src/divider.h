#ifndef CALCULATION_ENGINES_DIVIDER_H
#define CALCULATION_ENGINES_DIVIDER_H

#include <iostream>
#include "factory_entry.h"

template <typename T>
class Divider: public Factory<T>{
public:
  Divider();
  virtual ~Divider();
  double compute(const vector<T>& inputs);
};

#endif //CALCULATION_ENGINES_DIVIDER_H
