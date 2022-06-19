/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 17.06.2022 
 * =================================================================
 * Code Exercise
 * =================================================================
 * For loop - Sum of Odd Integers
 * Write code that uses a for loop to calculate the sum of the odd integers from 1 to 15, inclusive. 
 * The final result should be stored in an integer variable named sum
 * You can find my solution by clicking on the solution.txt file on the left pane. 
 * But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
 * =================================================================
 */
 
int calculate_sum() {
    //---- WRITE YOUR CODE BELOW THIS LINE
    
    int sum {0};
    
    for (int i=1;i<=15; ++i) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    //---- WRITE YOUR CODE ABOVE THIS LINE
    //---- DO NOT MODIFY THE CODE BELOW
    return sum;
}