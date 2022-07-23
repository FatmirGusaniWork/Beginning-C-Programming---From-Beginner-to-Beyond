#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int random_number {};
    size_t count { 10 };            // Number of random numbersto generate
    int min { 1 };                  // Lower bound ( inclusive )
    int max { 6 };                  // Upper bound ( inclusive )
    
    // Seed the random number generator
    // If you don't seed the generator you will get the same requence random number every run
    
    cout << "RAND_MAX on my system is : " << RAND_MAX << endl;
    srand( time ( nullptr ) );
    
    for( size_t i { 1 }; i <= count; ++i ) {
        random_number = rand() % max + min;         // generate a random number [ min, max ]
        cout << random_number << endl;
    }
    
    return 0;
}