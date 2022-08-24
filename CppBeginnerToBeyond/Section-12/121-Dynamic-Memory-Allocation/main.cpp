/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 23.08.2022 
 * =================================================================
 * Notes
 * =================================================================
 * DYNAMIC MEMORY ALLOCATION
 * Allocating storage from the heap at runtime.
 * We often don't know how much storage we need until we need it.
 * We can allocate storage for a variable at run time.
 * Recall C++ Array
 *  - We had tp explicitly provide the size and it was fixed.
 *  - But vecots grow and shrink dynamicallly.
 * We can use pointers to access newly allocated heap storage.
 * =================================================================
 * DYNAMIC MEMORY ALLOCATION
 * Using new to allocate storage
 * When you allocate storage in the manner, the storage is on the heap, the allocated storage contains garbage data until you initialize it.
 *  int *int_ptr { nullptr };
 * 
 *  int_ptr = new int;                      // allocate an integer on the heap
 * 
 *  cout << int_ptr << endl;                // 0x2747f28
 * 
 *  cout << *int_ptr << endl;               // 41188048
 * 
 *  *int_ptr = 100;
 * 
 *  cout << *int_ptr << endl;               // 100
 * =================================================================
 * DYNAMIC MEMORY ALLOCATION
 * Using delete to deallocate storage.
 *  
 *  int *int_ptr { nullptr };
 *  int_ptr = new int;                      // allocate an integer on the heap
 * 
 *  ...
 * 
 *  delete int_ptr                          // frees the allocated storage
 * =================================================================
 * DYNAMIC MEMORY ALLOCATION
 * Using new[] to allocate storage for an array.
 * 
 *  int *array_ptr { nullptr };
 * 
 *  int size {};
 * 
 *  cout << "How big do you want thr array? ";
 *  cin >> size;
 * 
 *  array_ptr = new int[size];
 *  
 *  // we can access the array here
 *  // We'll see how in a few slides
 * =================================================================
 * DYNAMIC MEMORY ALLOCATION
 * Using new[] to allocate storage for an array.
 * 
 *  int *array_ptr { nullptr };
 * 
 *  int size {};
 * 
 *  cout << "How big do you want thr array? ";
 *  cin >> size;
 * 
 *  array_ptr = new int[size];
 *  
 *  ...
 *  
 *  delete [] array_ptr;            // free allocated storage
 * =================================================================
 */
 

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int *int_ptr { nullptr };
    
    int_ptr = new int;
    
    cout << int_ptr << endl;
    
    delete int_ptr;
    
    size_t size { 0 };
    
    double *temp_ptr { nullptr };
    
    cout << "How mamy temps? : ";
    cin >> size;
    
    while (true)
        temp_ptr = new double[ size ];
    
    cout << temp_ptr << endl;
    
    delete [] temp_ptr;
    
    
    return 0;
}