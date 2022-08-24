/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 23.08.2022 
 * =================================================================
 * Notes
 * =================================================================
 * DEREFENCING A POINTER
 * Access the data we're pointing to - dereferencing a pointer
 * 
 * If score_ptr is a pointer and has a valid address.
 * Then you can access the data at the address contained in the score_ptr using the dereferencing operator *
 * 
 *  int score { 200 };
 *  int *score_ptr { &score };
 * 
 *  cout << *score_ptr << endl;         // 100
 * 
 *  *score_ptr = 200;
 *  cout << *score_ptr << endl;         // 200
 *  cout << score << endl;              // 200
 * =================================================================
 * DEREFENCING A POINTER
 * Access the data we're pointing to
 * 
 *  double high_temp { 100.7 };
 *  double low_temp { 37.4 };
 *  double *temp_ptr { &high_temp };
 * 
 *  cout << *temp_ptr << endl;          // 100.7
 * 
 *  temp_ptr = &low_temp
 * 
 *  cout << *temp_ptr << endl;          // 37.4
 * =================================================================
 * DEREFENCING A POINTER
 * Access the data we're pointing to
 * 
 *  String name {"Frank"};
 * 
 *  string string_ptr { &name };
 * 
 *  cout << *string_ptr << endl;        // Frank
 * 
 *  name = "James";
 * 
 *  cout << *string_ptr << endl;        // James
 * =================================================================
 */

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
    
    cout << "=================================================================" << endl;
    
    int score { 100 };
    int *score_ptr { &score };
    
    cout << *score_ptr << endl;         // 100
    
    *score_ptr = 200;
    
    cout << *score_ptr << endl;         // 200
    cout << score << endl;              // 200
    
    cout << "=================================================================" << endl;
    
    double high_temp { 100.7 };
    double low_temp { 37.4 };
    double *temp_ptr { &high_temp };
  
    cout << *temp_ptr << endl;          // 100.7
  
    temp_ptr = &low_temp;
  
    cout << *temp_ptr << endl;          // 37.4
    
    cout << "=================================================================" << endl;
    
    string name = {"Frank"};
  
    string *string_ptr { &name };
  
    cout << *string_ptr << endl;        // Frank
  
    name = "James";
  
    cout << *string_ptr << endl;        // James
    
    cout << "=================================================================" << endl;
    
    vector <string> stooges { "Larry", "Moe", "Curly" };
    vector <string> *vector_ptr { nullptr };
    
    vector_ptr = &stooges;
    
    cout << "First Stooges : " << (*vector_ptr).at(0) << endl;
    
    cout << "Stoogas : ";
    
    for (auto stooges : *vector_ptr )
        cout << stooges << " ";
    cout << endl;
    
    return 0;
}