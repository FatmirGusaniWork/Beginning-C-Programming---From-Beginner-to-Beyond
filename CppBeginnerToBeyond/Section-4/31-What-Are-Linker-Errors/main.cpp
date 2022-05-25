// Name : Fatmir Gusani //
// Date : 21.05.2022 //

// NOTE //
// The Linker is having trouble linking all the objects files together to create an executable //
// Usually there is a library or object file that is missing //

#include <iostream>

// undefined reference to 'x' // not defined here, but defined somewhere else. Cannot find where 'x' is defined //
extern int x;

int main() {
    
    std::cout << "TEST" << std::endl;
    
    std::cout << x;
    
    return 0;
}