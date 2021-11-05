#include <string>
#include<bits/stdc++.h>
#include "GenStack.h" //import files and packages

using namespace std; //standard namespace

class DNACompliment{ //DNA class
public:
  DNACompliment();
  ~DNACompliment();
  string compliment(string input); //compliment method
  string reverse(string input); //reverse method 
};
