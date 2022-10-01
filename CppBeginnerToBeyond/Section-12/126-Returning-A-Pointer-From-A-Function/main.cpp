/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 01.10.2022 
 * =================================================================
 * Notes
 * =================================================================
 * RETURNING A POINTER FROM A FUNCTION
 * Functions can also return pointer
 *      type *function();
 * Should return pointer to
 *  - Memory dynamically allocated in the function
 *  - To data that was passed in
 * Never return a pointer to a local function variable
 * =================================================================
 * RETURNING A PARAMETER
 *      int *largest_int(int *int_ptr1, int *int_ptr2) {
 *          if( *int_ptr1 > *int_ptr2)
 *              return int_ptr1;
 *          else
 *              return int_ptr2;
 *      }
 * =================================================================
 * RETURNING A PARAMETER
 *      int main() {
 *          int a {100};
 *          int b {100};
 *          
 *          int *largest_ptr {nullptr};
 *          largest_ptr = largest_int ( &a, &b );
 *          cout << *largest_ptr << endl;           // 200
 *          return 0;
 *      }
 * =================================================================
 * RETURNING DYNAMICALLY ALLOCATED MEMORY
 *      int *create_array( size_t size, int init_value = 0 ) {
 *          int *new_storage { nullptr };
 * 
 *          new_storage = new int [size];
 * 
 *          for( size_t i{0}; i < size; ++i)
 *              *( new_storage + i ) = init_value;
 *          return new_storage;
 *      }
 * =================================================================
 * RETURNING DYNAMICALLY ALLOCATED MEMORY
 *      int main() {
 *          int *my_arrayl                          // will be allocated by the function
 * 
 *          my_array = create_array( 100, 20 );     // create the array
 * 
 *          // use it
 *          
 *          delete [] my_array;                     be sure to free the storage
 *      
 *          return 0;
 *      }
 * =================================================================
 * NEVER RETURN A POINTER TO A LOCAL VARIABLE!!
 * 
 *      int *dont_do_this () {
 *          int size {};
 *          . . .
 *          return &size;
 *      }
 * 
 *      int *or_this () {
 *          int size {};
 *          int *int_ptr { &size };
 *          . . .
 *          return int_ptr;
 *      }
 * =================================================================
 */

#include <iostream>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::array;

int *create_array( size_t size, int init_value = 0 ) {
    int *new_storage { nullptr };

    new_storage = new int [size];

    for( size_t i{0}; i < size; ++i)
       *( new_storage + i ) = init_value;
    return new_storage;
}

void display( const int *const array, size_t size ) {
    for ( size_t i {0}; i < size; ++i )
        cout << array[i] << " ";
    cout << endl;
}


int main() {
    int *my_array {nullptr};
    size_t size;
    int init_value {};
    
    cout << "\nHow many integers would you luke to allocate? ";
    cin >> size;
    cout << "What value would like them initialized to? ";
    cin >> init_value;
    
    my_array = create_array( size, init_value );
    cout << "\n=================================================================" << endl;
    
    display( my_array, size );
    delete [] my_array;
    return 0;
}