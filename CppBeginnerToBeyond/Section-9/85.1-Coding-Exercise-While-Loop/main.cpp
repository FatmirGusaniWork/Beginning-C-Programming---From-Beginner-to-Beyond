/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 18.06.2022 
 * =================================================================
 * Code Exercise
 * =================================================================
 * Given a vector of integers, determine how many integers are present before you see the value -99 . Note, it's possible -99 is not in the vector!
 * If -99 is not in the vector then the result will be equal to the number of elements in the vector.
 * The final result should be stored in an integer variable named count
 * Note that you the different vectors will be tested against your code. You do not need to declare the vector of integers. vec is the name of the vector you should use.
 * You can find my solution by clicking on the solution. txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
 * =================================================================
 */
 
#include <iostream>
#include <vector>
using namespace std;

int count_numbers( const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    
    int count {0};
    size_t index {0};  // See the Q/A forum for more about size_t
                       // size_t is an unsigned int
                       // you can replace size_t with int or unsigned int and it will work fine
    
    while (index < vec.size() && vec.at(index) != -99  ) {
        ++count;
        ++index;
    }
        
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE----
    return count;
}