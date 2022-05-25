/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 25.05.2022 
 * =================================================================
 * Notes
 * =================================================================
 * The sizeof operator determines the size in bytes of a type or variable.
 * sizeof(int), sizeof(double), sizeof(some_veriable), sizeof some_variable.
 * you need <climits> library for int values and <cfloat> library for float values.
 * The climits and cfloat include files contain size and precision information about your implementation of C++.
 * INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, FLT_MAX, FLT_MIN.
 * The about line above tells the user what the max/min value that the user can store in their specific machine.
 * 
 */
 
#include <iostream>
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    cout << "sizeof information" << endl;
    cout << "======================================" << endl;
    
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;
    
    cout << "======================================" << endl;
    
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;
    
    cout << "======================================" << endl;
    
    cout << "Minimum values" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;
    
    cout << "======================================" << endl;
    
    cout << "Maximum values" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;
    
    cout << "======================================" << endl;
    
    cout << "sizeof using variables names" << endl;
    
    int age {21};
    cout << "age is " << sizeof(age) << " bytes." << endl;
    // Or //
    cout << "age is " << sizeof age << " bytes." << endl;
    
    double wage {22.24};
    cout << "wage is " << sizeof(wage) << " bytes." << endl;
    // Or //
    cout << "wage is " << sizeof wage << " bytes." << endl;
    
    cout << "======================================" << endl;
    
    return 0;
}