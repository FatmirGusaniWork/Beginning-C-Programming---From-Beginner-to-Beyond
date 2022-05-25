/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 22.05.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Character Type (char)
 * Used to represent single character, 'A','X','@'.
 * Wider types are used to repersent wide character set.
 * char (8 bit), char16_t (16 bit), char32_t (32 bit) and wchar_t (largest available character set).
 * 
 * Integer Type (int)
 * Used to represent whole numbers
 * Signed and Unsigned versions.
 * Signed int can be negitive number and positive numbers.
 * Unsigned int can only be 0 or positive number only.
 * signed short int (at least 16 bit), signed int (at least 16 bits, signed long int (at least 32 bit and signed long long int (at least 64 bit).
 * unsigned short int (at least 16 bit), unsigned int (at least 16 bits, unsigned long int (at least 32 bit and unsigned long long int (at least 64 bit).
 * 
 * Floating-Point Type (float)
 * Used to represent non-integer numbers.
 * Represented by mantissa and exponent (scientific notation).
 * Precision is the number of digits in the mantissa.
 * Precision and size are compiler dependent.
 * float (7 decimal digits), double (15 decimal digits) and long double (19 decimal digits).
 * 
 * Boolean Type (bool)
 * Used to represent true or false.
 * Zero is false.
 * Non-zero is true.
 * bool (8 bit, true or false [C++ Keywords]).
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    /*
    * =================================================================
    * Character Type
    * =================================================================
    */

     // Notice the single quotes around the character
     // char middle_initial {'J'};
    char middle_initial = 'J';
 
    cout << "My middle initial is: " << middle_initial << endl;
 
    /*
    * =================================================================
    * Integer Type
    * =================================================================
    */
    
    unsigned short int exam_score {55};
    
    cout << "My exam score was: " << exam_score << endl;
    
    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
    
    long people_in_florida {2'061'000};
    cout << "There is about " << people_in_florida << " people in Florida" << endl;
    
    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;
    
    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
    
    /*
    * =================================================================
    * Floating-Point Type
    * =================================================================
    */
 
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout << "Pi is " << pi << endl;
 
    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;
    
    /*
    * =================================================================
    * Boolean Type
    * =================================================================
    */
 
    bool game_over {false};
    cout << "The value of game over is: " << game_over << endl;

    /*
    * =================================================================
    * Overflow Example
    * =================================================================
    */
 
    short value1 {30'000};
    short value2 {1'000};
    short product {value1 * value2};
    
    // value1 and value2 fit in a short, but the product value is to large to fit into a short.
    // Could fix the problem by making the product a standard int.
    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;
    
    return 0;
    
}