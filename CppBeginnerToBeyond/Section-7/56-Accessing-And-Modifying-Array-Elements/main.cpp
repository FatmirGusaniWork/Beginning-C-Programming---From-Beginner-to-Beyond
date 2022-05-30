/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 30.05.2022 
 * =================================================================
 * Notes
 * =================================================================
 * How do they work?
 * The name of the array represent the location of the first element in the array (index 0).
 * The [index] represent the offset from the beginning of the array.
 * C++ simply performs a calculationto find the correct element.
 * Remember - no bounds checking
 * 
 */
 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    char vowels[] {'a','e','i','o','u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
//    Out of bounds - dont do this //
//    cin >> vowels[5]; //

    double hi_temp[] {90.1,98.8,77.5,81.6};
    cout << "\nThe first high temperature is: " << hi_temp[0] << endl;
    
    hi_temp[0] = 100.7;
    
    cout << "The first high temerature is now: " << hi_temp[0] << endl;
    
    // Random numbers when provided with numbers less then the size of the array. //
    int test_score[5] {100, 90, 80, 70, 60};
    
    cout << "\nFirst score at index 0: " << test_score[0] << endl;
    cout << "\nFirst score at index 1: " << test_score[1] << endl;
    cout << "\nFirst score at index 2: " << test_score[2] << endl;
    cout << "\nFirst score at index 3: " << test_score[3] << endl;
    cout << "\nFirst score at index 4: " << test_score[4] << endl;

    cout << "\nEnter 5 test scores: ";
    cin >> test_score[0];
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];
    cin >> test_score[4];
    
    cout << "\nTe updated array is:" << endl;
    cout << "First score at index 0: " << test_score[0] << endl;
    cout << "Second score at index 1: " << test_score[1] << endl;
    cout << "Third score at index 2: " << test_score[2] << endl;
    cout << "Fourth score at index 3: " << test_score[3] << endl;
    cout << "Fifth score at index 4: " << test_score[4] << endl;
    
    // Hexadecimal number is the actual memory address or the storage location where the array is located. //
    cout << "\nNotice what the value of the array name is: " << test_score << endl;
    
    return 0;
}