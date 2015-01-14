/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 13, 2015, 8:48 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int CNVHRMN=60;//Conversion from hours to minutes
const int CNVMNSC=60;//Conversion from Minutes to Seconds
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float mph;//Miles per hour on a treadmill
    float hpm;//Pace as hours per mile
    float fmpm;//Miles per minute
    int   impm;//Miles per minute as integer
    float fmspm;//Fraction left for seconds per mile
    //Prompt for the input
    cout<<"How many miles are you running"<<endl;
    cout<<"in an hour?"<<endl;
    cout<<"Format answer as a float"<<endl;
    cin>>mph;
    //Calculate the relevant pace
    hpm=1/mph;
    fmpm=hpm*CNVHRMN;
    impm=static_cast<int>(fmpm);
    fmspm=(fmpm-impm)*CNVMNSC;
    //Output the result
    cout<<mph<<" = ";
    cout<<impm<<" (mins) ";
    cout<<fmspm<<" (secs)"<<endl;
    //Exit stage right
    return 0;
}

