/*---------------------------------------------------------------------
    Just a basic Study abouT If Else using a user input condition.  
-----------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Type your age here: " << endl; 

    cin >> n;

    if (n >= 21) {
        cout << "Can Drive and Drink, be responseful and careful." << endl;
    } else if (n < 21)  {
        cout << "You can only Drive, be careful on the roads." << endl;
    } else if (n < 18) {
        cout << "You can't Drive, be patient on it." << endl;
    }

    return 0;
}