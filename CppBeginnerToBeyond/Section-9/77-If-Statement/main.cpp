/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 10.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * If the expression is true then execute the statement.
 * If the expression is false then skip the statement.
 * The statement is indented, we indented our code in the main function.
 * By indenting the statement, it makes it easier for someone reading the code to see that the statement is part f the if statement.
 * Create a block of code by including more then one statement in code block { }.
 * Block can also contai veriables Declarations.
 * These variables are visible only within the block - local scope.
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int num {};
    const int min {10};
    const int max {100};
    
    cout << "Enter a number between " << min << " And " << max << " : ";
    cin >> num;
    
    if( num >= min ) {
        cout << "\n============= If statement 1 =============" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        
        int diff { num - min };
        cout << num << " is " << diff << " greater then " << min << endl; 
        
    }
    
    if ( num <= max ) {
        cout << "\n============= If statement 2 =============" << endl;
        cout << num << " is less than or equal to " << max << endl;
        
        int diff { max - num };
        cout << num << " is " << diff << " less then " << max << endl; 
    }
    
    if ( num >= min && num <= max ) {
        cout << "\n============= If statement 3 =============" << endl;
        cout << num << " is in range" << endl;
        cout << "This mean statement 1 and statement 2 must also display!!" << endl;
    }
    
    if ( num == min || num == max ) {
       cout << "\n============= If statement 4 =============" << endl;
       cout << num << " is right on a boundary" << endl;
       cout << "This mean all 4 if statement display!!" << endl;
       
    }
        
    return 0;
}