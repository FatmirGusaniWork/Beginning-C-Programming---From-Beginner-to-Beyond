/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 19.06.2022 
 * =================================================================
 * Challenge
 * =================================================================  
    Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.

    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.

    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.

        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!

    Finally,  don't forget to use function prototypes!

    Good luck -- I know you can do it!
    
    =================================================================
    
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
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::sort;

void Print_Options();
void Print_Numbers(vector <int> &list_numbers);
void Add_Number(vector <int> &list_numbers);

void Print_Mean(vector <int> &list_numbers);
void Get_Mean(vector <int> &list_numbers);

void Print_Smallest(vector <int> &list_numbers);
void Get_Smallest(vector <int> &list_numbers);

void Print_Largest(vector <int> &list_numbers);
void Get_Largest(vector <int> &list_numbers);

void Organize_Number(vector <int> &list_numbers);
void Remove_Number(vector <int> &list_numbers);
void Clear_Number(vector <int> &list_numbers);
void Search_Number(vector <int> &list_numbers);

int main() {
    
    vector <int> list_numbers {};
    
    char letters = {};
    
    while (letters != 'Q' ) {
        Print_Options();
        cout << "Enter your choice : ";
        cin >> letters;
        letters = toupper(letters);
        cout << "=================================================================" << endl;
        
        switch( letters ) {
            ////////////////////////////////////////////////////////////////////
            case 'P':
                Print_Numbers(list_numbers);
                break;
            ////////////////////////////////////////////////////////////////////
            case 'A':
                Add_Number(list_numbers);
                break;
            ////////////////////////////////////////////////////////////////////
            case 'M':
                Print_Mean(list_numbers);
                break;
            ////////////////////////////////////////////////////////////////////
            case 'S':
                Print_Smallest(list_numbers);
                break;
            ////////////////////////////////////////////////////////////////////
            case 'L':
                Print_Largest(list_numbers);
                break;
            ////////////////////////////////////////////////////////////////////
            case 'O':
            case 'o':
                Organize_Number(list_numbers);
                break;
            ////////////////////////////////////////////////////////////////////
            case 'D':
                Remove_Number(list_numbers);
                break;
            ////////////////////////////////////////////////////////////////////
            case 'C':
                Clear_Number(list_numbers);
                break;
            ////////////////////////////////////////////////////////////////////
            case 'F':
                Search_Number(list_numbers);
                break;
            ////////////////////////////////////////////////////////////////////
            case 'Q':
                letters = 'Q';
                cout << "Goodbye" << endl;
                cout << "=================================================================" << endl;
                break;
        }
    }
    return 0;
}

/* =================================================================
 * The Function below displays the option for the user.
 * Print_Options is the boss function...
 * ================================================================= */ 
void Print_Options() {
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
}

/* =================================================================
 * The Function below prints the number in the vector list.
 * Print_Numbers is the boss function...
 * ================================================================= */ 
void Print_Numbers(vector <int> &list_numbers) {
    
    system ("CLS");
    
    cout << "=================================================================" << endl;
    
    if ( list_numbers.size() == 0 ) {
            cout << "[ ] - The List Is Enpty";
    } else {
        cout << "[ ";
        for ( unsigned i {0}; i < list_numbers.size(); ++i ) {
            cout << list_numbers[i] << " ";
        }
        cout << "] - Current List..." ;
    }
    cout << endl;
}


/* =================================================================
 * The Function below add a number to the vector list.
 * Add_Number is the boss function...
 * ================================================================= */ 
void Add_Number(vector <int> &list_numbers) {
    
    system ("CLS");

    cout << "=================================================================" << endl;
    
    int added_number {};
    
    cout << "Enter An Integer To Add TO The List : "; 
    cin >> added_number;

    list_numbers.push_back(added_number);

    cout << added_number << " Added To The List" << endl;
}

/* =================================================================
 * The Function below prints the mean of the vector list.
 * Print_Mean is the boss function...
 * Get_Mean is the worker function...
 * ================================================================= */ 
void Print_Mean(vector <int> &list_numbers) {
    
    system ("CLS");
    
    cout << "=================================================================" << endl;
    
    if ( list_numbers.size() == 0 ) {
        cout << "Unable To Calculate The Mean - No Data";
    } else {
        Get_Mean(list_numbers);
    }
    cout << endl;
}

