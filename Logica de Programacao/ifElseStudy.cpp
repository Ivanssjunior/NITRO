/*---------------------------------------------------------------------
    Conditions and If Statements
        Basically works based on a Statement which If a Condition is true or false, the algotirhm should take another optiion. 

-----------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {

    bool hungry = true;
    bool sleepy = true; 

    if (hungry) {
        cout << "Eat" << endl;
    } else {
        cout << "Not Eat" << endl;
    }

    if (hungry && sleepy) {
        cout << "Eat and Sleep" << endl; 
    } else {
        cout << "Both are true" << endl;
    }

    if (!hungry && sleepy) {
        cout << "Both can't be true" << endl;
    } else {
        cout << "You're not hungry" << endl; 
    }

    if (hungry && !sleepy) {
        cout << "Something is wrong" << endl;
    } else {
        cout << "Go to sleep, you're sleepy" << endl;
    }

    if (hungry || sleepy) {
        cout << "You're going to sleep after you eat" << endl;
    } else {
        cout << "You're missing something review your code" << endl;
    }

    if (!hungry || !sleepy) {
        cout << "Both are false, review your code" << endl;
    } else {
        cout << "You're not sleepy and hungry, go do something" << endl; 
    }

    if (!hungry || sleepy) {
        cout << "You're sleepy but you're not hungry" << endl; 
    } else {
        cout << "Hey there's something missing" << endl; 
    }

    return 0;
}