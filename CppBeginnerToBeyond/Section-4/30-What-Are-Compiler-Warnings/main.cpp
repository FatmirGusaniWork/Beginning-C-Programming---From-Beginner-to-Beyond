// Name : Fatmir Gusani //
// Date : 21.05.2022 //

#include <iostream>

int main() {
    
    // 6:9: warning: variable 'favorite_number' set but not used [-Wunused-but-set-variable]
    int favorite_number;
    // FIXED WARNING // std::cout << favorite_number << std::endl; //
    
    favorite_number = 100;
    
    std::cout << "Hello World" << std::endl;
    
    // 8:18: warning: 'favorite_number' is used uninitialized in this function [-Wuninitialized]
    std::cout << favorite_number << std::endl;
    // FIX WARNING // Give 'favorite_number' a value. // int favorite_number = 17; //
    
    return 0;
}