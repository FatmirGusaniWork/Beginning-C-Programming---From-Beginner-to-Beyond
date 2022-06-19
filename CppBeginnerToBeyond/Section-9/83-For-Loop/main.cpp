/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 12.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * THE FOR LOOP
 * The basic for loop is very clear and concise
 * Since the for loop's expressions are optional, it is possible to have
    - no initialization
    - no test
    - no increment
 * 
 * for ( initialization; condition; increment)
        statement;
 * =================================================================
 * for ( int i {1} ; i <= 10; ++i)
        if ( i % 2 == 0 )
            cout << i << endl;
 * =================================================================
 int score [] { 100, 90, 80 }       // Array //
  
 for ( int i {0}; i < 3; ++i) {
    cout << scores[i] << endl;
 }
 * =================================================================
 * comma operator
 for ( int i {1}, j {5}; i <= 5; ++i, ++j) {
    cout << i << " * " << j << " : " << ( i * j ) << endl;
 }
 * OUTPUT
 1 * 5 : 5
 2 * 6 : 12
 3 * 7 : 21
 4 * 8 : 32
 5 * 9 : 45
 * =================================================================
 */

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    
    cout << " =================================================================" << endl;
    
    for ( int i {1}; i <= 10; ++i )
        cout << i << endl;
        
    cout << " =================================================================" << endl;
    
    for ( int i {1}; i <= 10; i+=2 )
        cout << i << endl;
    
    cout << " =================================================================" << endl;
    
    for ( int i {10}; i > 0; --i)
        cout << i << endl;
    cout << "Blastoff!" << endl;

    cout << " =================================================================" << endl;
    
    for ( int i {10}; i <= 100; i+=10 )
    {
        if (i % 15 == 0 )
            cout << i << endl;
    }
    
    cout << " =================================================================" << endl;
    
    for ( int i {1}, j {5}; i <= 5; ++i, ++j )
        cout << i << " + " << j << " = " << ( i + j)  << endl;
    
    cout << " =================================================================" << endl;
    
    for ( int i {1}; i <= 100; ++i ) {
        cout << i;
        if ( i % 10 == 0 )
            cout << endl;
        else 
            cout << "\t";
    }
    
    cout << " =================================================================" << endl;
    
    for ( int i {1}; i <= 100; ++i ) {
        cout << i;
        cout << (( i % 10 == 0 ) ? "\n" : "\t" );
    }
    
    cout << " =================================================================" << endl;
    
    vector <int> nums { 10, 20, 30, 40, 50 };
    for ( unsigned i {0}; i < nums.size(); ++i)
        cout << nums[i] << endl;
    
    return 0;
}