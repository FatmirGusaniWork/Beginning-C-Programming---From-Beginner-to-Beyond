/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 25.06.2022 
 * =================================================================
 */

#include <iostream>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    char first_name[ 20 ] {};
    char last_name[ 20 ] {};
    char full_name[ 50 ] {};
    char temp[ 50 ] {};

    cout << "Please enter your first name : ";
    cin >> first_name;
    
    cout << "Please enter your last name : ";
    cin >> last_name;
    
    cout << "=================================================================" << endl;
    
    cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
    
    cout << "=================================================================" << endl;
    
    strcpy(full_name, first_name);      // copy first_name to full_name // right to left //
    strcat(full_name, " ");             // concatenate full_name and a space // right to left //
    strcat(full_name, last_name);       // concatenate last_nme to full_name // right to left //
    
    cout << "Your full name is " << full_name << endl;
    
    cout << "=================================================================" << endl;
    
    // Stops because of the space //
    cout << "Enter your full name : ";
    cin >> full_name;
    
    cout << "\nYour full name is " << full_name << endl;
    
    cout << "=================================================================" << endl;
    
    cout << "Enter your full name : ";
    cin.getline( full_name, 50 );
    cout << "\nYour full name is " << full_name << endl;
    
    cout << "=================================================================" << endl;
    
    
    strcpy(temp, full_name);
    if( strcmp( temp, full_name ) == 0 )        // string compare // if we get back a 0, that means that the string are the same //
        cout << temp << " and " << full_name << " and the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
        
    cout << "=================================================================" << endl;
    
    for( size_t i ( 0 ); i < strlen(full_name); ++i ) {
        if( isalpha ( full_name[ i ] ) )
            full_name[ i ] = toupper(full_name[ i ] );
    }
    
    cout << "Your full name is " << full_name << endl;
    
    cout << "=================================================================" << endl;
    
    
    if( strcmp ( temp, full_name ) == 0 )
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are differnet" << endl;
        
    cout << "=================================================================" << endl;
    
    cout << "Result of comparing " << temp << " and " << full_name << ":" << strcmp( temp, full_name ) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ":" << strcmp( full_name, temp ) << endl; 
    
    cout << "=================================================================" << endl;
    
    return 0;
}