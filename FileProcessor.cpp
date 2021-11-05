#include "FileProcessor.h" //connect to all the other classes

FileProcessor::FileProcessor(){ //constructor

}
FileProcessor::~FileProcessor(){ //destructor

}

void FileProcessor::processFile(string inputFile){ //create method that processes files
    string input = "";
    DNACompliment *dna = new DNACompliment();  //pointer to new DNA class
    string comp = "";

    inFS.open(inputFile); // open the input file
    outFS.open("dnaoutput.txt");  // open the write to file
    if(!inFS.is_open()){ //if the file cant be opened
      cout<< "Oopsies, This file could not be opened, try again with a better file";
      exit(1); //exit the program
    }
    while(!inFS.eof()){ //while the file isnt the end of the line
      inFS >> input; //read from the file
      if(!inFS.fail()){ //if reading from the file doesnt fail
        comp = dna->compliment(input); //save compliment output
        outFS <<  comp << endl; // print the compliment
        outFS << dna->reverse(comp) << endl; //call reverse on compliment output
        outFS << endl;

      }
    }
    inFS.close(); //close both files
    outFS.close();
    delete dna; //delete instance of class Translator
}
