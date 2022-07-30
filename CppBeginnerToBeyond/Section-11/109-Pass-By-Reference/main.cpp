/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 30.07.2022 
 * =================================================================
 * Notes
 * =================================================================
 * The default is pass by value.
 * Sometimes we wat to be able to change the actual parameter from within the function body.
 * In order to achieve this we need the location or address of the actual parameter
 * We saw how this is the effect with array, but what about other variables types?
 * We can use reference parameters to tell the compiler to pass in a reference to the actual parameter.
 * The formal parameter will now be an alias for the actual parameter
 * =================================================================
 * EXAMPLE 1
 * void scale_number( int &num );               // Prototype
 * 
 * int main() {
 *      int number { 1000 };
 *      scale_number ( number );                // Call
 *      cout << number << endl;                 // 100
 *      return 0;
 * }
 * 
 * void scale_number ( int &num ) {             // Definition
 *      if ( num > 100 )
 *          num = 100;
 * }
 * =================================================================
 * EXAMPLE 2
 * void swap( int &a, int &b );
 * 
 * int main() {
 *      int x { 10 }, y { 20 };
 *      cout << x << " " << y << endl;
 *      swap( x, y );
 *      cout << x << " " << y << endl;
 *      return 0;
 * }
 * 
 * void swap ( int &a, int &b ) {
 *      int temp = a;
 *      a = b;
 *      b = temp;
 * }    
 * =================================================================
 * VECTOR EXAMPLE - PASS BY VALUE
 * void print ( std::vector <int> v );
 * 
 * int main() {
 *      std::vector<int> data { 1,2,3,4,5 };
 *      print ( data );
 *      return 0;
 * }
 * 
 * void print (std::vector <int> v ) {
 *      for (auto num : v )
 *          cout << num << endl;
 * }
 * =================================================================
 * VECTOR EXAMPLE - PASS BY REFERENCE
 * void print ( std::vector <int> &v );
 * 
 * int main() {
 *      std::vector<int> data { 1,2,3,4,5 };
 *      print ( data );                             // 1 2 3 4 5
 *      return 0;
 * }
 * 
 * void print (std::vector <int> &v ) {
 *      for (auto num : v )
 *          cout << num << endl;
 * }
 * =================================================================
 * VECTOR EXAMPLE - PASS BY CONST REFERENCE
 * void print ( const std::vector <int> &v );
 * 
 * int main() {
 *      std::vector<int> data { 1,2,3,4,5 };
 *      print ( data );                             // 1 2 3 4 5
 *      return 0;
 * }
 * 
 * void print ( const std::vector <int> &v ) {
 *      v.at ( 0 ) = 200;
 *      for (auto num : v )
 *          cout << num << endl;
 * }
 * =================================================================
 */

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void pass_by_ref1( int &num );
void pass_by_ref2( string &s );
void pass_by_ref3( vector <string> &v);
void print_vector ( const vector <string> &v );

void pass_by_ref1 ( int &num ) {
    num = 1000;
}

void pass_by_ref2 ( string &s ) {
    s = "Changed";
}

void pass_by_ref3 ( vector < string > &v ) {
    v.clear();                                  // delete all vector elements
}

void print_vector ( const vector <string> &v ) {
    for ( auto s : v )
        cout << s << " ";
    cout << endl;
}

int main() {
    
    int num { 10 };
    int another_num { 20 };
    
    cout << "num before calling pass_by_ref1 : " << num << endl;
    pass_by_ref1( num );
    cout << "num after calling pass_by_ref1 : " << num << endl;
    
    cout << "\nanother_num before calling pass_by_ref1 : " << another_num << endl;
    pass_by_ref1( another_num );
    cout << "\nanother_num after calling pass_by_ref1 : " << another_num << endl;
    
    string name { "Frank" };
    cout << "\nname before calling pass_by_ref2 : " << name << endl;
    pass_by_ref2( name );
    cout << "\nname after calling pass_by_ref2 : " << name << endl;
    
    vector <string> stooges { "Larry", "Moe", "Curly" };
    cout << "\nstooges before calling pass_by_ref3 : ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "\nstooges after calling pass_by_ref3 : ";
    print_vector(stooges);
    
    return 0;
}