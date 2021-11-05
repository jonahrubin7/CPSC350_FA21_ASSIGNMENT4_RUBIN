#include <iostream> // include libraries you will need
#include <fstream>
#include "DNACompliment.h"

using namespace std; //always standard namespace

class FileProcessor{ // create file processor class
public: //public
  FileProcessor(); //constructor
  ~FileProcessor();  //destructor
  void processFile(string inputFile); //define method that processes the file
private: //private variables
  ifstream inFS; //read in the file
  ofstream outFS;  //write to a file
  string input;
};
