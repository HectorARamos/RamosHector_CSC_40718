/* 
   File:   main.cpp
   Author: Hector A. Ramos
   Created on January 8, 2015, 8:15 PM
   Purpose: Homework Assignment (Gaddis, 7th Edition, Chapter 2, Problem 11)
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
  //Declare and Initialize Variables
    float gasTank=20;//max gallons in our gas tank
    float inTown=21.5;//In town gas miles per gallon
    float onHway=26.8;//Highway miles per gallon
    //Calculate the total miles in an out of town
    float disTown=gasTank*inTown;
    float disHway=gasTank*onHway;
    //Output the results
    cout<<"Distance in Town on a tank of gas    = ";
    cout<<disTown<<"(miles)"<<endl;
    cout<<"Distance on Highway on a tank of gas = ";
    cout<<disHway<<"(miles)"<<endl;

    //Exit stage right!
    return 0;
}

