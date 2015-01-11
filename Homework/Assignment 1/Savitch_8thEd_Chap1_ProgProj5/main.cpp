/* 
    File:   main.cpp
    Author: Hector A. Ramos
    Created on January 11, 2015, 12:17 PM
 Purpose: Homework Assignment 1 (Savitch, 8th Edition, Chapter 1, ProgProb5)
 */

#include <iostream>
using namespace std;

//Execution begins here!
int main(int argc, char** argv) {
    int int_one, int_two, total_sum, total_prod;
    cout<<"         Hello. \n";
    cout<<"Press return after entering a number. \n";
    cout<<"Enter the an integer:\n";
    cin>> int_one;
    cout<< "Enter a second integer:\n";
    cin>> int_two;
            
    total_sum = int_one + int_two;
    
    total_prod = int_one * int_two;
    
    cout<< "The sum of your integers is     = ";
    cout<< total_sum<<endl;
    cout<< "The product of your integers is = ";
    cout<< total_prod<<endl;
    cout<< "        Good-bye.\n";
    
    return 0;
}


