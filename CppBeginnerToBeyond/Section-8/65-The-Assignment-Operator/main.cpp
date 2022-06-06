/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 01.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * C++ has a rich set of operators.
 * - unary, binary, ternary. Most are binary.
 * 
 * Assignment ( Used to modify the value of some objects by assigning a new value to it. )
 * Arithmetic ( Used to perform mathematical operations on operands. )
 * Increment/Decrement (A mixture of Assignment and arithmetic. )
 * Relational ( Allow to compare the values of two objects. [equal too, not equal too, less then, greater then])
 * Logical ( Used to test for logical or booleam conditions. [NOT, AND, OR operators])
 * Member Access ( Allows Acess to a specific member. [Array subscript operators, pointers])
 * Others ( Operators that dont fit in well with the above categories.)
 * 
 * ///////////////////////////////////////////////////////////////////
 * 
 * Assignment Operator( = )
 * lhs = rhs
 * rhs is an expression that evaluated to a value.
 * The value of the rhs is stored to the lhs, the value of rhs must be a type compatible with the lhs, the lhs must be assignable
 * Assignment expression is evaluated to what was just assigned. More then one variable can we assignd in a single statement.
 * =================================================================
 */
 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    // Initialization Value //
    int num1 {10};
    int num2 {20};
    
    // Assignment Value // RIGHT to LEFT ( 1000 to num2, then num2 to num1)
    num1 = num2 = 1000;
    
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    
    return 0;
}