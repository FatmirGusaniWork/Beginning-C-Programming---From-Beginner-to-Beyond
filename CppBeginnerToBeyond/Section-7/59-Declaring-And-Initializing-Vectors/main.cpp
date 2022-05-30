/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 30.05.2022 
 * =================================================================
 * Notes
 * =================================================================
 * Suppose we want to store test score for my school, I have no way of knowing how many student will register next year.
 * Options - pick a size that you are not likely to exceed and use static arrays or use a dynamic array such as vectors.
 * What is a vector?
 * A container in the C++ standard template library.
 * When creating a C++ vector, we are creating a C++ object and we can ask the object to perform operation for us.
 * An array that can grow and shrink in size at execution time.
 * Provides similar semantics and syntax as array.
 * Can provide bounds checking.
 * Can use lot of cool function like sort, reverse, find and more.
 * HAVE TO #include <vector>.
 * declaring by (vector <char> vawels, vector <int> test_scores).
 * Initializing (vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; // vector <int> test_scores {100, 98, 89, 93}; // vector <double> hi_temperature (365, 80.0); //
 * First Element is at index 0 and last element is at index -1.
 * Dynamic size, element are all the same type, stored configuously in memory, individual element can be accessed by their position or index.
 * If you use [] to access the vector element, then it will provide no bounds checking.
 * Vector elements will be automatically be initialized to 0 unless specify otherwise.
 * 
 * Can access vector elements by test_score[1] or test_score.at(1).
 * Can grow the elements by using the vector_name.push_back(element) // test_score.push_back(90);
 * The push_back() function inrease the size by one and add the element to the end of the vector. // the element you add must be the same type as the vector.
 * 
 * If gone out of bounds, many vector methods provide bounds checking, an exception and error message is generated.
 */

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main() {
    
    // NOTE //
    // Make sure that using std::vector is added as the namespace or you have to code it like std::vector <char> vowels
    // vector <char> vowels                                 // Empty //
    // vector <char> vowels (5);                            // 5 initialized to zero //
    vector <char> vowels{'a','e','i','o','u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
    // vector <int> test_score (3);                         // 3 elements all initialized to zero.
    // vector <int> test_score (3, 100);                    // 3 elements all initialized to 100.
    vector <int> test_score{100, 98, 89};
    
    cout << "\nTest score using array syntax:" << endl;
    cout << test_score[0] << endl;
    cout << test_score[1] << endl;
    cout << test_score[2] << endl;

    cout << "\nTest score using vector stntax:" << endl;
    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;
    cout << "\nThere are " << test_score.size() << " scores in the vector" << endl;
    
    cout << "\nEnter 3 test scores: ";
    cin >> test_score.at(0);
    cin >> test_score.at(1);
    cin >> test_score.at(2);
    
    cout << "\nUpdated test scores:" << endl;
    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;
    
    cout << "\nEnter a test score to add to the vector: ";
    int score_to_add {0};
    cin >> score_to_add;
    
    test_score.push_back(score_to_add);
    
    cout << "\nEnter one more test score to add to the vector: ";
    cin >> score_to_add;
    
    test_score.push_back(score_to_add);
    
    cout << "\nTest scores are now: " << endl;
    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;
    cout << test_score.at(3) << endl;
    cout << test_score.at(4) << endl;
    
    cout << "\nThere are now " << test_score.size() << " scores in the vector" << endl;
    
    // cout << "This should cause an exception... " << test_score.at(10);
    
    // Example of a 2D-vector
    vector <vector<int>> moving_ratings 
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };
    
    cout << "\nHere are the movie rating for reviewer #1 using vector syntax: " << endl;
    cout << moving_ratings[0][0] << endl;
    cout << moving_ratings[0][1] << endl;
    cout << moving_ratings[0][2] << endl;
    cout << moving_ratings[0][3] << endl;
    
    cout << "Here are the movie rating for reviewer #1 using vector syntax: " << endl;
    
    cout << moving_ratings.at(0).at(0) << endl;
    cout << moving_ratings.at(0).at(1) << endl;
    cout << moving_ratings.at(0).at(2) << endl;
    cout << moving_ratings.at(0).at(3) << endl;
    
    return 0;
}