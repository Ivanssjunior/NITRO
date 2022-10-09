//-------------------------------------------------------------------------
// Talking about hardware Inputs are like the periphal used to provice data and control signals to an information processing system such as a computer.
// Output hardware is any piece of Computer Hardware equipment used to communicate the results of data processing.
//
// Inputs for developers, we're thinking about the user inputs that will be added on our Algorithm, and the Output as something that will be displayed to the user.  
// On C++ our Input will be the keyboard and the Output will be the Terminal. 
//-------------------------------------------------------------------------
// On C++ the it will be:
// cin >> For Inputs.
// cout << for Outputs.
// endl; Has the purpose to add a new line.
// \n The same funcion as endl; but in a different format. > cout << "Like this \n"
//-------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
// For this example we need to declare a integer type, because the age it will be a number.
    int age;


//On this output we're asking for the user input his age.
    cout << "Type your age here " << endl;
// After the user input the age, the data is already declared as a Integer and here we're just giving the reference to it. 
    cin >> age; 
// The input of user will be used here to calculated his age, on this method we're doing a simple Subtracting Function. 
    cout << "You're born in " << 2022 - age << endl; 

    return 0;
}