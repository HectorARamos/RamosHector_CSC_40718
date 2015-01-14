/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 13, 2015, 9:15 PM
 */

//System Libraries
#include <iostream>//Keyboard/Monitot I/O
#include <cstdlib> //Random rand(),srand()
#include <ctime> //Time Functions
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Randomly initialize a variable
    srand(static_cast<unsigned int>(time)(0));
    bool torf=rand()%2;
    //Output the random boolean
    cout<<"We randomly chose " <<torf<<endl;
    //Illustrate the ternary operator
    cout<<"The random boolean is ";
    cout<<(torf? "Odd":"Even")<<endl;
    //Illustrate the statement
    cout<<"The random boolean is ";
    if(torf==1)cout<<"Odd"<<endl;
    if(torf==0)cout<<"Even"<<endl;
    
    return 0;
}

