/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 02.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Increment Operator ( ++ )
 * Decrement Operator ( -- )
 * 
 * Increments or decrements it's operand by 1.
 * Can be used with integers, floats points type and pointers.
 * 
 * Prefix ++nun
 * Postfix nun++
 * 
 * Don't overuse this operator
 * ALERT!!! Never use it twice for the same variable in the same statement
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int counter {10};
    int result {0};
    
    // Example 1 - Simple increment //
    
    // cout << "Counter: " << counter << endl;
    
    //ounter = counter + 1;
    //cout << "Counter: " << counter << endl;
    
    // counter++;
    // cout << "Counter: " << counter << endl;
    
    // ++counter;
    // cout << "Counter: " << counter << endl;
    
    // Example 2 - Preincrement
    
    counter = 10;
    result = 0;
    
    // Note the pre increment //
    
    // cout << "Counter: " << counter << endl;

    // counter + 1, make counter 11 and then assigning it to result // result = 11, counter = 11 //
    // result = ++counter;
    
    // result = counter, then counter + 1 // result = 10, counter = 11 //
    // result = counter++;
    
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;
    
    // Example 4
    
    // counter = 10;
    // result = 0;
    
    // cout << "Counter :" << counter << endl;
    
    // Note the preincrement //
    // counter + 1,  result = counter + 10. // counter = 11, result = 21 //
    // result = ++counter + 10;
    
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;
    
    
    // Example 5
    
    counter = 10;
    result = 0;
    
    cout << "Counter :" << counter << endl;
    
    // Note the postincrement //
    // result = counter + 10, counter + 1 // result = 20, counter = 11
    result = counter++ + 10;
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    
    
    
    return 0;
}