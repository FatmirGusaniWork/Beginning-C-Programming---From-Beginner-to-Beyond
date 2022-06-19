/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 12.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * THE SWITCH STATEMENT
 * We first have the switch keyword which is followed by the control expression inside parentheses.
 * The control expression must be eveluate to an integral type or an enumeration type.
 * A series of case statement enclosed in curly braces. 
 * The value of the control expression will be compared to the values following the case keywords.
 * These case statement must also evaluate to an integral or enumeration type and must be know by conpile time.
 * When the value of the control expression matches the vale of the case expression, then the code after the colon is executed until you hit a break statement.
 * Default case at the end that will execute when none of the case are true.
 * 
 * We have a enumeration type called color with 3 enumeration constants red, green and blue.
 * We also hae a veriable named screen color, which we initialized to green, but can hold any of the 3 enumeration constants.
 * We switch off the screen color which can only be red, green or blue, and execute the appropriate code when we match the specific value.
 * The default case should never execuate unless we add another enumeration value and forget to include a case for it.
 * 
 * The control expression must be ecvaluated to an integer type.
 * The case expression must be constant expression that exaluate to integer or integers literals.
 * Once a match occurs all following case section are executes UNTIL a break is reached the switch complete.
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    char letter_grade {};
    
    cout << "Enter the letter grade expect on the exam: ";
    cin >> letter_grade;
    
    switch (letter_grade) { 
        case 'A':
        case 'a':
            cout << "You need a 90 of above, study hard!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "You need a 80 - 89 for a B, go study!" << endl;
            break;
        case 'C':
        case 'c':
            cout << "You need 70 - 79 for a C, for an average grade." << endl;
            break;
        case 'D':
        case 'd':
            cout << "hmm, you should strive for a better grade. All you need is 60 - 69." << endl;
            break;
        case 'F':
        case 'f':
        {
            char confirm {};
            
            cout << "Are you sure? (Y/N) : ";
            cin >> confirm;
            
            if( confirm == 'y' || confirm == 'Y' )
                cout << "OKAY, Why do you want to fail?" << endl;
            else if ( confirm == 'n' || confirm == 'N' )
                cout << "GOOD, go study!" << endl;
            else
                cout << "You really do want THAT F" << endl;
            break;
        }
            
        default:
            cout << "Sorry, that's not a valid grade" << endl;
    }
    return 0;
}