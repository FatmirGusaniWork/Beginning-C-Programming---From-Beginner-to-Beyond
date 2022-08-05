/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 05.08.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Function use the 'function call stack'
 *  - Analogous to a stack of books
 *  - LIFO ( LAST IN FIRST OUT )
 *  - push and pop
 * 
 * Stack Frame or Activation Record
 *  - Functions must return contraol to function that called it.
 *  - Each time a function is called we create an new activation record and push it on stack.
 *  - When a function terminates we pop the activation record and return.
 *  - Local variables and function parameters are allocated on the stack.
 * 
 * Stack size is finite - STACK OVERFLOW
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void func2( int &x, int y, int z ) {
    x += y + z;
}

int func1 ( int a, int b ) {
    int result {};
    result = a + b;
    func2(result, a , b );
    return result;
}

int main() {
    
    int x { 10 };
    int y { 20 };
    int z {};
    z = func1 ( x, y );
    cout << z << endl;
    
    return 0;
}

/*
What typically happens when ain calls func1 ( or any function calls another ) ?
    There are other ways to acheive the same result :)
    
    main:
        push space for the return value
        push space for the parameters
        push the reurn address
        transfer control to func1 ( jmp )
        
    func1:
        push the address of the previous activation record
        push any register values that will need to be restored before returning to the caller
        perform the code in func1
        restore the register values
        restire the pervious result
        transfer control to the return address ( jmp )
        
    main:
        pop the parameters
        pop the return value
*/