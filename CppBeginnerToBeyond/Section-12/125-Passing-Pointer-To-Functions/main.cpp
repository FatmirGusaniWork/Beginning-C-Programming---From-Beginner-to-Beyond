/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 22.09.2022 
 * =================================================================
 * Notes
 * =================================================================
 * PASS-BY-REFERENCE WITH POINTERS - DEFINING THE FUNCTION
 * 
 *      void double_data ( int *int_ptr );
 *      void double_data ( int *int_ptr ) {
 *          *int_ptr *= 2;
 *          // int_ptr = *int_ptr * 2;
 *      }
 * =================================================================
 * PASS-BY-REFERENCE WITH POINTERS - CALLING THE FUNCTION
 * 
 *      int main () {
 *          int value { 10 };
 *          cout << value << endl;      // 10
 *          double_data ( &value );
 *          cout << value << endl;      // 20
 *      ]
 * =================================================================
 */

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


void double_data( int *int_ptr ) {
    *int_ptr *= 2;
}

void swap( int *a, int *b ) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// const stops the function from changing the data. Only displays it.
void display ( const vector <string> *const v ) {
    for ( auto str : *v )   
        cout << str << " ";
    cout << endl;
}

void display ( int *array, int sentinel ) {
    while ( *array != sentinel )
        cout << *array++ << " ";
    cout << endl;
}


int main() {
    
    int value { 10 };
    int *int_ptr { nullptr };
    
    cout << "Value : " << value << endl;
    double_data( &value );
    cout << "Value : " << value << endl;
    
    cout << "=================================================================" << endl;
    
    int_ptr = &value;
    double_data( int_ptr );
    cout << "Value : " << value << endl;
    
    cout << "=================================================================" << endl;
    
    int x { 100 }, y { 200 };
    cout << "\nx : " << x << endl;
    cout << "y : " << y << endl;
    
    swap( &x, &y );
    
    cout << "\nx : " << x << endl;
    cout << "y : " << y << endl;
    
    cout << "=================================================================" << endl;
    
    vector <string> stooges {"Larry", "Moe", "Curly"};
    display( &stooges );
    
    cout << "=================================================================" << endl;
    
    int scores[] { 100, 98, 97, 79, 85, -1 };
    display( scores, -1 );
    
    return 0;
}