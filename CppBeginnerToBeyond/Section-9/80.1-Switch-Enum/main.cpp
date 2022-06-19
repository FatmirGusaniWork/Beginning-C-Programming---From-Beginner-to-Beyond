/* =================================================================
 * Name: Fatmir Gusani 
 * Date: 10.06.2022 
 * =================================================================
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    enum Direction {
        left, right, up, down
        };
        
    Direction heading {left};
    switch(heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        case up:
            cout << "Going up" << endl;
            break;
        case down:
            cout << "Going down" << endl;
            break;
        default:
            cout << "OKAY" << endl;
    }
        
    
    
    return 0;
}