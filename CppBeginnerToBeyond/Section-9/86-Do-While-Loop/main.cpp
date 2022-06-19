/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 18.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * DO - WHILE LOOP
 * In a do while loop, you execute the body of the loop while the conditional expression is true.
 * The condition is checked at the end of each iteration that makes the do while loop a post-test loop.
 * The loop body will execute at least once.
 * =================================================================
 * do {
 *      statement;
 * } while ( expression );
 * =================================================================
 * INPUT VALIDATION
 * int number {};
 * do {
 *      cout << "Enter an integer between 1 and 5: ";
 *      cin >> number;
 * } while ( number <= 1 || number >= 5 );
 * cout << "Thanks" << endl;
 * =================================================================
 * AREA CALCULATION WITH CALCULATE ANOTHER
 * char selection {};
 *      do {
 *          double width {}, height {};
 *          cout << "Enter width and height separated by a space: ";
 *          cin >> width >> height;
 * 
 *          double area { width * height };
 *          cout << "The area is " << area << endl;
 * 
 *          cout << "Calculate another? (Y/N) : ";
 *          cin >> selection;
 *          } while ( selection == 'Y' || selection == 'y' );
 *          cout << "Thanks!" << endl;
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    char selection {};
    
    do {
        cout << "\n=================================================================" << endl;
        
        cout << "1. Do This" << endl;
        cout << "2. Do That" << endl;
        cout << "3. Do Something Else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        cout << "\n=================================================================" << endl;
    
        if ( selection == '1' )
            cout << "You chose 1 - Do This" << endl;
        else if ( selection == '2' )
            cout << "You chose 2 - Do That" << endl;
        else if ( selection == '3' )
            cout << "You chose 3 - Do Something Else" << endl;
        else if ( selection == 'Q' || selection == 'q' )
            cout << "Goodbye" << endl;
        else   
            cout << "Unknown option - Try again..." << endl;
        
    } while (selection != 'q' && selection != 'Q');
    
    return 0;
}