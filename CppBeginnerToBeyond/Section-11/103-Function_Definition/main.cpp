/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 09.07.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Name
 *  - The name of the function
 *  - Same rules as for variables
 *  - Should be meaningful
 *  - Usually a verb or verb phrase
 * 
 * Parameter list
 *  - The variable passed into the function
 *  - Their types must be specified
 * 
 * Return types
 *  - The type of the data that is returned from the function
 * 
 * Body
 *  - The statement that are executed when the function is called
 *  - In Curly braces {}
 * =================================================================
 * EXAMPLE WITH NO PARAMETERS 
 * 1 Name // 2 Parameters // 3 Return type // 4 Body //
 *    3     1          2
 *  int function_name () {
 *      statement ( s );
 *      return 0;               4
 *  }
 * =================================================================
 * EXAMPLE WITH 1 PARAMETER
 *  int function_name ( int a ) {
 *      statements ( s );
 *      return 0;
 *  }
 * =================================================================
 * EXAMPLE WITH NO RETURN TYPE ( VOID )
 *  void function_name ( ) {
 *      statement ( s );
 *      return;                 // Optional
 *  }
 * =================================================================
 * EXAMPLE WITH MULTIPLE PARAMETERS
 *  void function_name ( int a, std::string b ) {
 *  statements ( s );
 *  return;                     // Optional
 * =================================================================
 * A FUNCTION WITH NO RETURN TYPE AND NO PARAMETERS
 *  void say_hello () {
 *      cout << "Hello" << endl;
 *  }
 * =================================================================
 * CALLING A FUNCTiON
 *  void say_hello () {
 *      cout << "Hello" << endl;
 *  }
 * 
 *  int main () {
 *      say_hello ();
 *      return 0;
 *  }
 * =================================================================
 * CALLING A FUNCTiON
 *  void say_hello () {
 *      cout << "Hello" << endl;
 *  }
 * 
 *  int main () {
 *      for ( int i {1}; i <= 10; ++i )
 *          say_hello ();
 *      return 0;
 *  }
 * =================================================================
 * Function can call other functions
 * Compiler must know the function details BEFORE it is called!
 * 
 * int main () {
 *      say_hello();                // Called before it is defined // ERROR
 *      return 0;
 * }
 * 
 * void say_hello () {
 *      cout << "Hello" << endl;
 * }
 * =================================================================
 */
 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const double pi { 3.14159 };

// area_circle() FUNCTION
double calc_area_circle(double radius) {
    return pi * radius * radius;
}

// area_circle() FUNCTION
void area_circle() {
    double radius {};
    cout << "Enter the radius of the circle : ";
    cin >> radius;
    
    cout << "The area of a circle with the radius " << radius << " is " << calc_area_circle( radius ) << endl;
}

// volume_cylinder() FUNCTION
double calc_volume_cylinder( double radius, double height ) {
    return calc_area_circle( radius ) * height;
}

// volume_cylinder() FUNCTION
void volume_cylinder() {
    double radius {};
    double height {};
    
    cout << "Enter the radius of the cylinder : ";
    cin >> radius;
    
    cout << "Enter the height of the cylinder : ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

// main FUNCTION 
int main() {
    
    area_circle();
    volume_cylinder();
    
    return 0;
}