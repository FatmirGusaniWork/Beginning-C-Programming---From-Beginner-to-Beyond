/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 23.07.2022 
 * =================================================================
 * Notes
 * =================================================================
 * DEFAULT ARGUMENT VALUES
 * When a function is called, all argument must be supplied
 * Sometimes some of the arguments have the same value most of the time
 * We can tell the compiler to use default value if the argument are not supplied
 * Default values can be in prototype or definition not both
 *  - Best pratice in the prototype
 *  - Must appear at the tail end of the parameter list
 * Can have multiple default values
 *  - Must appear consecutively at the tail end of the parameter list
 * =================================================================
 * EXAMPLE - NO DEFAULT ARGUMENTS
 * double calc_cost(double base_cost, double tax_rate);
 * 
 * double calc_cost( double base_cost, double tax_rate ) {
 *      return base_cost += ( base_cost * tax_rate );
 * }
 * 
 * int main () {
 *      double cost { 0 };
 *      cost = calc_cost ( 100.0, 0.06 );
 *      return 0;
 * }
 * =================================================================
 * EXAMPLE - SINGLE DEFAULT ARGUMENTS
 * double calc_cost(double base_cost, double tax_rate = 0.06);
 * 
 * double calc_cost( double base_cost, double tax_rate ) {
 *      return base_cost += ( base_cost * tax_rate );
 * }
 * 
 * int main () {
 *      double cost { 0 };
 *      cost = calc_cost ( 200.0 );             // will use the default tax
 *      cost = calc_cost ( 100.0, 0.00 );       // will use the 0.08 ot the default
 *      return 0;
 * }
 * =================================================================
 * EXAMPLE - MULTIPLE DEFAULT ARGUMENTS
 * double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
 * 
 * double calc_cost( double base_cost, double tax_rate, double shipping) {
 *      return base_cost += ( base_cost * tax_rate ) + shipping;
 * }
 * 
 * int main () {
 *      double cost { 0 };
 *      cost = calc_cost ( 100.0, 0.08, 4.25);      // will use no default
 *      cost = calc_cost ( 100.0, 0.08 );           // will use the shipping default
 *      cost = calc_cost ( 200.0 );                 // will use default tax and shipping
 *      return 0;
 * }
 * =================================================================
 */

#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;

double calc_cost ( double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50 );
void greeting ( string name, string perfix = "Mr.", string suffix = " " );



double calc_cost ( double  base_cost, double tax_rate, double shipping ) {
    return base_cost += ( base_cost * tax_rate ) + shipping;
}

void greeting ( string name, string prefix, string suffix ) {
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

int main() {
    
    double cost { 0 };
    cost = calc_cost(100.0, 0.08, 4.25);        // will use no default 100 + 8 + 4.25
    
    cout << fixed << setprecision(2);
    cout << "Cost is : " << cost << endl;       // 112.25
    
    cost = calc_cost(100.0, 0.08);              // will use degault shipping
    cout << "Cost is : " << cost << endl;       // 111.50
    
    cost = calc_cost(200.0);                    // will use deault tax and shipping
    cout << "Cost is : " << cost << endl;       // 215.50
    
    cost = calc_cost();                         // will use default cost, tax and shipping
    cout << "Cost is : " << cost << endl;       // 109.50
    
    greeting("Glenn Jones", "Dr", "M.D.");
    greeting("James Roger", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs", "Ph.D.");
    
    return 0;
}