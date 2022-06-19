/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 18.06.2022 
 * =================================================================
 * Notes
 * =================================================================
 * NESTED LOOPS
 * Loops nested within another loop.
 * Can be many as many levels deep as the program needs.
 * Very useful with multi-Dimensional data structures
 * Outer loop vs Inner loop
 * =================================================================
 * for ( outer_val {1}; outer_val <= 2; ++outer_val )
 *      for ( inneer_val {1}; inner_val <= 3; ++inner_val )
 *          cout << outer_val << ", " << inner_val << endl;
 * =================================================================
 * MULTIPLICATION TABLE
 * for ( int num1 {1}; num1 <= 10; ++num1 ) {
 *      for ( int num2 {1}; num2 <= 10; ++num2 ) {
 *          cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
 *      }
 *      cout << "------------------" << endl;
 * }
 * =================================================================
 * 2D ARRAY - SET ALL ELEMENTS TO 1000
 * int grid [5][3] {};
 * 
 * for ( int row {0}; row < 5; ++row ) {
 *      for ( int col {0}; col < 3; ++col ) {
 *          grid[row][col] = 1000;
 *      }
 * }
 * =================================================================
 * 2D ARRAY - DISPLAY ELEMENTS
 * for ( int row {0}; row < 5; ++row ) {
 *      for ( int col {0}; col < 3; ++col ) {
 *          cout << grid[row][col] << " ";
 *      }
 *      cout << endl;
 * }
 * =================================================================
 * 2D VECTOR - DISPLAY ELEMENTS
 * vector < vector < int > > vector_2d {
 * { 1, 2, 3 },
 * { 10, 20, 30, 40 },
 * { 100, 200, 300, 400, 500 }
 * };
 * 
 * for ( auto vec : vector_2d {
 *      for ( auto val : vec ) {
 *          cout << val << " ";
 *      }
 *      cout << endl;
 * }
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    for ( int num1 {1}; num1 <= 10; ++num1 ) {
        for ( int num2 {1}; num2 <= 10; ++num2 ) {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "----------------" << endl;
    }
    
    
    return 0;
}