/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 23.08.2022 
 * =================================================================
 * Notes
 * =================================================================
 * RELATIONSHIP BETWEEN ARRAYS AND POINTERS
 * The value of an array name is the address of the first element in te array.
 * The vlaue of a pointer variable is an address
 * If the pointer points to th same data type as the array element then the pointer and array name can be ised intercangeably ( almost ).
 * =================================================================
 * RELATIONSHIP BETWEEN ARRAYS AND POINTERS
 * 
 *  int scores[] { 100, 95, 89 };
 * 
 *  cout << scores << endl;             // 0x61fec8
 *  cout << *scores << endl;
 * 
 *  int *score_ptr << endl;
 * 
 *  cout << score_ptr << endl;
 *  cout << *score_ptr << endl;
 * =================================================================
 * RELATIONSHIP BETWEEN ARRAYS AND POINTERS
 *  int scores[] { 100, 95, 89 };
 *  int *scores_ptr { scores };
 *  cout << score_ptr[0] << endl;       // 100
 *  cout << score_ptr[1] << endl;       // 95
 *  cout << score_ptr[2] << endl;       // 89
 * =================================================================
 * USING POINTERS IN EXPRESSIONS
 *  int scores[] { 100, 95, 89 };
 *  int socre_ptr { score };
 *  cout << ( score_ptr + 1 ) << endl;
 *  cout << ( score_ptr + 2 ) << endl;
 * ================================================================= 
 * USING POINTERS IN EXPRESSIONS
 *  int scores[] { 100, 95, 89 };
 *  int *socre_ptr { scores };
 *  cout << *scores_ptr << endl;
 *  cout << ( score_ptr + 1 ) << endl;
 *  cout << ( score_ptr + 2 ) << endl;
 * =================================================================
 */
 

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
    
    int scores [] { 100, 95, 89 };
    
    cout << "Value of scores : " << scores << endl;
    
    int *score_ptr { scores };
    cout << "Value of score_ptr : " << score_ptr << endl;
    
    cout << "\nArray subscript notation --------------------" << endl;
    cout << scores[ 0 ] << endl;
    cout << scores[ 1 ] << endl;
    cout << scores[ 2 ] << endl;
    
    cout << "\nPointer subscript notation --------------------" << endl;
    cout << score_ptr << endl;
    cout << score_ptr + 1 << endl;
    cout << score_ptr + 2 << endl;
    
    cout << "\nPointer offset notation --------------------" << endl;
    cout << *score_ptr << endl;
    cout << *( score_ptr + 1 ) << endl;
    cout << *( score_ptr + 2 ) << endl;
    
    cout << "\nArray offset notation --------------------" << endl;
    cout << *scores << endl;
    cout << *( scores + 1 ) << endl;
    cout << *( scores + 2 ) << endl;
    
    return 0;
}