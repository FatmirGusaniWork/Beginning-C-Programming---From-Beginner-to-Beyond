/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 11.07.2022 
 * =================================================================
 * Notes
 * =================================================================
 * THE COMPILER MUST KNOW ABOUT A FUNCTION BEFORE IT IS USED
 * Define function before calling them
 *  - Ok for small programs
 *  - Not a practical solution for larger programs
 * Use function prototypes
 *  - Tells the compiler what it needs to know without a full function definition
 *  - Also called forward declarations
 *  - Placed at the beginning of the program
 *  - Also used in our own header files (.h)
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


// FUNCTION PYTOTYPE //
double calc_area_circle(double radius);
void area_circle();

double calc_volume_cylinder( double radius, double height );
void volume_cylinder();

const double pi { 3.14159 };

// main FUNCTION 
int main() {
    
    area_circle();
    volume_cylinder();
    
    return 0;
}
    
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
