/* 
   File:   main.cpp
   Author: Hector A. Ramos
   Created on January 8, 2015, 7:45 PM
   Purpose: Homework Assignment (Gaddis, 7th Ed., Chapter 2, Problem 12)
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const unsigned short CVFTACS=43560;//Conversion 
//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
  //Declare variables
    float inSqFt, outAcrs;
    //Prompt for input
    cout<<"Input the number of square feet"<<endl;
    cout<<"to convert to Acres"<<endl;
    cin>>inSqFt;
    //Calculate Acres
    outAcrs=inSqFt/CVFTACS;
    //Output the results
    cout<<inSqFt<<"(sq feet) = ";
    cout<<outAcrs<<"(acres)"<<endl;
    //Exit stage right!
    return 0;
}

