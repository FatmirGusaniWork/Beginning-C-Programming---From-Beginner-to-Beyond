/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 01.06.2022 
 * =================================================================
 * Using the Assignment Operator
 * In this exercise you will write a program that uses the assignment operator = to change the value of an initialized variable as well as 
 * assign the value of one variable to another.
 * Begin by declaring and initializing the integer variable num1 to the value of 13
 * Now declare and initialize the the integer variable num2 to the value o
 * Use the assignment operator to change the value of num1 to 5
 * Now use the assignment operator to assign the value of num1 to num2
 * You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check
 * the solution if you really get stuck.
 * =================================================================
 */

#include <iostream>
#include <tuple>
using namespace std;

void assignment_operator() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    // Declare num1 as an integer and initialize it to 13.
    int num1 {13};
    
    // Declare num2 as an integer and initialize it to 0.
    int num2 {0};
    
    // Assign the value 5 to num1
    num1 = 5;
    
    // Assign the value of num1 to num2
    num2 = num1;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
   
   cout << num1 << " " << num2;
}