/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 19.06.2022 
 * =================================================================
 * Challenge
 * =================================================================  
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
    The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
    If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
    displayed again.


    If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
    If the list is empty you should display "[] - the list is empty"
    If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
    For example, [ 1 2 3 4 5 ]
      
    If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
    which you will add to the list and then display it was added. For example, if the user enters 5
    You should display, "5 added".
    Duplicate list entries are OK

    If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
    If the list is empty you should display, "Unable to calculate the mean - no data"

    If the user enters 'S' or 's' you should display the smallest element in the list.
    For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
    If the list is empty you should display, "Unable to determine the smallest number - list is empty"

    If the user enters 'L' or 'l' you should display the largest element in the list
    For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
    If the list is empty you should display, "Unable to determine the largest number - list is empty"

    If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

    Before you begin. Write out the steps you need to take and decide in what order they should be done.
    Think about what loops you should use as well as what you will use for your selection logic.

    This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

    Finally, be sure to test your program as you go and at the end.

    Hint: Use a vector!

    Additional functionality if you wish to extend this program.

    - search for a number in the list and if found display the number of times it occurs in the list
    - clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
    - don't allow duplicate entries
    - come up with your own ideas!

Good luck!
 * =================================================================

*/

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::sort;


int main() {
    
    vector <int> list_numbers {4, 4, 4, 4, 5, 86, 6, 388, 3};
    
    char letters {};
    int get_mean {};
    int num_of_nums {};
    int added_number {};
    int smallest_number {list_numbers[0]};
    int largest_number {list_numbers[0]};
    int search_number {};
        
    while ( letters != 'Q' ) {
        
        cout << "=================================================================" << endl;
        cout << "P - Print Number" << endl;
        cout << "A - Add A Number" << endl;
        cout << "M - Display Mean Of The Numbers" << endl;
        cout << "S - Display The Smallest Number" << endl;
        cout << "L - Display The largest Number" << endl;
        cout << "O - Organize The List" << endl;
        cout << "D - Remove Duplicates From List" << endl;
        cout << "C - Clear List" << endl;
        cout << "F - Search List" << endl;
        cout << "Q - Quit" << endl;
        cout << "=================================================================" << endl;
        cout << "Enter your choice : ";
        cin >> letters;
        cout << "=================================================================" << endl;
        
        
        
        switch( letters ) {
            ////////////////////////////////////////////////////////////////////
            case 'P':
            case 'p':
                if ( list_numbers.size() == 0 ) {
                    cout << "[ ] - The List Is Enpty";
                } else {
                    cout << "[ ";
                    for ( unsigned i {0}; i < list_numbers.size(); ++i ) {
                        cout << list_numbers[i] << " ";
                    }
                    cout << "]";
                }
                cout << endl;
                break;
            ////////////////////////////////////////////////////////////////////
            case 'A':
            case 'a':
                cout << "Enter An Integer To Add TO The List : "; 
                cin >> added_number;
                
                list_numbers.push_back(added_number);
                
                cout << added_number << " Added To The List" << endl;
                break;
            ////////////////////////////////////////////////////////////////////
            case 'M':
            case 'm':
                if ( list_numbers.size() == 0 ) {
                    cout << "Unable To Calculate The Mean - No Data";
                } else {
                    for ( unsigned i {0}; i < list_numbers.size(); ++i ) {
                        get_mean += list_numbers[i];
                        ++num_of_nums;
                    }
                cout << "The Mean Of The List Is : " << get_mean / num_of_nums;
                }
                cout << endl;
                break;
            ////////////////////////////////////////////////////////////////////
            case 'S':
            case 's':
                
                if ( list_numbers.size() == 0 ) {
                    cout << "[ ] - The List Is Enpty";
                } else {                
                    for ( unsigned i {0}; i < list_numbers.size(); ++i ) {
                        if ( list_numbers[i] <= smallest_number ) {
                            smallest_number = list_numbers[i];
                        }
                    }
                    cout << "The Smallest Number In The List : " << smallest_number;
                }
                cout << endl;
                break;
            ////////////////////////////////////////////////////////////////////
            case 'L':
            case 'l':
            
                if ( list_numbers.size() == 0 ) {
                    cout << "[ ] - The List Is Enpty";
                } else {                
                    for ( unsigned i {0}; i < list_numbers.size(); ++i ) {
                        if ( list_numbers[i] >= largest_number ) {
                            largest_number = list_numbers[i];
                        }
                    }
                    cout << "The Smallest Number In The List : " << largest_number;
                }
                cout << endl;
                break;
            ////////////////////////////////////////////////////////////////////
            case 'O':
            case 'o':
                sort(list_numbers.begin(), list_numbers.end());
                cout << "List Sorted";
                cout << endl;
                break;
            ////////////////////////////////////////////////////////////////////
            case 'D':
            case 'd':
                list_numbers.erase( unique( list_numbers.begin(), list_numbers.end() ), list_numbers.end() );
                cout << "Removed Duplicates";
                cout << endl;
                break;
            ////////////////////////////////////////////////////////////////////
            case 'C':
            case 'c':
                list_numbers.clear();
                cout << "List Cleared";
                cout << endl;
                break;
            ////////////////////////////////////////////////////////////////////
            case 'F':
            case 'f':
                cout << "What Number Do You Want To Search : ";
                cin >> search_number;
                for ( unsigned i {0}; i <= list_numbers.size(); ++i ) {
                    if ( search_number == list_numbers[i] ) {
                        cout << search_number << " Is In The List" << endl;
                        break;
                    } else {
                        cout << search_number << " Is Not In The List" << endl;
                        break;
                    }
                }
                break;
            ////////////////////////////////////////////////////////////////////
            case 'Q':
            case 'q':
                letters = 'Q';
                cout << "Goodbye" << endl;
                cout << "=================================================================" << endl;
        }
    }
    return 0;
}


/*
================================================================= Frank's Solution =================================================================
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> numbers {};
    char selection {};
    
    do {
        // Display menu
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number"<< endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;

        
        if (selection == 'P' || selection == 'p') {
            if (numbers.size() == 0)
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto num: numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
        } else if (selection == 'A' || selection == 'a') {
            int num_to_add {};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        } else if (selection == 'M' || selection == 'm') {
            if (numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else {
                int total {};
                for (auto num: numbers)
                    total += num;
                cout << "The mean is : " << static_cast<double>(total)/numbers.size() << endl;
            }
        } else if (selection == 'S' || selection == 's') {
            if (numbers.size() == 0) 
                cout << "Unable to determine the smallest - list is empty" << endl;
            else {
                int smallest = numbers.at(0);
                for (auto num: numbers)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
            }
        } else if (selection == 'L' || selection == 'l') {
            if (numbers.size() == 0)
                cout << "Unable to determine largest - list is empty"<< endl;   
            else {
                int largest = numbers.at(0);
                for (auto num: numbers)
                    if (num > largest)
                        largest = num;
                cout << "The largest number is: " << largest << endl;
            }
        } else if (selection == 'Q' || selection == 'q') {
            cout << "Goodbye" << endl;
        } else {
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'q' && selection != 'Q');

    cout  << endl;
    return 0;
}
*/