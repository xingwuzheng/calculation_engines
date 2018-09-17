#include <iostream>
#include <vector>
#include "divider.h"

using namespace std;

template <typename T>
Divider<T>::Divider() {};

template <typename T>
Divider<T>:: ~Divider(){};

template <typename T>
double Divider<T>::compute(const vector<T>& inputs){
  double division = inputs[0];
  for(int i=1; i< inputs.size(); i++){
    if(inputs[i] == 0){
      throw "Inputs contain ZERO dividor!";
    }
    else{
      division /= double(inputs[i]);
    }
  }
  return division;
}

template class Divider<int>;
template class Divider<float>;
template class Divider<double>;
