/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 04.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * The == and != operators
 * Conpares the value of 2 expressions
 * Evaluates to a boolean (True or False, 1 or 0).
 * Commonly used in control flow statement
 * 
 * exper1 == exper2     (true if experssion1 and expression2 are equal value)
 * exper1 != exper2     (true if experssion1 does not equal to expression2)
 * 100 == 200           (always evaluate to false because 100 will never be 200)
 * num1 != num2         (true if num1 does not equal to num2)
 * bool result {false};
 * result = (100 == 50+50);
 * result = (num1 != num2);
 * 
 * cout << (num1 == num2) << endl;      // 0 or 1
 * cout << std::boolalpha;
 * cout << (num1 == num2) << endl;      // true or false
 * cout << std::noboolaplha;
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;


int main() {
    
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1{}, num2{};
    
    cout << boolalpha;
    
    cout << "=================================================================" << endl;
    
    cout << "Enter two integers separated by a spaces: ";
    cin >> num1 >> num2;
    
    equal_result = {num1 == num2};
    not_equal_result = {num1 != num2};
    
    cout << "Conparision result (equals): " << equal_result << endl;
    cout << "Conparision result (not equals): " << not_equal_result << endl;
    
    cout << "=================================================================" << endl;
    
    char char1{}, char2{};
    
    cout << "Enter two character separated by a space: ";
    cin >> char1 >> char2;
    
    equal_result = {char1 == char2};
    not_equal_result = {char1 != char2};
    
    cout << "Conparision result (equals): " << equal_result << endl;
    cout << "Conparision result (not equals): " << not_equal_result << endl;
    
    cout << "=================================================================" << endl;
    
    double double1{}, double2{};
    
    cout << "Enter two double separated by a space: ";
    cin >> double1 >> double2;
    
    equal_result = {double1 == double2};
    not_equal_result = {double1 != double2};
    
    cout << "Conparision result (equals): " << equal_result << endl;
    cout << "Conparision result (not equals): " << not_equal_result << endl;
    
    cout << "=================================================================" << endl;
    
    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> double1;
    
    equal_result = {num1 == double1};
    not_equal_result = {num1 != double1};
    
    cout << "Conparision result (equals): " << equal_result << endl;
    cout << "Conparision result (not equals): " << not_equal_result << endl;
    
    cout << "=================================================================" << endl;
    
    return 0;
}