/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 18.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * THE FOR LOOP
 * =================================================================
 * RANGE-BASED For LOOP
 * for ( var_type var name: sequence ) 
 *      statement;
 * 
 * for ( var_type var_name: sequence ) 
 * {
 *      statement:
 * }
 * =================================================================
 * int scores [] {100, 90, 97}
 * for ( int score : scores )
 *      cout << score << endl;
 * =================================================================
 * auto keyword tells the compiler to deduce the type itself.
 * int scores [] {100, 90, 97}
 * 
 * for ( auto score : scores ) 
 *      cout << score << endl;
 * =================================================================
 * vector <double> temps (87.2, 71.1, 80.0, 72.5};
 * 
 * double average_temp {};
 * double running_sum {};
 * 
 * for ( auto temp : temps ) 
 *      running_sum += temp;
 * 
 * average_temp = running_sum / temps.size();
 * =================================================================
 */
 
#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::setprecision;
using std::fixed;

int main() {
    
    cout << "=================================================================" << endl;
    
    int scores[] { 10, 20, 30 };
    
    for ( int score : scores )
        cout << score << endl;
        
    for ( auto score : scores )
        cout << score << endl;
        
    cout << "=================================================================" << endl;
    
    vector <double> temperatures { 87.9, 77.9, 80.0, 72.5 };
    
    double average_temp {};
    double total {};
    
    for ( auto temp : temperatures )
        total += temp;
    
    if ( temperatures.size() != 0 )
        average_temp = total / temperatures.size();
        
    cout << fixed << setprecision(1);
    cout << "Average temperature is " << average_temp << endl;
    
    cout << "=================================================================" << endl;
    
    for ( auto val : { 1, 2, 3, 4, 5 } )
        cout << val << endl;
    
    cout << "=================================================================" << endl;
    // C style string
    
    for ( auto c : "This is a test" )
        if ( c != ' ' )
            cout << c;
            
    cout << "\n=================================================================" << endl;
    
    for ( auto c : "This is a test" )
        if ( c == ' ' ) 
            cout << "\t";
        else
            cout << c;
    
    cout << "\n=================================================================" << endl;
    
    return 0;
}