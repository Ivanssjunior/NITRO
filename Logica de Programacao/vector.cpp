#include <iostream>
using namespace std;

int main() {

    cout << "How many students has in your class? " << endl; 

    int n;
    cin >> n;

    int grades[n];
    int sum = 0;

    for (int i=0; i < n; i++) {
        cin >> grades[i];
        sum += grades[i];
    }

    float average =  sum / n;

    cout << "Do you want to calculate the average? " << endl;
    cin >> n;

    if (n==1) {
        cout << average << endl;
    } else {
        cout << "You choosse to not calculate the average score" << endl; 
    }

    // int tamanho;

    // int n;

    // cout << "How many grades would you like to store? " << endl; 

    // cin >> tamanho; 

    // float grades[tamanho];

    // cout << "Now type the grades " << endl; 
    // for (int i=0; i < tamanho; i++) {
    //     cin >> grades[i];
    // }

    // cout << "You typed: ";
    // for (int i=0; i < tamanho; i++) {
    //     cout << grades[i] << " ";
    // }

    // cout << "Would you like to calculate the average? " << endl;
    // cin >> n; 

    // if (n==1) {
    //     cout << sum[grades] << endl; 
    // } else {
    //     cout << "You choose to not calculate the average sum." << endl; 
    // }

    // cout << endl; 

    return 0;
}
