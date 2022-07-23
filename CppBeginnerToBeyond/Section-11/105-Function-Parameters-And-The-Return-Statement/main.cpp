/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 11.07.2022 
 * =================================================================
 * Notes
 * =================================================================
 * When we call a function we can pass in data to that function
 * In the function call they are called arguments
 * In the function definition they are called parameters
 * They must match in number, order and in type
 * =================================================================
 * EXAMPLE
 *  int add_numbers ( int, int );               // Prototype
 * 
 *  int main() {
 *      int result { 0 };
 *      result = add_numbers ( 100, 200 );      // Call;
 *  }
 * 
 *  int add_numbers ( int a, int b ) {          // Definition
 *      return a + b;
 *  }
 * =================================================================
 * PASS BY VALUE
 * When you pass data into a function it is passed-by-value
 * A copy of thr data is passed to the function
 * Whatever changes you make to the parameters in the function does NOT affect the argument that was passed in.
 * 
 * Formal vs. Actual parameters
 *  - Formal parameters - The parameters defined in the function header
 *  - Actual parameters - The parameters used in the function call, the arguments
 * =================================================================
 * EXAMPLE
 *  void param_test ( int formal ) {            // Formal is a copy of actual
 *      cout  << formal << endl;                // 50
 *      formal = 100;                           // only changes the local copy
 *      cout << formal << endl;                 // 100
 *  }
 * 
 *  int main () {   
 *      int actual { 50 };
 *      cout << actual << endl;                 // 50
 *      param_test ( actual );                  // Pass in 50 to param_test
 *      cout << actual << endl;                 // 50 - did not change
 *      return 0;
 * =================================================================
 * FUNCTION RETURN STATEMENT
 * If a function returns a value then it must use a return statement that returns a value
 * If a function does not return a value ( void ) then the return statement is optional
 * Return statement can occur anywhere in the body of the function
 * Return statement immediately exits the function
 * We can have multiple return statement in a function
 *  - Avoid many return statements in a function
 * The return values is the result of the function call
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

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v );
void print_vector(vector<string> v );

void pass_by_value1( int num) {
    num = 1000;
}

void pass_by_value2( string s ) {
    s = "Changed";
}

void pass_by_value3( vector <string> v ) {
    v.clear();          // Delete all vector element
}

void print_vector(vector <string> v ) {
    for ( auto s : v )
        cout << s << " ";
    cout << endl;
}



int main() {
    int num { 10 };
    int another_num { 20 };
    
    cout << "Num before calling pass_by_value1 : " << num << endl;
    pass_by_value1( num );
    cout << "Num after calling pass_by_value1 : " << num << endl;

    cout << "\nAnother Num before calling pass_by_value1 : " << another_num << endl;
    pass_by_value1( another_num );
    cout << "Another Num after calling pass_by_value1 : " << another_num << endl;
    
    string name { "Frank" };
    
    cout << "\nName before calling pass_by_value2 : " << name << endl;
    pass_by_value2( name );
    cout << "Name After calling pass_by_value2 : " << name << endl;
    
    vector <string> stooges { "Larry", "Moe", "Curly" };
    cout << "\nStooges before calling pass_by_value3 : ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "Stooges after calling pass_by_value3 : ";
    print_vector(stooges);
    
    return 0;
}