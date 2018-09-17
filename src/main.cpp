/*
	Xingwu Zheng
	2018-9-14
*/

#include <iostream>
#include <vector>
#include <string>
#include "factory.h"
#include "parsing.h"

using namespace std;

int main(int argc, char* argv[]) {
  vector<double> inputs; // get the inputs vector

  if (!parsingInputs(inputs, argc, argv)) {
    cout << "Illegal Inputs!" <<endl;
    return 0; // If fail just return. 
  }

  string name = argv[1];
 
  if (!inputs.empty()) {
    try {
      Factory<double> *f = Factory<double>::select(name);
      double results = f->compute(inputs);
      cout << results <<endl;
    }
    catch (const char *errmsg) {
      cout << errmsg << endl;
    }
  }

  return 0;


}
