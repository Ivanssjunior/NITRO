/*---------------------------------------------------------------------
    Arithmetic Expressions on C++ are easy and simple if you follow the sintaxe rules.

    Arithmetic Operators

    + => Adds
    - => Subtracts
    * => Multiplies
    / => Divides
    % => Computes the remainder of dividing 
    () => Specify the order of operations in a equation

-----------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {

    int age;
// Increment situation usually in a Loop it's used a increment funcion, but theres a simple way to make it simple on C++.
    age = age + 1;
    age ++;
// The one bellow it's the decrement function which is similar to the Increment. 
    age = age - 1;
    age --;

// But if you want to increment a higher value with the same variable to diferents operators, you can use the following functions.
    age = age + 10; // It will become...
    age += 10;

    age = age - 10;
    age -= 10;

    age = age * 10;
    age *= 10;

    age = age / 10;
    age /= 10;

/*
    For the following situation we always need to pay attention to the Data Sizes of the result of our Operation,
    Because the Output it will be always based on higher bits and the Data Types also.   
*/
    int a = 2; // 4 bytes 
    float b = 3.14; // 4 bytes
    long long c = 3; // 8 bytes 
    double d = 4.15; // 8 bytes 

// For this example the Output will be a Long Long because the has 8 bytes and the int it's just 4 bytes.  
    cout << a * c << endl;

    return 0; 
}