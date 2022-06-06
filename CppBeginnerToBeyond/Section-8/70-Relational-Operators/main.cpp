/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 05.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Relational Operaors
 * >    Greater then.
 * >=   Greater then or equal to.
 * <    Less then.
 * <=   Less Them or equal to.
 * <=>  Three-way-comparison (C++20)
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;

int main() {
   
    int num1{}, num2{};
    
    cout << boolalpha;
    cout << "Enter 2 integers separarted by a space: ";
    cin >> num1 >> num2;
    
    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;
    
    const int lower {10};
    const int upper {20};
    
    cout << "\nEnter a integer that is greater then " << lower << " : ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;
    
    cout << "\nEnter a integer that is less then or equal to " << upper << " : ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 > upper) << endl;
    
    return 0;
}