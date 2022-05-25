/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 22.05.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Name Variables // Can contain letters, numbers and underscore
 * MUST begin with a letter or underscore // CANNOT begin with a number
 * CANNOT use C++ reserved keywords
 * CANNOT redeclare a name in the same scope // Remember that C++ is case sensitive
 * 
 * Use meaningful names // Not to long and not to short
 * Never use variables before initializing them
 * Declare variabes close to when you need them in your code
 * 
 * int age;         // uninitialized
 * int age = 21;    // C-Like initialization
 * int age (21);    // Constructor initialization
 * int age {21};    // C++11 list initialization syntax
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int room_width = 0;
    int room_length = 0;
    
    cout << "Enter the width of the room: ";
    
    cin >> room_width;
    
    cout << "Enter the length of the room: ";
    
    cin >> room_length;
    
    cout << "The area of the room is: " << room_width * room_length << " square feet" << endl;
    
    return 0;
}