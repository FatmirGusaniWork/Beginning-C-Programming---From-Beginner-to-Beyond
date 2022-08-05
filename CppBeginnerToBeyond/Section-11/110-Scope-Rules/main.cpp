/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 31.07.2022 
 * =================================================================
 * Notes
 * =================================================================
 * C++ uses scope rules to determine where an identifier can be used.
 * C++ uses static or lexical scoping.
 * Lexical scoping means that the scope is determined the same way you read the program. 
 * Local or block scope.
 * Global scope.
 * =================================================================
 * LOCAL OR BLOCK SCOPE
 * Identifiers declared in a block {}
 * Function parameters have block scope.
 * Only visible within the block {} where declared.
 * Function local cariables are only active while the function is executing.
 * Local variables are NOT preserved between function calls.
 * With nested blocks inner blocks can 'see' but outer block cannot 'see' in.
 * =================================================================
 * STATIC LOCAL VARIABLES
 * Declared with static qualifier.
 *      static int value { 10 };
 * Value is preserved between functions calls.
 * Only initialuzed the first time the function is called.
 * =================================================================
 * GLOBAL SCOPE
 * Identifier declared outside any function or class
 * Visible to all parts of the program after the glocal identifier has been declared
 * Global constants are OK
 * Best parctice - don't use glocal variables
 * =================================================================
 */


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void global_example();
void local_example();
void static_local_example();

int num { 300 };

void global_example() {
    cout << "\nGlobal num is : " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is : " << num << " in global_example - end" << endl;
}

void local_example( int x ) {
    int num { 1000 };
    cout << "\nLocal num is : " << num << " in local_example - start" << endl;
    num = x;
    cout << "Local num is : " << num << " in local_example - end" << endl;
}

void static_local_example() {
    static int num { 5000 };
    cout << "\nLocal static num is : " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "\nLocal static num is : " << num << " in static_local_example - end" << endl;
}

int main() {
    
    int num { 100 };
    int num1 { 500 };
    
    cout << "Local num is : " << num << " is main" << endl;
    
    {   // Creates a new level of scope
        int num { 200 };            // Local to this inner block 
        cout << "Local num is : " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num1 is : " << num1 << endl;
    }
    
    cout << "Local num is : " << num << " in main" << endl;
    
    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    static_local_example();
    
    
    return 0;
}