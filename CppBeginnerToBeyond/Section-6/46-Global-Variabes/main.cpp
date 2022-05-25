/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 22.05.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Global Variables are automatically initialized to zero.
 * Global Variables can be accessed from any part of the program.
 * Local Variables are limited to the statement in the main function that follows the declaration of the variable.
 * If a Variable with the same name is declared in both Local and Global, it will take the local value of that veriable.
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Global Variable //
int age = 18;

int main() {
    
    // Local Variable //
    int age = 19;
    
    cout << age << endl;
    
    return 0;
}