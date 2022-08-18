/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 18.08.2022 
 * =================================================================
 * Notes
 * =================================================================
 * ACCESSING POINTER ADDRESS?
 * & The address operator
 * 
 * Variable are stored in unique addresses
 * Unary operator
 * Evaluates to the address of its operand
 *  - Operand connot be a constant or expression tha evaluates to temp values
 * 
 *  int num {10};
 * 
 *  cout << "Value of num is: " << num << endl;              // 10
 *  cout << "sideof of num is: " << sizeof num << endl;      // 4
 *  cout << "Address of num is: " << &num << endl;           // 0x61ff1c   
 * =================================================================
 * EXAMPLE
 * 
 *  int *p
 * 
 *  cout << "Value of p is: " << p << endl;          // 0x61ff60 - garbage
 *  cout << "Address of p is: " << &p << endl;       // 0x61ff18
 *  cout << "sizeof of p is: " << sizeof p << endl;  // 4
 *  p = nullptr;                                     // set p to point nowhere
 *  cout << "Value of p is: " << p << endl;          // 0
 * =================================================================
 * ACCESSING POINTER ADDRESSES?
 * 
 * sizeof a pointer variable
 * 
 * Don't confuse the size of a pointer and the size of what it points to.
 * All pointers in a program habe the same size
 * They may be pointing to very large or very small types
 *  
 *  int *p1 {nullptr};
 *  double *p2 {nullpte};
 *  unsigned long long *p3 {nullptr};
 *  vector<string> *p4 {nullptr};
 *  string *p5 {nullptr};
 * =================================================================
 * STORNG AN ADDRESS IN POINTER VARIABLE?
 * 
 * Typed pointers
 * 
 * The compiler will make sure that the address stored in a pointer variable is of the correct type
 * 
 *  int score {10};
 *  double high_temp {100.7};
 *  int * score_ptr {nullpte};
 *  score_ptr = &score                  // OK
 *  score_ptr = high_temp;              // Compiler Error, cant because poiner is an int but high_temp is a double.
 * =================================================================
 * STORIN AN ADDRESS IN POINTER VARIABLE?
 * & the address operator
 * 
 * Pointers are variables so they can change
 * Pointers can be null
 * Pointers can be unintialized
 * 
 *  double high_temp {100.7};
 *  double low_temp {37.2};
 * 
 *  double *temp_ptr;
 * 
 *  temp_ptr = &high_temp;              // pointers to high_temp
 *  temp_ptr = &low_temp;               // pointers to low_temp
 * 
 *  temp_ptr = nullptr;
 * =================================================================
 */

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
    
    
    cout << "THIS IS A TEST" << endl;
    int num {10};
    
    cout << "Value of num is: " << num << endl;
    cout << "sizeof of num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;
    
    int *p;
    cout << "\nValue of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof p << endl;
    
    p = nullptr;
    cout << "\nValue of p is: " << p << endl;
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout << "\nsizeof of p1 is: " << sizeof p1 << endl;
    cout << "sizeof of p2 is: " << sizeof p2 << endl;
    cout << "sizeof of p3 is: " << sizeof p3 << endl;
    cout << "sizeof of p4 is: " << sizeof p4 << endl;
    cout << "sizeof of p5 is: " << sizeof p5 << endl;
    
    int score { 10 };
    double high_temp {100.7};
    
    int *score_ptr {nullptr};
    
    score_ptr = &score;
    cout << "Value of num is: " << score << endl;
    cout << "Address of num is: " << &score << endl; 
    cout << "Value of score_ptr is: " << score_ptr << endl;
    
    // score_ptr = &high_temp;             // Compiler error;
    
    return 0;
}










