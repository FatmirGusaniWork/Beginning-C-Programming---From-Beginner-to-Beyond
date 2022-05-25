// Name : Fatmir Gusani //
// Date : 21.5.2022 //

#include <iostream>

// Use the entire std namespace //
using namespace std;

int main() {
    
    int favorite_number;
    
    cout << "Enter your favorite number between 1 and 100: ";
    
    cin >> favorite_number;
    
    cout << "Amazing!! That's my favorite number too!" << std::endl;
    cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////
// Qualified Using namespace variant //

#include <iostream>

// Use only what you need // A better way //
using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int favorite_number;
    
    cout << "Enter your favorite number between 1 and 100: ";
    
    cin >> favorite_number;
    
    cout << "Amazing!! That's my favorite number too!" << std::endl;
    cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
    
    return 0;
}
