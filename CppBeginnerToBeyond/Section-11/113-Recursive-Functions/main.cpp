/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 05.08.2022 
 * =================================================================
 * Notes
 * =================================================================
 * RECURSIVE FUNCTIONS
 * A recursive function is a function that calls itself
 *  - Either directly or indirectly through another function
 * 
 * Recursive problem solving
 *  - Base case
 *  - Divide the rest of problem into subproblems and do recursive call
 * 
 * There are many problems that lend themselves to recursive solutions
 * Mathematic   - Factorial, Fibonacci, Fractals,...
 * Searching and sorting - Binary search, search trees,....
 * =================================================================
 * EXAMPLE - FACTORIAL
 * 
 *  0! = 1
 *  n! = n * ( n - 1 )
 * 
 * Base case:
 *  - factorial ( 0 ) = 1
 * 
 * Recursive case:
 *  - factorial ( n ) = n * factorial ( n - 1 )
 * =================================================================
 * EXAMPLE FACTORIAL
 * 
 * unsigned ling long factorial ( unsigned long long n ) {
 *      if ( n == 0 )
 *           return 1;                                  // base case
 *      return n * factorial ( n - 1 );                 // recursive case
 * }
 * 
 * int main () {
 *      cout << factorial ( 8 ) << endl;                // 40320
 *      return 0;
 * }
 * =================================================================
 * EXAMPLE - FIBONACCI
 * 
 *  Fib ( 0 ) = 0
 *  Fib ( 1 ) = 1
 *  Fib ( n ) = Fib ( n - 1 ) + Fib ( n - 2 )
 * 
 * Base case
 *  - Fib ( 0 ) = 0
 *  - Fib ( 1 ) = 1
 * 
 * Recursive case
 *  - Fib ( n ) = Fib ( n - 1 ) + Fib ( n - 2 )
 * =================================================================
 * EXAMPLE FACTORIAL
 * 
 * unsigned long long fibonacci ( unsigned long long n )  {
 *      if ( n < 1 )
 *          return n;                                               // base case
 *      return fibonacci ( n - 1 ) + fibonacci ( n - 2 );           // recursion
 * }
 * 
 * int main() {
 *      cout << fibonacci ( 30 ) << endl;               // 832040
 *      return 0;
 * }
 * =================================================================
 * IMPORTANT NOTES
 * 
 * If recursion dones't eventually stop you will have infinite recursion
 * Recursion can be resource intensive
 * Remember that base case(s)
 *  - It terminates the recursion
 * Only use recursive solutions when it makes sense
 * Anything that can bedone recursively can be done iteratively
 *  - Stack overflow error
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned long long fibonacci ( unsigned long long n );
unsigned long long fibonacci ( unsigned long long n );

unsigned long long factorial ( unsigned long long n );

unsigned long long fibonacci ( unsigned long long n ) {
    if ( n <= 1 )
        return n;
    return fibonacci( n - 1) + fibonacci( n - 2);
}

unsigned long long factorial ( unsigned long long n ) {
    if ( n == 0 )
        return 1;
    return n * factorial( n - 1);
}

int main() {
    
    cout << "fibonacci ( 5 ) : " << fibonacci( 5 ) << endl;         // 5
    cout << "fibonacci ( 30 ) : " << fibonacci( 30 ) << endl;       // 832040
    cout << "fibonacci ( 40 ) : " << fibonacci( 40 ) << endl;       // 102334155
    
    cout << "\nfactorial ( 3 ) : " << factorial( 3 ) << endl;       // 6
    cout << "factorial ( 8 ) : " << factorial( 8 ) << endl;         // 40320
    cout << "factorial ( 12 ) : " << factorial( 12 ) << endl;       // 479001600
    cout << "factorial ( 20 ) : " << factorial( 20 ) << endl;       // 2432902008176640000
    
    return 0;
}