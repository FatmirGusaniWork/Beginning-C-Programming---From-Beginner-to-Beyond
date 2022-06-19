/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 12.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * CONDITIONAL OPERATOR
 * (cond_expr ? expr1 : expr2
 * cond_expr evaluates to boolean expression.
 * - if cond_expr is true then the value of expr1 is retuened.
 * - if cond-expr is false then the value of expr is returned.
 * 
 * Similar to if-else construct
 * Ternary operator
 * Very useful when used inline
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int num{};
    
    cout << "Enter an integer: ";
    cin >> num;
    
    if( num % 2 == 0 )
        cout << num << " is even" << endl;
    else
        cout << num << " is odd" << endl;
        
    cout << num << " is " << ( num % 2 == 0 ? "even" : "odd" ) << endl;
    
    int num1 {}, num2 {};
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    
    if( num1 != num2 ) {
        cout << "Largest: " << (( num1 > num2) ? num1 : num2 ) << endl;
        cout << "Smallest: " << (( num1 < num2) ? num1 : num2 ) << endl;
    } else {
        cout << "The numbers are the same" << endl;
    }

    return 0;
}