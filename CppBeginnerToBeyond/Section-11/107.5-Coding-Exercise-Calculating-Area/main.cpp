/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 26.07.2022 
 * =================================================================
 * Overloading Functions - Calculating Area
 * In this exercise you will create a program that computes the area of two shapes, a square and a rectangle, by calling the overloaded function find area.
 * Begin by declaring the function prototypes for the square find area function and the rectangle find area function.
 * The square find area function is passed an integer value and returns an integer value .
 * The rectangle find_ area function is passed two double values and returns a double value
 * Remember that both function prototypes should have the same function name find area
 * Now that the function prototypes have been declared, at the bottom of the file define both functions.
 * The square find area function will be passed the argument side_length and return the area of the square. The formula for the area of a
 * square is side_ length*side_length . You may use the <math> function pow to compute this value if you wish.
 * The rectangle find area function will be passed the arguments length and width and return the area of the rectangle.
 * The formula for the area of a rectangle is length*width.
 * Now, from the function body of area calc, declare and initialize the variables square_area and rectangle_area by calling the find area
 * function and passing the appropriate arguments which are listed below.
 * The square has a side_length of 2.
 * The rectangle has a length of 4.5 and a width of 2.3
 * You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
 * =================================================================
 */

#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----

int find_area ( int side_length);
double find_area ( double length, double width);

//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void area_calc() {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
    int square_area {};
    double rectangle_area {};
    
    square_area = find_area(2);
    rectangle_area = find_area(4.5, 2.3);
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----

int find_area ( int side_length) {
    return (side_length * side_length);
}

double find_area ( double length, double width) {
    return (length * width);
}
