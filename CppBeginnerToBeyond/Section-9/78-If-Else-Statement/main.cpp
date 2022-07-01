/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 10.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * IF - ELSE STATEMENT
 * 
 * If the expression is true, then execute statement 1.
 * If the expression is false, then execute satatemen 2.
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int num {};
    const int target {10};
    
    cout << "Enter a number and i'll compare it to " << target <<  " : ";
    cin >> num;
    
    if ( num >= target ) {
        cout << "===================================================" << endl;
        cout << num << " is greater then or equal to " << target << endl;
        
        int diff { num - target };
        cout << num << " is " << diff << " less than " << target << endl;
    } else {
        cout << "===================================================" << endl;
        cout << num << " is less then " << target << endl;
        
        int diff { target - num };
        cout << num << " is " << diff << " less than " << target << endl;
    }
    
    return 0;
}