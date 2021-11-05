#include <iostream>
#include <fstream>
#include <string>
#include "GenStack.h" //import files and packages that are needed

using namespace std;

class RPNCalc{ //class for calculator
public:
  RPNCalc();
  ~RPNCalc();
  int calc(); //method called calc
  int product;
private:
  string input; //member variable 
};