void Get_Mean(vector <int> &list_numbers) {
    int get_mean{};
    int num_of_nums {};
    
    for ( unsigned i {0}; i < list_numbers.size(); ++i ) {
            get_mean += list_numbers[i];
            ++num_of_nums;
        }
    cout << "The Mean Of The List Is : " << get_mean / num_of_nums;
}

/* =================================================================
 * The Function below prints the smallest number in the vector list.
 * Print_Smallest is the boss function...
 * Get_Smallest is the worker function...
 * ================================================================= */ 
void Print_Smallest(vector <int> &list_numbers) {
    
    system ("CLS");
    
    cout << "=================================================================" << endl;
    
    if ( list_numbers.size() == 0 ) {
        cout << "[ ] - The List Is Enpty";
    } else {                
        Get_Smallest(list_numbers);
    }
    cout << endl;
}

void Get_Smallest(vector <int> &list_numbers) {
    
    int smallest_number {list_numbers[0]};
    
    for ( unsigned i {0}; i < list_numbers.size(); ++i ) {
        if ( list_numbers[i] <= smallest_number ) {
            smallest_number = list_numbers[i];
        }
    }
    cout << "The Smallest Number In The List : " << smallest_number;
}

/* =================================================================
 * The Function below prints the largest number in the vector list.
 * Print_Largest is the boss function...
 * Get_largest is the worker function...
 * ================================================================= */ 
void Print_Largest(vector <int> &list_numbers) {
    
    system ("CLS");
    
    cout << "=================================================================" << endl;
        
    if ( list_numbers.size() == 0 ) {
        cout << "[ ] - The List Is Enpty";
    } else {                
        Get_Largest(list_numbers);
    }
    cout << endl;
}

void Get_Largest(vector <int> &list_numbers) {
    
    int largest_number {list_numbers[0]};
        
    for ( unsigned i {0}; i < list_numbers.size(); ++i ) {
        if ( list_numbers[i] >= largest_number ) {
            largest_number = list_numbers[i];
        }
    }
    cout << "The Largest Number In The List : " << largest_number;
}

/* =================================================================
 * The Function below organizes the numbers in the vector list.
 * Organize_Number is the boss function...
 * ================================================================= */ 
void Organize_Number(vector <int> &list_numbers) {
    
    system ("CLS");
    
    cout << "=================================================================" << endl;
    
    sort(list_numbers.begin(), list_numbers.end());
    cout << "List Sorted";
    cout << endl;
}

/* =================================================================
 * The Function below removes Duplicates in the vector list.
 * Remove_Number is the boss function...
 * ================================================================= */ 
void Remove_Number(vector <int> &list_numbers) {
    
    system ("CLS");
    
    list_numbers.erase( unique( list_numbers.begin(), list_numbers.end() ), list_numbers.end() );
    cout << "Removed Duplicates";
    cout << endl;
}

/* =================================================================
 * The Function below clear the vector list.
 * Clear_Number is the boss function...
 * ================================================================= */ 
void Clear_Number(vector <int> &list_numbers) {
    
    system ("CLS");

    cout << "=================================================================" << endl;
    
    list_numbers.clear();
    cout << "List Cleared";
    cout << endl;
}

/* =================================================================
 * The Function below searchs for a number in the vector list. 
 * Search_Number is the boss function...
 * ================================================================= */ 
void Search_Number(vector <int> &list_numbers) {
    
    system ("CLS");
    
    cout << "=================================================================" << endl;
    
    int search_number {};
    
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
}

