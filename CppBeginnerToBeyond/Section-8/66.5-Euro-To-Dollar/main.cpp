/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 01.06.2022 
 * =================================================================
 */
 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    const double usd_per_eur {1.19};
    
    cout << "=================================================================" << endl;
    
    cout << "Welcome to the EUR to USD converter" << endl;
    
    cout << "=================================================================" << endl;
        
    cout << "Enter the value in EUR: ";
    
    double euros {0.0};
    double dollar {0.0};
    
    cin >> euros;
    
    dollar = euros * usd_per_eur;
    
    cout << euros << " Euros is equivalent to " << dollar << " Dollars" << endl;
    
    return 0;
}