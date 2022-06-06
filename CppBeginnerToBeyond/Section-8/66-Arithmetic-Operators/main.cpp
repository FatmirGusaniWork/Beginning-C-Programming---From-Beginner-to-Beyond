/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 01.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Arithmetic Operators
 * + Addition
 * - Subtraction
 * * Multiplication
 * / Division
 * % Modulo or remainder (works only with integers)
 * +, -, * and / operators are overloaded to work with multiple types such as int, double etc.
 * =================================================================
 */
 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
    
    int num1 {200};
    int num2 {100};
    
    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    
    // Arithmetic Operators ( + ) //
    int result {0};
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    
    // Arithmetic Operators ( - ) //
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
    
    // Arithmetic Operators ( * ) //
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    
    // Arithmetic Operators ( / ) //
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
    
    // Arithmetic Operators ( % ) // 200 Divied by 100 = 2 remainder 0, % Operator is only interested in the reminader number.
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;
    
    num1 = 10;
    num2 = 3;
    
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    result = num1 * 10 + num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    cout << 5/10 << endl;
    
    cout << 5.0/10.0 << endl;
    
    return 0;
}