/* Franks Solution
// Section 11
// Challenge - Solution
    Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.
    
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
    
    Finally,  don't forget to use function prototypes!
    
    Good luck -- I know you can do it!
   
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


#include <iostream>
#include <vector>
#include <cctype>   // for toupper

using namespace std;

// Prototypes for displaying the menu and getting user selection
void display_menu();
char get_selection();

// Menu handling function prototypes
void handle_display(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);
void handle_find(const vector<int> &v);
void handle_quit();
void handle_unknown();

// Prototypes for functions that work with the list
// to display it, calculate mean, etc.
void display_list(const vector<int> &v);
double calculate_mean(const vector<int> &v);
int get_smallest(const vector<int> &v);
int get_largest(const vector<int> &v);
bool find(const vector<int> &v, int target);

int main() {
    
    vector<int> numbers;        // our list of numbers
    char selection {};
    
    do {
        display_menu();
        selection = get_selection();
        switch (selection) {
            case 'P': 
                handle_display(numbers); 
                break;
            case 'A': 
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();
        }
    } while (selection != 'Q');
    cout << endl;
    return 0;
}

***************************************************************
This function displays the menu to the console.
***************************************************************
void display_menu() {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number"<< endl;
        cout << "F - Find a number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
}

***************************************************************
This function simply reads a character selection from
stdin and returns it as upper case.
***************************************************************
char get_selection() {
    char selection {};
    cin >> selection;
    return toupper(selection);
}

***************************************************************
This function is called when the user selects the display list
option from the main menu.
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************
void handle_display(const vector<int> &v) {
    if (v.size() == 0)
        cout << "[] - the list is empty" << endl;
    else    
        display_list(v);
}

***************************************************************
This function is called when the user selects add a number
to the list from the main menu

Note that the vector parameter must NOT be const since
it will be changing the list of numbers
***************************************************************
void handle_add(vector<int> &v) {
    int num_to_add {};
    cout << "Enter an integer to add to the list: ";
    cin >> num_to_add;
    v.push_back(num_to_add);
    cout << num_to_add << " added" << endl;
}

***************************************************************
This function is called when the user selects calculate the mean
from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************
void handle_mean(const vector<int> &v) {
    if (v.size() == 0)
        cout << "Unable to calculate mean - list is empty" << endl;
    else    
        cout << "The mean is " << calculate_mean(v) << endl;
}

***************************************************************
This function is called when the user selects the smallest 
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************
void handle_smallest(const vector<int> &v) {
     if (v.size() == 0)
        cout << "Unable to determine the smallest - list is empty" << endl;
    else    
        cout << "The smallest element in the list is " << get_smallest(v) << endl;
}

***************************************************************
This function is called when the user selects the largest 
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************
void handle_largest(const vector<int> &v) {
     if (v.size() == 0)
        cout << "Unable to determine the largest - list is empty" << endl;
    else    
        cout << "The largest element in the list is " << get_largest(v) << endl;
}

***************************************************************
This function is called when the user selects the find 
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************
void handle_find(const vector<int> &v) {
    int target{};
    cout << "Enter the number to find: ";
    cin >> target;
    if ( find(v, target)) 
        cout << target << " was found" << endl;
    else
        cout << target << " was not found" << endl;
}


***************************************************************
This function is called when the user selects the quit 
option from the main menu
***************************************************************
void handle_quit() {
    cout << "Goodbye" << endl;
}

***************************************************************
This function is called whenever the user enters a selection
and we don't know how to handle it.
It is not one of the valid options in the main menu
***************************************************************
void handle_unknown() {
    cout << "Unknown selection - try again" << endl;
}

***************************************************************
This function expects a list of integers as a vector
and displays all the integers in the list in square brackets
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************
void display_list(const vector<int> &v) {
    cout << "[ ";
    for (auto num: v)
        cout << num << " ";
    cout << "]" << endl;
}

***************************************************************
This function expects a list of integers as a vector
and returns the calculated mean
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
Note: the list must not be empty
***************************************************************
double calculate_mean(const vector<int> &v) {
    int total {};
    for (auto num: v)
        total += num;
    return static_cast<double>(total)/v.size();
}

***************************************************************
This function expects a list of integers as a vector
and returns the largest integer in the list
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
Note: the list must not be empty
***************************************************************
int get_largest(const vector<int> &v) {
    int largest = v.at(0);
    for (auto num: v) 
        if (num > largest)
            largest = num;
    return largest;
}

***************************************************************
This function expects a list of integers as a vector
and returns the smallest integer in the list
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
Note: the list must not be empty
***************************************************************
int get_smallest(const vector<int> &v) {
    int smallest = v.at(0);
    for (auto num: v) 
        if (num < smallest)
            smallest = num;
    return smallest;
}

***************************************************************
This function searches the list of integers as a vector
for the given integer target

If the target is found in the vector true is returned
If the target is not found in the vector false is returned

Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************
bool find(const vector<int> &v, int target) {
    for (auto num: v)
        if (num == target)
            return true;
    return false;
}

*/