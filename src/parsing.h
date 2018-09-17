#ifndef CALCULATION_ENGINES_PARSING_H
#define CALCULATION_ENGINES_PARSING_H
#include <fstream>  
using namespace std;

bool parsingTxt(string const & source, string const & ending)
{
  if (ending.size() > source.size()) return false;
  return equal(ending.rbegin(), ending.rend(), source.rbegin());
}

bool filesInputs(vector <string>& files, vector <double>& inputs){
  if (files.empty()){
       cout<<"No input files!"<<endl;
    return false;
  }

  for(int i=0; i<files.size(); i++){
    fstream myfile(files[i].c_str(), std::ios_base::in);

    if(!myfile){
      return false;
    }

    double a;
    while (myfile >> a)
    {
      inputs.push_back(a);
    }
  }

  return true;

}

bool parsingInputs(std::vector <double>& inputs, int argc, char* argv[]){
	if (argc < 3){
	cout << "Not enough arguments!"<<endl;
    return false;
  }
  else{
    std::string name = argv[1];
    if (name != "Multiplier" && name != "Divider" ){
      cout << "Invalid Engine!" << endl;
      return false;
    }
  }

  string arg;
  double n;
  string::size_type sz;   
  string ending = ".txt";
  vector<string> files;

  arg = argv[2];
  if (arg == "input"){
    
    for (int i=3; i < argc; i++){
      arg = argv[i];
      if (parsingTxt(arg, ending)){  
        files.push_back(arg); // parsing each txt into one vector files
      }
      else{
        cout<<"Illegal files input!"<<endl;
        return false;
      }
    }

    if (!filesInputs(files, inputs)){ //transfer the files into inputs
      return false;
    } 
    return true;
  }
 
	for(int i=2; i< argc; i++){
		arg = argv[i];
		try {
			n = stod(arg, &sz);
		}
		catch (exception& e){
			cout <<"Illegal integers inputs!" << endl;
			return false;
		}
		inputs.push_back(n);
	}

	return true;
}




#endif  // CALCULATION_ENGINES_PARSING_H
