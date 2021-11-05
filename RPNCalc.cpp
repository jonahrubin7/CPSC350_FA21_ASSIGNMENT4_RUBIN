#include "RPNCalc.h" //import header file

RPNCalc::RPNCalc(){ //constructor

}

RPNCalc::~RPNCalc(){ //destructor

}

int RPNCalc::calc(){
  int value1 = 0; //create variables
  int value2 = 0;
  char num = '\0';
  int numValue = 0;
  string input;
  GenStack<int>*stack = new GenStack<int>(); //create instance of a stack
  std::cout << "Type your calculations in postfix notation with spaces between each input" << endl;
  cin.ignore();
  std::getline(std::cin,input); // read in line from user
  cout << endl;
  for(int i = 0; i< input.size(); i++){ //iterate through the input
    if(input[i] == ' '){
      continue;
    }
    else if(input[i] == '+'){ //add inputs
      value1 = stack->pop();
      value2 = stack->pop();
      product = (value2 + value1);
      stack->push(product); //push them back onto stack
    }
    else if(input[i] == '-'){ //subtract inputs
      value1 = stack->pop();
      value2 = stack->pop();
      product = (value2 - value1);
      stack->push(product);
    }

    else if(input[i] == '*'){ //multiply inputs
      value1 = stack->pop();
      value2 = stack->pop();
      product = (value2 * value1);
      stack->push(product);
    }

    else if(input[i] == '/'){ //divide inputs
      value1 = stack->pop();
      value2 = stack->pop();
      product = (value2 / value1);
      stack->push(product);
    }

    else if(input[i] == '%'){ //gives remainder
      value1 = stack->pop();
      value2 = stack->pop();
      product = (value2 % value1);
      stack->push(product);
    }
    else if(input[i] != '+' || input[i] != '-' || input[i] != '*' || input[i] != '/' || input[i] != '%'){ // if its anumber
      num = input[i];
      numValue = num - '0'; // make it an int

      while(input[i+1] != ' '){ //get the whole number
        numValue = numValue *10 + int(input[i+1] - '0');
        i++;
      }
      stack->push(numValue);
    }

  }

  if(stack->getSize() == 1){ //return the final number
    return stack->pop();
  }
  else{
    cout << "You entered postfix notation wrong" <<endl; //if input is wrong 
  }
}
