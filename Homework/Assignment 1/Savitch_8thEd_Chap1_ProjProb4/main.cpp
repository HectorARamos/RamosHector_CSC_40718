/* 
    File:   main.cpp
    Author: Hector A. Ramos
    Created on January 10, 2015, 11:00 AM
 Purpose: Homework Assignment 1 (Savitch, 8th Edition, Chapter 1, ProjProb4)
 */

#include <iostream>
using namespace std;

//Execution begins here!
int main(int argc, char** argv) {
    int number_of_pods, peas_per_pod, total_peas;
    cout<<"Hello. \n";
    cout<<"Press return after entering a number. \n";
    cout<<"Enter the number of pods:\n";
    cin>> number_of_pods;
    cout<< "Enter the number of peas in a pod:\n";
    cin>> peas_per_pod;
            
    total_peas = number_of_pods + peas_per_pod;//Change from ProjProb3: Division sign to addition sigh. Program will run but the output is incorrect (Logic Error).
    
    cout<< "If you have ";
    cout<< number_of_pods;
    cout<< " pea pods\n";
    cout<< "and ";
    cout<< peas_per_pod;
    cout<< " peas in each pod,then \n";
    cout<< "you have ";
    cout<< total_peas;
    cout<< " peas in all the pods. \n";
    cout<< "Good-bye. \n";
    
    return 0;
}


