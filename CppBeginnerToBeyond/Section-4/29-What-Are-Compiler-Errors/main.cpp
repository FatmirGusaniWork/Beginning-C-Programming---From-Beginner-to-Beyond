// Name : Fatmir Gusani //
// Date : 21.05.2022 //

#include <iostream>

int main() {
    // 7:18: warning: missing terminating " character //
    std::cout << "TEST << std::endl;
    // FIX ERROR // std::cout << "TEST" << std::endl; //
    
    // 11:33: error: 'endll' is not a member of 'std' //
    std::cout << "TEST" << std::endll;
    // FIX ERROR // std::cout << "TEST" << std::endl; //
    
    // 15:37: error: expeted ';' before 'return'
    std::cout << "TEST" << std::endl
    // FIX ERROR // std::cout << "TEST" << std::endl; //
    
    // 17:5: error: invalid operands of type 'const char[12]' and 'int' to binary 'operator/'
    std::cout << ("TEST" / 125) << std::endl
    // FIX ERROR // Cant divid string into int // std::cout << "TEST" << std::endl; //
    
    // 19:5: error: return-statement with no value, in function returning 'int' [-fpermissive]
    return ;
    // FIX ERROR // return 0; //
    
    // 23:12: error: invalid conversion from 'cons char*' to 'int' [-fpermissive]
    return "joe";
    // FIX ERROR // return 0; //
    
    // 26:1: error: expected declartion before '}' token //
}}
    // FIX ERROR // Only one '}'