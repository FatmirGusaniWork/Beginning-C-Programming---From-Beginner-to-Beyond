/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 04.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * C++ operation occur on same type operands.
 * If operands are of different types, C++ will try and convert one of the operand so that it matches the other.
 * Important since it could affect calculation result.
 * C++ will attempt to automatically convert types (coercion). If it can't, a compiler error will occur.
 * 
 * Higher vs Lower types are based on the size of the values the type can hold
 * - Long double, double, floats, unsigned long, long, unsigned int, int.
 * - Short and char types are always converted to int.
 * Type Coercion: conversion of one operand to another data type.
 * Promotion: Conversion to a higher type.
 * - Used in mathematical expressins.
 * Demotion: Conversion to lower type.
 * - Used with assignment to lower type.
 * =================================================================
 * Ask the user to enter 3 integers.
 * Calculate the sun of th integers then calculate the average of the 3 integers.
 * Display the 3 integers entered, the sum of the 3 integers and the average of the 3 integers.
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int total {};
    int num1{}, num2{}, num3{};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    // Promotion: Conversion to a higher type. int to double using static_cast <double> ([int variable])
    average = static_cast<double> (total) / count;
    
    cout << "The three numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the number is: " << average << endl;
    
    return 0;
}