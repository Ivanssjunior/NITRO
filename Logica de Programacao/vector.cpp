#include <iostream>
using namespace std;

int main() {

    int tamanho;

    cout << "How many scores you want to type?" << endl;
    cin >> tamanho;

    float notas[tamanho]; 

    cout << "Now type the scores" << endl;
    for (int i=0; i < tamanho; i++){
        cin >> notas[i];
    }

    cout << "You typed: ";
    for (int i=0; i < tamanho; i++) {
        cout << notas[i] << " ";
    }
    cout << endl; 

    return 0;
}
