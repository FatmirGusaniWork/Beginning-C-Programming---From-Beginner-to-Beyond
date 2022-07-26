/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 23.07.2022 
 * =================================================================
 * Notes
 * =================================================================
 * We can have functions that have different parameter list that have the same names
 * Abstraction mechanism since we can just think parmeter list that have that same name
 * A type of polymorphism
 *  - We can have the same name work with diferent data types to execute similar behavior
 * 
 * The compiler must be able to tell the function apart based in the parameter list and argument supplied.
 * =================================================================
 * EXAMPLE 1
 * int add_numbers ( int , int );                       // add ints
 * double add_numbers ( double, double );               // add double
 * 
 * int main () {
 *      cout << add_numbers ( 10, 20 ) << endl;         // integers
 *      cout << add_numbers ( 10.0, 20.0 ) << endl;     // double
 *      return 0;
 * }
 * 
 * int add_numbers( int a, int b ) {
 *      return a + b;
 * }
 * 
 * double add_numbers ( double a, double b ) {
 *      return a + b;
 * }
 * =================================================================
 * EXAMPLE 2
 * void display ( int n );
 * void display ( double d );
 * void display ( std::string s );
 * void display ( std::string s, std::string t );
 * void display ( std::vector<int> v );
 * void display ( std::vector<std::string> v );
 * =================================================================
 * RETURN TYP IS NOT CONSIDERED
 * 
 * int      get_value();
 * double   get_value();
 * 
 * ERROR
 * cout << get_value() << endl;     // which one?
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

void print ( int );
void print ( double );
void print ( string );
void print ( string, string);
void print ( vector< string >);

void print ( int num ) {
    cout << "Printing int " << num << endl;
}

void print ( double num ) {
    cout << "Printing double " << num << endl;
}

void print ( string s ) {
    cout << "Printing String " << s << endl;
}

void print ( string s, string t ) {
    cout << "Printing String " << s << "and " << t << endl;
}

void print ( vector< string > v ) {
    cout << "Printing vector of string : ";
    for ( auto s : v )
        cout << s + " ";
    cout << endl;
}


int main() {
    
    print( 100 );                   // int 
    print( 'A' );                   // character is always primoted to int should print 65 ASCII ( 'A' )
    
    print( 123.5 );                 // double
    print( 123.5F );                // Float is promoted to double
    
    print( "C-Style string " );     // C-style string is converted to a C++ string
    
    string s {"C++ String"};
    print(s);
    
    print( "C-Style String", s );
    
    vector < string > three_stooges { "Larry", "Moe", "Curly" };
    print( three_stooges );
    
    return 0;
}