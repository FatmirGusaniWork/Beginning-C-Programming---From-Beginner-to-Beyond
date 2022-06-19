/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 18.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * WHILE LOOP
 * The while loop is an example of a pre-test loop because the test is done at the beginning of the loop.
 * 
 * while ( expression )
 *      statement;
 * 
 * =================================================================
 * while ( expression ) 
 * { 
 *      statementl
 * }
 * 
 * =================================================================
 * int i {1};
 * 
 * while ( i <= 5 ) {
 *      cout << i << endl;
 *      ++i; // important 
 * }
 * =================================================================
 * EVEN NUMBERS
 * int i {1};
 * 
 * while ( i < 10 ) {
 *      if ( i % 2 == 0 )  
 *          cout << i << endl;
 *      ++i;
 * =================================================================
 * ARRAY EXAMPLE
 * int scores [] { 100, 90, 87 };
 * int i {0};
 * 
 * while ( i < 3 ) {
 *      cout << scores[i] << endl;
 *      ++i;
 * }
 * =================================================================
 * INPUT VALIDATION
 * int number {};
 * 
 * cout << "Enter an integer less than 100: ";
 * cin >> number;
 * 
 * // Keep asking till the user enters a number greater than 100 //
 * while ( number >= 100 ) {        // ! ( number < 100 )
 *      cout << "Enter an integer less than 100";
 *      cin >> number;
 * }
 * 
 * cout << "Thanks << endl;
 * =================================================================
 * INPUT VALIDATION
 * int number {};
 * 
 * cout << "Enter an integer between 1 and 5: ";
 * cin >> number;
 * 
 * while ( number <= 1 || number >= 5 ) {        // ! ( number < 100 )
 *      cout << "Enter an integer between 1 and 5: ";
 *      cin >> number;
 * }
 * 
 * cout << "Thanks << endl;
 * =================================================================
 * INPUT VALIDATION - BOOLEAN FLAG
 * bool done {false};
 * int number {0};
 * 
 * while (!done) {
 *      cout << "Enter an integer between 1 and 5: ";
 *      cin >> number;
 *      if ( number <= 1 || number >= 5 )
 *          cout << "Out of range, try again" << endl;
 *      else { 
 *          cout << "Thanks!" << endl;
 *          done = true;
 *      }
 * }
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int num1 {};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num1;
    
    while ( num1 > 0 ) {
        cout << num1 << endl;
        --num1;
    }
    
    cout << "Blastoff!" << endl;

    
    int num2 {};
    cout << "Enter a postive integer to count up to: ";
    cin >> num2;
    
    int i {1};
    while ( num2 >= i ) {
        cout << i << endl;
        i++;
    }
    


    int number1 {};
    
    cout << "Enter an integer less than 100: ";
    cin >> number1;
    
    while ( number1 >= 100 ) {
        cout << "Enter an integer less than 100: ";
        cin >> number1;
    }
    
    cout << "Thanks" << endl;

    bool done {false};
    int number2 {0};
    
    while ( !done ) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number2;
        if ( number2 <= 1 || number2 >= 5 )
            cout << "Out of range, try again" << endl;
        else {
            cout << "Thanks" << endl;
            done = true;
        }
    }

    return 0;
}