/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 05.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Not ( ! )    Negation
 * And ( && )   logical and
 * Or  ( || )   logical or
 * 
 * Precedence
 * NOT has higher precedence than AND
 * AND has higher precedence than OR
 * NOT is unary operator
 * AND and OR are binary operators
 * 
 * num1 >= 10 && num1 < 20
 * num1 <= 10 || num1 >= 20
 * !is_raining && temperature > 32.0
 * is_raining || is_snowing
 * temperature > 100 && is_humid || is_raining
 * 
 * Short-Circuit Operators Evaluation
 * When evaluating a logical expression C++ stops as soon as the result is known.
 * 
 * If any expresssion is false, the compiler already knows the result is false.
 * exper1 && exper2 && exper3
 * 
 * If any expresssion is true, the compiler already knows the result is true.
 * exper1 || exper2 || exper3
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;

int main() {
    
    int num {};
    const int lower {10};
    const int upper {20};
    
    cout << boolalpha;
    
    cout << "=================================================================" << endl;
    
    // Determine if an entered integer is between two other integers
    // Assume lower < upper
    cout << "Enter an integer - The bounds are " << lower << " and " << upper << " : ";
    cin >> num;
    
    bool within_bounds {false};
    
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;
    
    cout << "=================================================================" << endl;
    
    // Determine if an entered integer is outside two other integers
    // Assume lower < upper
    cout << "Enter an integer - The bounds are " << lower << " and " << upper << " : ";
    cin >> num;
    
    bool outside_bounds {false};
    
    outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << endl;
    
    cout << "=================================================================" << endl;
    
    // Determine if an entered integer is exacity two other integers
    // Assume lower < upper
    cout << "Enter an integer - The bounds are " << lower << " and " << upper << " : ";
    cin >> num;
    
    bool on_bounds {false};
    
    on_bounds = (num == lower || num == upper);
    cout << num << " is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << endl;
    
    cout << "=================================================================" << endl;
    
    // Determine if you need to wear a coat based on temperature and wind speed
    bool wear_coat {false};
    double temperature {};
    int wind_speed {};
    
    const int wind_speed_for_coat {25};
    const double temperature_for_coat {45};
    
    // Require a coat if either wind is too high OR temperature is too low
    cout << "Enter the current temperature in (F) : ";
    cin >> temperature;
    
    cout << "Enter windspeed in (mph) : ";
    cin >> wind_speed;
    
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "\nDo you need to wear a coat using OR? : " << wear_coat << endl;
    
    // Require a coat if BOTH the windspeed is too high AND temperature is too low
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? : " << wear_coat << endl;
    
    cout << "=================================================================" << endl;
    
    return 0;
}