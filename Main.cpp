#include "FileProcessor.h" //import needed files
#include "RPNCalc.h"

using namespace std;

int main(){ //main method
  string inType = "";
  string inputFile = "";
  bool run = true;
  while(run){
    cout << "If you would like to use the calculator, type: RPN" << endl;
    cout << "If you would like to sequence your DNA, type: DNA" << endl;
    cin >> inType; //take in use type
    transform(inType.begin(), inType.end(), inType.begin(), ::toupper); //make it uppercase
    if(inType == "RPN"){
      RPNCalc *rpn = new RPNCalc(); //create instance of calculator
      cout<< rpn->calc() << endl; // print output
      run = false;
    }
    else if(inType == "DNA"){
      cout << "Please input filename that contains genetic code" << endl;
      cin >> inputFile; //get input file

      FileProcessor *fp = new FileProcessor(); //create instance of the file processor

      fp->processFile(inputFile); // use it
      cout << "Proccessed file" << endl;
      run = false;
    }
    else{
      cout << "Please insert a correct input" << endl; //error handling
    }
  }
}
