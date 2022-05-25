/*
 * =================================================================
 * Name: Fatmir Gusani 
 * Date: 22.05.2022 
 * =================================================================
*/ 

#include <iostream>
#include <string>

/*
* =================================================================
* My Solution
* =================================================================
*/

using namespace std;

void employee_profile() {
    
    //----WRITE YOUR CODE BELOW THIS LINE---
    string name;
    int age;
    double hourly_wage = 23.50;
    
    cout << "Enter name and age separated by a single space: ";
    cin >> name >> age;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << name << " " << age << " " << hourly_wage;
}

/*
* =================================================================
* Frank's Solution
* =================================================================
 
using namespace std;

void employee_profile() {
    
    //----WRITE YOUR CODE BELOW THIS LINE---
    string name;
    int age {0};
    double hourly_wage {23.50};
    
    cin >> name;
    cin >> age;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << name << " " << age << " " << hourly_wage;
}

*/