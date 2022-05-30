/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 27.05.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Constant variable have names, occupy storage and are usually typed
 * The value of C++ constant cannot change once they're declared.
 * If the the user tries to change the value of a constant value, they will.
 * Type of constant, Literal constants, Declared constants (const keyword), Constant expression (constexpre keyword), Enumerated constants (enum keyword), Defined constants (#define).
 * =================================================================
 
    
 * Frank's Carpet cleaning service.
 * Charges $30 per room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days

 * Prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:

 * Estimate for the cleaning service:
 * Number of rooms: 2
 * Price per room: $30
 * Cost: $60
 * Tax: $3.6
 * =================================================================
 * Total estimate : $63.6
 * This estimate is valid for 30 days

 * Pseudcode:
 * Prompt the user to enter the number of rooms
 * Display number of rooms
 * Display price per room

 * Display cost: (number of rooms * price per room)
 * Display tax: (number of rooms * price per room * tax rate)
 * Display total estimate: (number of rooms * price per room) + (number of rooms * tax rate)
 * Display estimate expiration time
 */
    
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
    
int main() {
    
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room {32.5};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    
    cout << "Price per room : $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "=================================================================" << endl;
    cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    
    return 0;
}