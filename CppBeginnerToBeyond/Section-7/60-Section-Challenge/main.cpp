/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 30.05.2022 
 * =================================================================
 * Challenge
 * =================================================================
 * Write a C++ program as follows:
 * 
 * Declare 2 empty vector of integers named
 * vector1 and vector2, respectively.
 * 
 * Add 10 and 20 to vector1 dynamiclly using push_back
 * Display the elemens in vector1 using the at() method as well as its size using the size() method
 * 
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display the element in vector2 using the at() method as well as its size the size() method.
 * 
 * Declare an empty 2D vector called vector_2d
 * Remember that a 2D vector is a vector of vector<int>
 * 
 * Add vector1 to vector_2d dyanmically using push_back
 * Add vector2 to vector_2d dyanmically using push_back
 * 
 * Display the element in vector_2d using the at() method
 * 
 * Chanage vector1.at(0) to 1000
 * 
 * Display the elements in vector_2d again using the at() method
 * 
 * Display the elements in vector1
 * 
 * What did you expect, did you get what you expected? what do you think happened.
 * 
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {

    vector <int> vector1 {};
    vector <int> vector2 {};
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "=================================================================" << endl;
    
    cout << "Display The Elements Of Vector 1: " << endl; 
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The Size Of Vector 1: " << vector1.size() << endl; 
    
    cout << "=================================================================" << endl;
        
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Display The Elements Of Vector 2: " << endl; 
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "The Size Of Vector 2: " << vector1.size() << endl; 
    
    cout << "=================================================================" << endl;
    
    vector <vector<int>> vector_2d {};
    
    // Adding vector1 and vector2 into the 2D-vector //
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "Display The Elements Of 2D-Vector: " << endl; 
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    cout << "=================================================================" << endl;
    
    vector1.at(0) = 1000;
    
    cout << "Updated Display The Elements Of 2D-Vector: " << endl; 
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    cout << "=================================================================" << endl;
    
    cout << "Updated Display The Elements Of Vector 1: " << endl; 
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The Size Of Vector 1: " << vector1.size() << endl; 
    
    cout << "=================================================================" << endl;
    
    // The value of vector1.at(0) got updated to 1000, but it didnt update the value in the vector_2d. // OUTPUT (10, 20), (100, 200) //
    // I displayed vector1 elements and the update value displayed 1000 and not 10. // OUTPUT (1000, 20) //
    return 0;
}

/*
    Frank's Solution
    
#include <iostream>
#include <vector>

using namespace std;

int main() {
        
//     Declare 2 empty vectors of integers named
//     vector1 and vector 2, respectively.
    
    vector <int> vector1;
    vector <int> vector2;
    
//    Add 10 and 20 to vector1 dynamically using push_back

    vector1.push_back(10);
    vector1.push_back(20);
    
//    Display the elements in vector1 using the at() method as well as its size using the size() method
    
    cout << "\nvector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;

//    Add 100 and 200 to vector2 dynamically using push_back

    vector2.push_back(100);
    vector2.push_back(200);
    
//    Display the elements in vector2 using the at() method as well as its size using the size() method

    cout << "\nvector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "vector2 contains " << vector2.size() << " elements" << endl;

//   Declare an empty 2D vector called vector_2d
//   Remember, that a 2D vector is a vector of vector<int>

    vector <vector<int>> vector_2d;
    
//    Add vector1 to vector_2d dynamically using push_back
//    Add vector2 to vector_2d dynamically using push_back

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
//    Display the elements in vector_2d using the at() method

    cout << "\nvector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << endl;

//   Change vector1.at(0) to 1000

    vector1.at(0) = 1000;
    
//    Display the elements in vector_2d again using the at() method

    cout << "\nvector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << endl;

//    Display the elements in vector1 

    cout << "\nvector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;
 
        What did you expect? 
        Did you expect to see the 1000 in the vector_2d after you changed vector1?

        Did you get what you expected? 
        
        What do you think happended?
        It looks like copies are being made, right? 


    cout << endl;
    return 0;
}

/*