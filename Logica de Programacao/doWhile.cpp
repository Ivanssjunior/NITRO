/*---------------------------------------------------------------------
   Do/While Loops
    
    It's a variant of the while loop, the Do/While will execute the code block once before check if the condition is true.

    The Loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition tested. 

    Syntax;

        do {
            // code block
        } while (condition)
    
-----------------------------------------------------------------------*/


#include <iostream>
using namespace std;

int main() {

    int i = 0;


    do {
        cout << i << endl;
        i++;
    } while (i < 5); 

    return 0; 
}