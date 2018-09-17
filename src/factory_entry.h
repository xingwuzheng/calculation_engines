#ifndef CALCULATION_ENGINES_FACTORY_ENTRY_H
#define CALCULATION_ENGINES_FACTORY_ENTRY_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Factory{
public:

  Factory(){};

  virtual ~Factory(){};

  static Factory *select(string& name);
  virtual double compute(const vector<T>& inputs) = 0;

};

#endif //CALCULATION_ENGINES_FACTORY_ENTRY_H
