// Name : Fatmir Gusani //
// Date : 21.05.2022 //

/* 
 * Section 4 Challenge
 * ===================
 * 
 * Create a C++ program that asks the user for their favorite number between 1 and 100
 * then read this number from the console.
 * 
 * Suppose the user enters 24.
 * 
 * Then display the following to the console
 * 
 * Amazing!! thats my favorite number too!
 * No really!!, 24 is my favorite number!
 * 
 * below are 2 sample runs of the program:
 * =======================================
 * Enter your favorite number between 1 and 100: 24
 * Amazing!! that's my favorite number too!
 * No really!!, 24 is my favorite number"
 * 
 * My code works and runs, challenge complete
 */



#include <iostream>

int main() {
    
    int favorite_number;
    
    std::cout << "Enter your favorite number between 1 and 100 : ";
    
    std::cin >> favorite_number;
    
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    
    std::cout << "No Really!!, " << favorite_number << " is my favorite number!";
    
    return 0;
}