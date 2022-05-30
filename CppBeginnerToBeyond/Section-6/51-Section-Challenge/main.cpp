/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 27.05.2022 
 * =================================================================
 * Challenge
 * =================================================================
 * Frank's Carpet cleaning service.
 * Charges:
 *      $25 per small room.
 *      $35 per large room.
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * =================================================================
 * Prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 * 
 * Estimate for the cleaning service:
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * Tax: $6.6
 * =================================================================
 * Total estimate : $116.6
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
   
    const int price_of_small_room {25};
    const int price_of_large_room {35};
    const int estimate_expiry {30};
    const double tax {0.06};
    
    cout << "=================================================================" << endl;
    cout << "Frank's Carpet Cleaning Service" << endl;
    cout << "=================================================================" << endl;
    
    cout << "How many small rooms would you like cleaned?: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout << "How many large rooms would you like cleaned?: ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    cout << "=================================================================" << endl;
    
    cout << "Price for small room: $" << price_of_small_room << endl;
    cout << "Price for large room: $" << price_of_large_room << endl;
    
    cout << "=================================================================" << endl;
    
    int total_price_of_small_room {number_of_small_rooms * price_of_small_room};
    int total_price_of_large_room {number_of_large_rooms * price_of_large_room};
    
    cout << "Total price for small room: $" << total_price_of_small_room << endl;
    cout << "Total price for large room: $" << total_price_of_large_room << endl;
    cout << "Cost: $" << total_price_of_large_room + total_price_of_small_room << endl;
    cout << "Tax: $" << (total_price_of_large_room + total_price_of_small_room) * tax << endl;
    
    cout << "=================================================================" << endl;
    
    cout << "Total estimate: $" << (total_price_of_large_room + total_price_of_small_room) + (total_price_of_large_room + total_price_of_small_room) * tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << "=================================================================" << endl;

    return 0;
}


/* 
 * Frank's Solution

#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    
    int small_rooms {0};
    cout << "How many small rooms would you like cleaned?: ";
    cin >> small_rooms;
    
    int large_rooms {0};
    cout << "How many large rooms would you like cleaned?: ";
    cin >> large_rooms;
    
    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    cout << "estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: $ << small_rooms << endl;
    cout << "Number of large rooms: $ << large_rooms << endl;
    
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large rooms: $" << price_per_large_room << endl;
    
    cout << "Cost: $" << (price_per_small_room * small_rooms) + (price_per_large_rooms * large_rooms) << endl;
    
    cout << "Tax: $" 
                << ((price_per_small_room * small_rooms) + 
                    (price_per_large_rooms * large_rooms)) * sales_tax
                << endl;

    cout << "=================================================================" << endl;
    cout << "Total estimate: $" 
         << ((price_per_small_room * small_rooms) + (price_per_large_rooms * large_rooms)) +
            (((price_per_small_room * small_rooms) + (price_per_large_rooms * large_rooms)) * sales_tax)
         << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}

*/
    