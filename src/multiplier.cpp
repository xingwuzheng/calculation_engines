#include "multiplier.h"
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

template <typename T>
Multiplier<T>::Multiplier() {};

template <typename T>
Multiplier<T>:: ~Multiplier(){};

template <typename T>
double Multiplier<T>::compute(const vector<T>& inputs){
  double threshold = floor(log10(numeric_limits<double>::max()));
  double production = 1.0;

  for(size_t i = 0; i < inputs.size(); ++i){

    double m1 = log10(production);
    double cur = double(inputs[i]);
    double m2 = log10(cur);
    
    // check for overflow
    if(m1 + m2 > threshold){
      throw "Multiplication overflow";
    }
    else{
      production *= cur;
    }
  }
  return production;
}


template class Multiplier<int>;
template class Multiplier<float>;
template class Multiplier<double>;
