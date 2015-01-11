/* 
    File:   main.cpp
    Author: Hector A. Ramos
    Created on January 11, 2015, 12:49 PM
 Purpose: Homework Assignment 1 (Savitch, 8th Edition, Chapter 1, ProgProb10)
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
//Declare Variables
    char c;//character
//Prompt user for a character
    
    cout<<"         Hello. \n"<<endl;
    cout<<" This program will output a large block letter \"C\""<<endl;
    cout<<"Input a character "<<endl;
    cin>> c;
    cout<< endl <<endl;
//Output a large letter "C" with a character user enters
    cout<< "  " << " "<< c << c << c <<endl;
    cout<< "  " << c << "   " << c <<endl;
    cout<< " " << c <<endl;
    cout<< " " << c <<endl;
    cout<< " " << c <<endl;
    cout<< " " << c <<endl;
    cout<< " " << c <<endl;
    cout<< "  " << c << "   " << c <<endl;
    cout<< "  " << " "<< c << c << c <<endl;   
    return 0;
}


