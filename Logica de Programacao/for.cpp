/*---------------------------------------------------------------------
    Loops 

    When you know exactly how many times you want a loop, it's better use a For instead While
    
    For Syntax is:

    for (statement 1; statement 2; statement 3) {
        code block 
    }

    Statement 1 is executed one time before the execution of the code block;
    Statement 2 defines the condition for executing the code block;
    Statement 3 is executed every time after the code block has been executed;

    The following example is to print a sequence of 10 Numbers starting from 0;

    for (int i = 0; i <= 10; i++) {
        cout << i << endl; 
    }

    For this example, the Statement 1 sets a variable before the loop starts, in out example,
    we set the start at 0, but if you want to start from 1.

    On the Statement 2 will define the condition for the loop, for the exaple it will be less than 10,
    If the condition be less than 10 the loop will continue, but if it's greater the loop will end, 
    That's why we call it Conditios, becasue if it's true the loop will continue and if it's false it will end; 
    
    Statement 3 increase the value for the condition, each time when the Statement 2 is true, the Statement 3 will 
    increase the value each time the code block in the loop will be executed. 


-----------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {

    float a, b, c;

    for (int i = 1; i <= 10; i++) {
        cout << "Type three diferent grades to calculate the average grade to the Student: " << i <<  endl;

        cin >> a >> b >> c;

        cout << "The average score is: "<< (a+b+c)/3 << endl; 
    }



    return 0;
}