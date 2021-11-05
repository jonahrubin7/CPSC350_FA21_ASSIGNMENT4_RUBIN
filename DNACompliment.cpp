#include "DNACompliment.h" //import header file

using namespace std;

DNACompliment::DNACompliment(){ //constructor

}
DNACompliment::~DNACompliment(){ //destructor

}

string DNACompliment::compliment(string input){ //compliment method
  string newSeq = "";
  transform(newSeq.begin(), newSeq.end(), newSeq.begin(), ::toupper); //make it all uppercase

  for(int i = 0; i < input.size(); i++){ // Chcek input, create new sequence
    if(input[i] == 'A'){
      newSeq = newSeq + 'T';
    }
    else if(input[i] == 'T'){
      newSeq = newSeq + 'A';
    }
    else if(input[i] == 'G'){
      newSeq = newSeq + 'C';
    }
    else if(input[i] == 'C'){
      newSeq = newSeq + 'G';
    }
    else{
      return "Improper Sequence"; //error handling
      break;
    }
  }
  return newSeq; //return new sequence
}

string DNACompliment::reverse(string input){ //method to reverse the string
  string revSeq = "";
  char popChar = '\0';
  GenStack<char> *stack = new GenStack<char>(); //create new stack
  for(int i = 0; i<input.size(); i++){ //iterate thorugh string
    stack->push(input[i]);
  }
  for(int i = 0; i<input.size(); i++){ //iterate through stack
    popChar = stack->pop(); // issue
    revSeq = revSeq + popChar;
  }
  return revSeq; //return reversed string 
}
