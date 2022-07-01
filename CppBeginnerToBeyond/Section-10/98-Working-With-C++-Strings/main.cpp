/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 26.06.2022 
 * =================================================================
 */
 
#include <iostream>
#include <iomanip>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::boolalpha;
using std::getline;

int main() {
    
    string s0;
    string s1 { "Apple" };
    string s2 { "Banana" };
    string s3 { "Kiwi" };
    string s4 { "apple" };
    string s5 { s1 };                   // Apple
    string s6 { s1, 0, 3 };             // App
    string s7 ( 10, 'X' );              // XXXXXXXXXX
    
    cout << s0 << endl;                 // No Garbage 
    cout << s0.length() << endl;        // Empty string
    
    cout << "=================================================================" << endl;
    
    cout << "Initialized to : " << s1 << endl;
    cout << "S1 is initialized to : " << s1 << endl;
    cout << "S2 is initialized to : " << s2 << endl;
    cout << "S3 is initialized to : " << s3 << endl;
    cout << "S4 is initialized to : " << s4 << endl;
    cout << "S5 is initialized to : " << s5 << endl;
    cout << "S6 is initialized to : " << s6 << endl;
    cout << "S7 is initialized to : " << s7 << endl;
    
    cout << "=================================================================" << endl;
    
    cout << "Comparison" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << " : " << ( s1 == s5 ) << endl;
    cout << s1 << " == " << s2 << " : " << ( s1 == s2 ) << endl;
    cout << s1 << " != " << s2 << " : " << ( s1 != s2 ) << endl;
    cout << s1 << " < " << s2 << " : " << ( s1 < s2 ) << endl;
    cout << s1 << " > " << s2 << " : " << ( s1 > s2 ) << endl;
    cout << s4 << " < " << s5 << " : " << ( s4 < s5 ) << endl;
    cout << s1 << " == " << "Apple" << " : " << ( s1 == "Apple" ) << endl;
    
    cout << "=================================================================" << endl;
    
    cout << "Assignment" << endl;
    
    s1 = "Watermelon";
    cout << "s1 is now : " << s1 << endl;                           // Watermelon
    
    s2 = s1;
    cout << "s2 is now : " << s2 << endl;                           // Watermelon
    
    s3 = "Frank";
    cout << "s3 is now : " << s3 << endl;                           // Frank
    
    s3 [ 0 ] = 'C';                                                 
    cout << "s3 change first letter to 'C' : " << s3 << endl;       // Crank
    
    s3.at( 0 ) = 'P';
    cout << "s3 change first letter to 'P' : " << s3 << endl;       // Prank
    
    cout << "=================================================================" << endl;
    
    cout << "Concatenation" << endl;
    
    s3 = "Watermelon";
    
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now : " << s3 << endl;
    
    cout << "=================================================================" << endl;
    
    cout << "Looping" << endl;
    
    s1 = "Apple";
    for( size_t i ( 0 ); i < s1.length(); ++i )
        cout << s1.at( i );
    
    cout << " Range-Base for Loop" << endl;

    for( char c : s1 )
        cout << c;
    
    cout << "\n=================================================================" << endl;
    
    cout << "Substring" << endl;
    
    s1 = "This is a test";
    
    cout << s1.substr( 0, 4 ) << endl;
    cout << s1.substr( 5, 2 ) << endl;
    cout << s1.substr( 10, 4 ) << endl;
    
    cout << "=================================================================" << endl;
    
    cout << "Erase" << endl;
    
    s1 = "This is a test";
    s1.erase( 0, 5 );
    cout << "s1 is now : " << s1 << endl;

    cout << "=================================================================" << endl; 
    
    cout << "Getline" << endl;
    
    string full_name {};
    
    cout << "Enter your full name : ";
    
    getline( cin, full_name );
    
    cout << "Your full name is : " << full_name << endl;
    
    cout << "=================================================================" << endl;
    
    cout << "Find" << endl;
    
    s1 = "The secret word is Boo";
    string word {};
    
    cout << "Enter the word to find : ";
    cin >> word;
    
    size_t position = s1.find( word );
    if( position != string::npos)
        cout << "Found " << word << " at position : " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;
    
    cout << "=================================================================" << endl;

    return 0;
}