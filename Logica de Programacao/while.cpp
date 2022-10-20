/*---------------------------------------------------------------------
    While Loops

    Loops can execute a block of code as long as a specified condition is reached,
    Loops are handy because they save time, reduce errors, and they make the code more readable.

    The While loop loops through a block of code as long as specified condition is true:

        while (condition) {
            code block
        }
    
    The following example the condition will loops as long the variable i be less than 10.  
        int i = 0;
        while (i < 10) {
            cout << i  << endl;
            i++;
        }
        
-----------------------------------------------------------------------*/


#include <iostream>
using namespace std;

int main() {

    float a, b, c;

    bool averageGrade = true;

    while (averageGrade) {
        cout << "Type three different grades: " << endl;
        cin  >> a >> b >> c;
        cout << "The average grade is: " << (a+b+c)/3 << endl; 

        cout << "Do you want to continue?" << endl; 
        cin >> averageGrade; 

    }

    return 0;
}