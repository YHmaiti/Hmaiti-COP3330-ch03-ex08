/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Yohan Hmaiti
 */

// include the adequate header file that contains the main libraries imported
#include "std_lib_facilities.h"

// the helper function prototype was declared in the Header File!!!!!!

// use the standard namespace
using namespace std;

// driver function main
int main(void) {

    // create a variable to hold the value inputted by the user as integer
    int value;

    // prompt the user for the Integer value and then store it in the appropriate variable
    cout << "Enter an integer value: ";
    cin >> value;

    // call the helper function that will evaluate the integer using conditionals and print if it is
    // either odd or even
    helper(value);

    // end of the main function
    return 0;
}

// void function that evaluates if the integer passed to it is either an even or odd number
// then prints the appropriate message accordingly
void helper(int value) {

    // use a conditional involving modulo calculation to determine if a number is odd or even
    // if the Integer mod 2 is equal to 0 then it is even otherwise odd
    if (value % 2 == 0)
    {
        cout << "The integer value: " << value << " is an even number.";
    }
    else
    {
        cout << "The integer value: " << value << " is an odd number.";
    }
    
}
