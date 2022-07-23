/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 04.07.2022 
 * =================================================================
 * Notes
 * =================================================================
 * What IS A FUNCTION?
 * 
 * C++ programs
 *  - C++ Standard Libraries ( function and classes )
 *  - Third-Party libraries ( function and classes )
 *  - Our own functions and classes
 * 
 * Function allow the modularization of a program
 *  - Separate code into logical self-contained units
 *  - These units can be reused
 * =================================================================
 * BOSS/WORKER ANALOGY
 * 
 * Write your code to the function specification
 * Understand what the function does
 * Understand What information the function needs
 * Understand what the functions return
 * Understand any error the function may produce
 * Understand any performance constraints
 * 
 * Dont worry about HOW the function works internally
 *  - Unless you are the one writing the function.
 * =================================================================
 * USER-DEFINED FUCTIONS
 * 
 * We can define our own functions

int add_number ( int a, int b ) {
    return a + b;
}

cout << add_numbers ( 20, 40 );
 * 
 * =================================================================
 * Retun zero if any of the arguments are negative
int add_number ( int a, int b ) {
    if ( a < 0 || b < 0 )
        return 0;
    else
        return a + b;

 * =================================================================
 */

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    double num {};
    
    cout << "Enter a number (double) : ";
    cin >> num;
    
    cout << "The sqrt of " << num << " is : " << sqrt( num ) << endl;
    cout << "The cubed root of " << num << " is : " << cbrt( num ) << endl;
    
    cout << "The sine of " << num << " is : " << sin( num ) << endl;
    cout << "The cosine of " << num << " is : " << cos( num ) << endl;
    
    cout << "The ceil of " << num << " is : " << ceil( num ) << endl;
    cout << "The floor of " << num << " is : " << floor( num ) << endl;
    cout << "The round of " << num << " is : " << round( num ) << endl;
    
    double power {};
    cout << "\nEnter a power to raise " << num << " to : ";
    cin >> power;
    cout << num << " raised to the " << power << " power is : " << pow( num, power ) << endl;
    
    return 0;
}